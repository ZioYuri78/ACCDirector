// Fill out your copyright notice in the Description page of Project Settings.

#include "ACCDProtocol.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY(LogACCDProtocol);

// Sets default values
AACCDProtocol::AACCDProtocol()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UDPReceiver = nullptr;
	UDPSenderSocket = nullptr;
	UDPReceiverSocket = nullptr;
}

// Called when the game starts or when spawned
void AACCDProtocol::BeginPlay()
{
	Super::BeginPlay();
	
	LastEntryListRequest = FDateTime::Now();
}

// Called every frame
void AACCDProtocol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AACCDProtocol::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (UDPReceiver)
	{
		UDPReceiver->Stop();
		delete UDPReceiver;
		UDPReceiver = nullptr;
	}

	if (UDPReceiverSocket)
	{
		UDPReceiverSocket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(UDPReceiverSocket);
	}

	if (UDPSenderSocket)
	{
		UDPSenderSocket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(UDPSenderSocket);
	}
}

bool AACCDProtocol::RequestConnection(const FString& IP, const int32 Port, FString DisplayName, FString ConnectionPsw, int32 RTUpdateInterval, FString CommandPsw)
{

	FString SocketDescriptiopn = FString("ACCDSocket");

	// Initialize the sender socket
	RemoteAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();

	bool bIsValid;
	RemoteAddr->SetIp(*IP, bIsValid);
	RemoteAddr->SetPort(Port);

	if (!bIsValid)
	{
		UE_LOG(LogACCDProtocol, Error, TEXT("IP Address %s was not valid!"), *IP);		
		return false;
	}

	ConnectionIdentifier = RemoteAddr->ToString(true);

	UDPSenderSocket = FUdpSocketBuilder(SocketDescriptiopn).AsReusable().WithBroadcast();

	int32 SendBufferSize = 1024;
	UDPSenderSocket->SetSendBufferSize(SendBufferSize, SendBufferSize);
	UDPSenderSocket->SetReceiveBufferSize(SendBufferSize, SendBufferSize);

	
	UE_LOG(LogACCDProtocol, Log, TEXT("\nUDPSender Initialized Successfully!!!\n"));
	

	// Request Connection
	FArrayWriter Message;
	uint8 CommandType = (uint8)EOutboundMessageTypes::REGISTER_COMMAND_APPLICATION;
	uint8 ProtocolVersion = (uint8)EBNProtocol::BROADCAST_PROTOCOL_VERSION;

	Message << CommandType;
	Message << ProtocolVersion;

	WriteString(Message, DisplayName);

	WriteString(Message, ConnectionPsw);

	Message << RTUpdateInterval;

	WriteString(Message, CommandPsw);

	int32 BytesSent = 0;
	UDPSenderSocket->SendTo(Message.GetData(), Message.Num(), BytesSent, *RemoteAddr);

	if (!CheckByteSent(BytesSent))
	{
		return false;
	}

	
	// Initialize the receiver socket and UDP receiver object
	UE_LOG(LogACCDProtocol, Log, TEXT("\nStart UDPReceiver...\n"));
	
	FIPv4Address IPAddress;
	FIPv4Address::Parse(IP, IPAddress);

	FIPv4Endpoint Endpoint(IPAddress, UDPSenderSocket->GetPortNo());

	int32 ReceiveBufferSize = 1024;

	UDPReceiverSocket = FUdpSocketBuilder(SocketDescriptiopn).AsNonBlocking().AsReusable().BoundToEndpoint(Endpoint).WithReceiveBufferSize(ReceiveBufferSize);

	FTimespan ThreadWaitTime = FTimespan::FromMilliseconds(100);
	UDPReceiver = new FUdpSocketReceiver(UDPReceiverSocket, ThreadWaitTime, TEXT("UDPReceiver thread"));
	UDPReceiver->OnDataReceived().BindUObject(this, &AACCDProtocol::Recv);

	UDPReceiver->Start();

	return true;
}

void AACCDProtocol::RequestDisconnection()
{
	FArrayWriter Message;
	uint8 CommandType = (uint8)EOutboundMessageTypes::UNREGISTER_COMMAND_APPLICATION;


	Message << CommandType;
	Message << RegistrationResult.ConnectionID;

	int32 BytesSent = 0;
	if (RemoteAddr)
	{
		UDPSenderSocket->SendTo(Message.GetData(), Message.Num(), BytesSent, *RemoteAddr);
		CheckByteSent(BytesSent);
	}
	else
	{
		UE_LOG(LogACCDProtocol, Warning, TEXT("RequestDisconnection() invalid RemoteAddr"));
	}

	
}

void AACCDProtocol::RequestEntryList()
{
	FArrayWriter Message;
	uint8 CommandType = (uint8)EOutboundMessageTypes::REQUEST_ENTRY_LIST;
	int32 ConnectionID = RegistrationResult.ConnectionID;

	Message << CommandType;
	Message << ConnectionID;

	int32 BytesSent = 0;
	if (RemoteAddr)
	{
		UDPSenderSocket->SendTo(Message.GetData(), Message.Num(), BytesSent, *RemoteAddr);
		CheckByteSent(BytesSent);
	}
	else
	{
		UE_LOG(LogACCDProtocol, Warning, TEXT("RequestEntryList() invalid RemoteAddr"));
	}

}

void AACCDProtocol::RequestTrackData()
{
	FArrayWriter Message;
	uint8 CommandType = (uint8)EOutboundMessageTypes::REQUEST_TRACK_DATA;
	int32 ConnectionID = RegistrationResult.ConnectionID;

	Message << CommandType;
	Message << ConnectionID;

	int32 BytesSent = 0;
	if (RemoteAddr)
	{
		UDPSenderSocket->SendTo(Message.GetData(), Message.Num(), BytesSent, *RemoteAddr);
		CheckByteSent(BytesSent);
	}
	else
	{
		UE_LOG(LogACCDProtocol, Warning, TEXT("RequestTrackData() invalid RemoteAddr"));
	}
	
}

void AACCDProtocol::SetFocus(int32 CarIndex)
{
	SetFocusInternal((uint16)CarIndex, TEXT(""), TEXT(""));
}

void AACCDProtocol::SetFocusWithCam(int32 CarIndex, FString CameraSet, FString Camera)
{
	SetFocusInternal((uint16)CarIndex, CameraSet, Camera);
}

void AACCDProtocol::SetCamera(FString CameraSet, FString Camera)
{
	SetFocusInternal((uint16)-1, CameraSet, Camera);
}

void AACCDProtocol::RequestInstantReplay(float StartSessionTime, float DurationMS, int32 InitialFocusedCarIndex, FString InitialCameraSet, FString InitialCamera)
{
	FArrayWriter Buffer;

	uint8 CommandType = (uint8)EOutboundMessageTypes::INSTANT_REPLAY_REQUEST;
	int32 ConnectionID = RegistrationResult.ConnectionID;

	Buffer << CommandType;
	Buffer << ConnectionID;
	Buffer << StartSessionTime;
	Buffer << DurationMS;
	Buffer << InitialFocusedCarIndex;

	WriteString(Buffer, InitialCameraSet);
	WriteString(Buffer, InitialCamera);


	int32 BytesSent = 0;
	if (RemoteAddr)
	{
		UDPSenderSocket->SendTo(Buffer.GetData(), Buffer.Num(), BytesSent, *RemoteAddr);
		CheckByteSent(BytesSent);
	}
	else
	{
		UE_LOG(LogACCDProtocol, Warning, TEXT("RequestInstantReplay(...) invalid RemoteAddr"));
	}	
}

void AACCDProtocol::RequestHUDPage(FString HudPage)
{
	FArrayWriter Buffer;

	uint8 CommandType = (uint8)EOutboundMessageTypes::CHANGE_HUD_PAGE;
	int32 ConnectionID = RegistrationResult.ConnectionID;

	Buffer << CommandType;
	Buffer << ConnectionID;
	WriteString(Buffer, HudPage);

	int32 BytesSent = 0;
	if (RemoteAddr)
	{
		UDPSenderSocket->SendTo(Buffer.GetData(), Buffer.Num(), BytesSent, *RemoteAddr);
		CheckByteSent(BytesSent);
	}
	else
	{
		UE_LOG(LogACCDProtocol, Warning, TEXT("RequestHUDPage(...) invalid RemoteAddr"));
	}
	
}

void AACCDProtocol::Recv(const FArrayReaderPtr & ArrayReaderPtr, const FIPv4Endpoint & Endpoint)
{
	EInboundMessageTypes MessageType = EInboundMessageTypes::NONE;
	*ArrayReaderPtr << MessageType;

	switch (MessageType)
	{
		// #ACCD_CASE: REGISTRATION_RESULT
	case EInboundMessageTypes::REGISTRATION_RESULT:
	{

		*ArrayReaderPtr << RegistrationResult.ConnectionID;
		*ArrayReaderPtr << RegistrationResult.ConnectionSuccess;
		*ArrayReaderPtr << RegistrationResult.IsReadOnly;
		ReadString(ArrayReaderPtr, RegistrationResult.ErrMsg);

		RegistrationResult.Target = Endpoint.Address.ToString();

		OnConnectionStateChanged.Broadcast(RegistrationResult);

		if (RegistrationResult.ConnectionSuccess)
		{
			RequestEntryList();
			RequestTrackData();
		}
	} GDRegResultCounter++;
	break;

	// #ACCD_CASE: ENTRY_LIST
	case EInboundMessageTypes::ENTRY_LIST:
	{
		GCarsEntryList.Empty();
		TArray<uint16> DriverIndexes;
		int32 ConnectionID = 0;
		uint16 CarEntryCount = 0;

		*ArrayReaderPtr << ConnectionID;
		*ArrayReaderPtr << CarEntryCount;
		for (int i = 0; i < CarEntryCount; i++)
		{
			uint16 TempCarIndex;
			*ArrayReaderPtr << TempCarIndex;
			GCarsEntryList.Add(FCarInfo(TempCarIndex));
		}

		uint16 DriverEntryCount = 0;
		*ArrayReaderPtr << DriverEntryCount;
		for (int j = 0; j < DriverEntryCount; j++)
		{
			uint16 TempDriverIndex = 0;
			*ArrayReaderPtr << TempDriverIndex;
			DriverIndexes.Add(TempDriverIndex);
		}

		AsyncTask(ENamedThreads::GameThread, [&]() {OnEntryList.Broadcast(ConnectionIdentifier, GCarsEntryList);});

	} GDEntryListCounter++;
	break;

	// #ACCD_CASE: ENTRY_LIST_CAR
	case EInboundMessageTypes::ENTRY_LIST_CAR:
	{
		uint16 CarIndex;
		*ArrayReaderPtr << CarIndex;

		if (GCarsEntryList.Contains(GCarInfo))
		{			
			GCarInfo = *GCarsEntryList.FindByKey(CarIndex);			
		}
		else
		{
			UE_LOG(LogACCDProtocol, Warning, TEXT("Entry list update for unknown CarIndex: %d"), CarIndex);			
			break;
		}

		*ArrayReaderPtr << GCarInfo.CarModelType;
		ReadString(ArrayReaderPtr, GCarInfo.TeamName);
		*ArrayReaderPtr << GCarInfo.RaceNumber;
		ReadString(ArrayReaderPtr, GCarInfo.TeamCarName);
		ReadString(ArrayReaderPtr, GCarInfo.DisplayName);
		*ArrayReaderPtr << GCarInfo.CupCategory; 

		// Now the drivers on this car
		uint8 DriversOnCarCount;
		*ArrayReaderPtr << DriversOnCarCount;
		for (int32 i = 0; i < DriversOnCarCount; i++)
		{
			uint16 DriverIndex;
			*ArrayReaderPtr << DriverIndex;

			uint8 HasDriverInfo;
			*ArrayReaderPtr << HasDriverInfo;
			if (HasDriverInfo)
			{
				FDriverInfo DriverInfo = FDriverInfo(DriverIndex);

				ReadString(ArrayReaderPtr, DriverInfo.FirstName);
				ReadString(ArrayReaderPtr, DriverInfo.LastName);
				ReadString(ArrayReaderPtr, DriverInfo.NickName);
				ReadString(ArrayReaderPtr, DriverInfo.ShortName);
				
				*ArrayReaderPtr << DriverInfo.Category;				

				GCarInfo.AddDriver(DriverInfo);
			}
		}

		int32 Index = GCarsEntryList.IndexOfByKey(GCarInfo);
		GCarsEntryList[Index] = GCarInfo;
		
		AsyncTask(ENamedThreads::GameThread, [&] {OnEntryListUpdate.Broadcast(ConnectionIdentifier, GCarInfo); });

	} GDEntryListCarCounter++;
	break;

	// #ACCD_CASE: TRACK_DATA
	case EInboundMessageTypes::TRACK_DATA:
	{
		int32 ConnectionID = 0;
		*ArrayReaderPtr << ConnectionID;

		GTrackData = FTrackData();
		ReadString(ArrayReaderPtr, GTrackData.TrackName);
		*ArrayReaderPtr << GTrackData.TrackID;
		*ArrayReaderPtr << GTrackData.TrackMeters;

		uint8 CameraSetCount = 0;
		*ArrayReaderPtr << CameraSetCount;

		for (int32 CamSet = 0; CamSet < CameraSetCount; CamSet++)
		{
			FString CamSetName;
			ReadString(ArrayReaderPtr, CamSetName);

			FCameraSet CameraSet = FCameraSet(CamSetName);

			uint8 CamerasCount;
			*ArrayReaderPtr << CamerasCount;
			for (int32 Cam = 0; Cam < CamerasCount; Cam++)
			{
				FString CameraName;
				ReadString(ArrayReaderPtr, CameraName);

				CameraSet.Cameras.Add(CameraName);

			}

			GTrackData.CameraSets.Add(CameraSet);
		}


		uint8 HudPagesCount = 0;
		*ArrayReaderPtr << HudPagesCount;
		for (int i = 0; i < HudPagesCount; i++)
		{
			FString HudPageName;
			ReadString(ArrayReaderPtr, HudPageName);
			GTrackData.HudPages.Add(HudPageName);
		}

		AsyncTask(ENamedThreads::GameThread, [&] {OnTrackDataUpdate.Broadcast(ConnectionIdentifier, GTrackData); });

	} GDTrackDataCounter++;
	break;

	// #ACCD_CASE: REALTIME_UPDATE
	case EInboundMessageTypes::REALTIME_UPDATE:
	{
		FRealTimeUpdate RTUpdate;

		uint16 TempEventIndex = 0;
		*ArrayReaderPtr << TempEventIndex;
		RTUpdate.EventIndex = (int32)TempEventIndex;

		uint16 TempSessionIndex = 0;
		*ArrayReaderPtr << TempSessionIndex;
		RTUpdate.SessionIndex = (int32)TempSessionIndex;

		*ArrayReaderPtr << RTUpdate.SessionType;
		*ArrayReaderPtr << RTUpdate.Phase;

		float TempSessionTime = 0.f;
		*ArrayReaderPtr << TempSessionTime;
		RTUpdate.SessionTime = FTimespan::FromMilliseconds(TempSessionTime);

		float TempSessionEndTime = 0.f;
		*ArrayReaderPtr << TempSessionEndTime;
		RTUpdate.SessionEndTime = FTimespan::FromMilliseconds(TempSessionEndTime);

		RTUpdate.SessionRemainingTime = RTUpdate.SessionEndTime - RTUpdate.SessionTime;

		*ArrayReaderPtr << RTUpdate.FocusedCarIndex;
		ReadString(ArrayReaderPtr, RTUpdate.ActiveCameraSet);
		ReadString(ArrayReaderPtr, RTUpdate.ActiveCamera);
		ReadString(ArrayReaderPtr, RTUpdate.CurrentHudPage);

		*ArrayReaderPtr << RTUpdate.IsReplayPlaying;
		if (RTUpdate.IsReplayPlaying > 0)
		{
			*ArrayReaderPtr << RTUpdate.ReplaySessionTime;
			*ArrayReaderPtr << RTUpdate.ReplayRemainingTime;
			*ArrayReaderPtr << RTUpdate.ReplayFocusedCar;
		}

		uint16 TimeOfDay = 0;
		*ArrayReaderPtr << TimeOfDay;
		RTUpdate.TimeOfDay = FTimespan(TimeOfDay / 100, TimeOfDay % 100, 0);

		*ArrayReaderPtr << RTUpdate.AmbientTemp;
		*ArrayReaderPtr << RTUpdate.TrackTemp;

		uint8 TempClouds = 0;
		*ArrayReaderPtr << TempClouds;
		RTUpdate.Clouds = TempClouds / 10.f;

		uint8 TempRainLevel = 0;
		*ArrayReaderPtr << TempRainLevel;
		RTUpdate.RainLevel = TempRainLevel / 10.f;

		uint8 TempWetness = 0;
		*ArrayReaderPtr << TempWetness;
		RTUpdate.Wetness = TempWetness / 10.f;


		RTUpdate.BestSessionLap = ReadLap(ArrayReaderPtr);

		OnRealTimeUpdate.Broadcast(ConnectionIdentifier, RTUpdate);
	} GDRealTimeUpdateCounter++;
	break;

	// #ACCD_CASE: REALTIME_CAR_UPDATE
	case EInboundMessageTypes::REALTIME_CAR_UPDATE:
	{
		FRealTimeCarUpdate CarUpdate;

		uint16 TempCarIndex;
		*ArrayReaderPtr << TempCarIndex;
		CarUpdate.CarIndex = TempCarIndex;
		//debug
		GDUpdatedCar = CarUpdate.CarIndex;
		//------
		uint16 TempDriverIndex;
		*ArrayReaderPtr << TempDriverIndex;	// Driver swap will make this change
		CarUpdate.DriverIndex = TempDriverIndex;

		uint8 TempGear = 0;
		*ArrayReaderPtr << TempGear;
		CarUpdate.Gear = TempGear - 2;	// -2 makes the R -1, N 0 and the rest as-is

		*ArrayReaderPtr << CarUpdate.WorldPosX;
		*ArrayReaderPtr << CarUpdate.WorldPosY;
		*ArrayReaderPtr << CarUpdate.Yaw;
		*ArrayReaderPtr << CarUpdate.CarLocation;	// - , Track, Pitlane, PitEntry, PitExit = 4

		uint16 TempKmh;
		*ArrayReaderPtr << TempKmh;
		CarUpdate.Kmh = TempKmh;

		uint16 TempPosition;
		*ArrayReaderPtr << TempPosition;	// official P/Q/R position (1 based)
		CarUpdate.Position = TempPosition;

		*ArrayReaderPtr << CarUpdate.CupPosition;	// official P/Q/R position (1 based)

		uint16 TempTrackPosition;
		*ArrayReaderPtr << TempTrackPosition; // position on track (1 based)
		CarUpdate.TrackPosition = TempTrackPosition;

		*ArrayReaderPtr << CarUpdate.SplinePosition;	// Track position between 0.0 and 1.0

		uint16 TempLaps;
		*ArrayReaderPtr << TempLaps;
		CarUpdate.Laps = TempLaps;

		*ArrayReaderPtr << CarUpdate.Delta;	// Realtime delta to best session lap


		// #ACCD_TODO current and last lap are broken from ACC!
		CarUpdate.BestSessionLap = ReadLap(ArrayReaderPtr);
		CarUpdate.LastLap = ReadLap(ArrayReaderPtr);
		CarUpdate.CurrentLap = ReadLap(ArrayReaderPtr);

		const FCarInfo TempCarInfo = FCarInfo(CarUpdate.CarIndex);
		const FDriverInfo TempDriverInfo = FDriverInfo(CarUpdate.DriverIndex);
		if (!GCarsEntryList.Contains(TempCarInfo) || !GCarsEntryList[CarUpdate.CarIndex].Drivers.Contains(TempDriverInfo))
		{
			
			if ((FDateTime::Now().GetSecond() - LastEntryListRequest.GetSecond()) > 1)
			{
				UE_LOG(LogACCDProtocol, Warning, TEXT("CarUpdate %d|%d not know, will ask for new EntryList"), CarUpdate.CarIndex, CarUpdate.DriverIndex);
				LastEntryListRequest = FDateTime::Now();				
				RequestEntryList();
				
			}
		}
		else
		{
#if 1
			OnRealTimeCarUpdate.Broadcast(ConnectionIdentifier, CarUpdate);
#else
			// Call it only if you need to create something at runtime
			AsyncTask(ENamedThreads::GameThread, []() {OnRealTimeCarUpdate.Broadcast(ConnectionIdentifier, CarUpdate); });
#endif
		}

		
	} GDRealTimeCarUpdateCounter++;
	break;


	default:
		UE_LOG(LogACCDProtocol, Warning, TEXT("===|Undefined inbound message|==="));
		break;
	}

#if 0	// DEBUG
	PrintRecvCounters();
#endif
}

void AACCDProtocol::WriteString(FArrayWriter & Buffer, const FString & String)
{
	int16 SLength = String.Len();
	ANSICHAR *UTF8String = TCHAR_TO_UTF8(*String);

	Buffer << SLength;
	for (char *p = UTF8String; p < UTF8String + SLength; ++p)
	{
		Buffer << *p;
	}
}

void AACCDProtocol::ReadString(const FArrayReaderPtr & Buffer, FString & String)
{
	int16 SLength = 0;
	uint8 SChar = 0;

	*Buffer << SLength;

	for (int i = 0; i < SLength; ++i)
	{
		*Buffer << SChar;
		String.AppendChar(SChar);
	}
}

FLapInfo AACCDProtocol::ReadLap(const FArrayReaderPtr & Buffer)
{
	FLapInfo LapInfo;

	*Buffer << LapInfo.LaptimeMS;
	*Buffer << LapInfo.CarIndex;
	*Buffer << LapInfo.DriverIndex;

	uint8 SplitCount = 0;
	*Buffer << SplitCount;
	for (int i = 0; i < SplitCount; i++)
	{
		int32 Split;
		*Buffer << Split;
		LapInfo.Splits.Add(Split);
	}

	*Buffer << LapInfo.bIsValid;
	*Buffer << LapInfo.bIsValidForBest;

	uint8 bIsOutLap;
	*Buffer << bIsOutLap;

	uint8 bIsInLap;
	*Buffer << bIsInLap;

	if (bIsOutLap)
	{
		LapInfo.Type = ELapType::Outlap;
	}
	else if (bIsInLap)
	{
		LapInfo.Type = ELapType::Inlap;
	}
	else
	{
		LapInfo.Type = ELapType::Regular;
	}

	// #ACCD_TODO let me try this solution for now, we set invalid split and lap values to -1 and we will manage it with the widget
	for (int Split : LapInfo.Splits)
	{
		if (Split > 0x00FFFFFF)
		{
			Split = -1;
		}
	}

	if (LapInfo.LaptimeMS > 0x00FFFFFF)
	{
		LapInfo.LaptimeMS = -1;
	}

	/* === From original ksBroadcastingProtocol ===
	// Now it's possible that this is "no" lap that doesn't even include a
	// first split, we can detect this by comparing with int32.Max
	while (lap.Splits.Count < 3)
	{
		lap.Splits.Add(null);
	}

	// "null" entries are Int32.Max, in the C# world we can replace this to null
	for (int i = 0; i < lap.Splits.Count; i++)
		if (lap.Splits[i] == Int32.MaxValue)
			lap.Splits[i] = null;

	if (lap.LaptimeMS == Int32.MaxValue)
		lap.LaptimeMS = null;
	*/


	return LapInfo;
}

void AACCDProtocol::SetFocusInternal(uint16 CarIndex, FString CameraSet, FString Camera)
{
	FArrayWriter Buffer;

	uint8 CommandType = (uint8)EOutboundMessageTypes::CHANGE_FOCUS;
	int32 ConnectionID = RegistrationResult.ConnectionID;

	Buffer << CommandType;
	Buffer << RegistrationResult.ConnectionID;

	uint8 Byte;

	if (CarIndex == -1)
	{
		Buffer << (Byte = 0);
	}
	else
	{
		Buffer << (Byte = 1);
		Buffer << CarIndex;
	}

	if (CameraSet.IsEmpty() || Camera.IsEmpty())
	{
		Buffer << (Byte = 0);
	}
	else
	{
		Buffer << (Byte = 1);
		WriteString(Buffer, CameraSet);
		WriteString(Buffer, Camera);
	}


	int32 BytesSent = 0;
	UDPSenderSocket->SendTo(Buffer.GetData(), Buffer.Num(), BytesSent, *RemoteAddr);

	CheckByteSent(BytesSent);
}

bool AACCDProtocol::CheckByteSent(int32 BytesSent)
{
	if (BytesSent <= 0)
	{		
		UE_LOG(LogACCDProtocol, Warning, TEXT("Socket is valid but the receiver received 0 bytes, make sure it is listening properly!"));
		return false;
	}

	return true;
}

void AACCDProtocol::PrintRecvCounters()
{
	FString Str = FString::Printf(TEXT("\n"
		                               "|Registration Result: %d\n"
		                               "|EntryList: %d\n"
		                               "|Entry List Car: %d\n"
		                               "|Track Data: %d\n"
		                               "|Realtime Update: %d\n"
		                               "|Realtime Car Update: %d\n"
	                                   "|Updated Car: %d\n"), 
		GDRegResultCounter, GDEntryListCounter, GDEntryListCarCounter, GDTrackDataCounter, GDRealTimeUpdateCounter, GDRealTimeCarUpdateCounter, GDUpdatedCar);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 0.250f, FColor::Blue, Str);
	}

	UE_LOG(LogACCDProtocol, Log, TEXT("%s"), *Str);
}

