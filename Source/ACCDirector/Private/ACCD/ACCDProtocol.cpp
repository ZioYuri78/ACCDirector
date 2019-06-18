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

	RequestDisconnection();

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

	// Initialize the sender socket
	UE_LOG(LogACCDProtocol, Log, TEXT("\nStart UDPSender ...\n"));
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

#if 0 // Just a test, it not work as expected.
	FIPv4Address IPAdr;
	FIPv4Address::Parse(IP, IPAdr);
	FIPv4Endpoint EndPoint_Client(IPAdr, Port);
	UDPSenderSocket = FUdpSocketBuilder(FString("ACCDSenderSocket")).BoundToEndpoint(EndPoint_Client).AsNonBlocking().AsReusable().WithBroadcast().WithSendBufferSize(2*1024*1024);
	if (UDPSenderSocket)
	{
		UE_LOG(LogACCDProtocol, Log, TEXT("\nUDPSender Initialized Successfully!!!\n"));
	}
	else
	{
		UE_LOG(LogACCDProtocol, Log, TEXT("\nUDPSender Initialization FAILED!!!\n"));
		return false;
	}
#else

	UDPSenderSocket = FUdpSocketBuilder(FString("ACCDSenderSocket")).AsReusable().WithBroadcast();
	if (UDPSenderSocket)
	{
		UE_LOG(LogACCDProtocol, Log, TEXT("\nUDPSender Initialized Successfully!!!\n"));
	}
	else
	{
		UE_LOG(LogACCDProtocol, Log, TEXT("\nUDPSender Initialization FAILED!!!\n"));
		return false;
	}

	int32 SendBufferSize = 2 * 1024 * 1024;
	UDPSenderSocket->SetSendBufferSize(SendBufferSize, SendBufferSize);
	//UDPSenderSocket->SetReceiveBufferSize(SendBufferSize, SendBufferSize);
#endif
	
	// Request Connection
	FArrayWriter Message;
	uint8 CommandType = (uint8)EOutboundMessageTypes::REGISTER_COMMAND_APPLICATION;
	uint8 ProtocolVersion = (uint8)EBNProtocolVersion::BROADCAST_PROTOCOL_VERSION;

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
	UE_LOG(LogACCDProtocol, Log, TEXT("\nStart UDPReceiver ...\n"));
	
	FIPv4Address IPAddress;
	FIPv4Address::Parse(IP, IPAddress);

	FIPv4Endpoint Endpoint(IPAddress, UDPSenderSocket->GetPortNo());

	int32 ReceiveBufferSize = 2*1024*1024;

	UDPReceiverSocket = FUdpSocketBuilder(FString("ACCDReceiverSocket")).AsNonBlocking().AsReusable().BoundToEndpoint(Endpoint).WithReceiveBufferSize(ReceiveBufferSize);
	if (UDPReceiverSocket)
	{
		UE_LOG(LogACCDProtocol, Log, TEXT("\nUDPReceiver Initialized Successfully!!!\n"));
	}
	else
	{
		UE_LOG(LogACCDProtocol, Log, TEXT("\nUDPReceiver Initialization FAILED!!!\n"));
		return false;
	}

	FTimespan ThreadWaitTime = FTimespan::FromMilliseconds(50);
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
	EInboundMessageTypes MessageType;
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
		else
		{
			UE_LOG(LogACCDProtocol, Error, TEXT("%s"), *RegistrationResult.ErrMsg);
		}
	} 
	break;

	// #ACCD_CASE: ENTRY_LIST
	case EInboundMessageTypes::ENTRY_LIST:
	{
		GCarsEntryList.Empty();

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

		AsyncTask(ENamedThreads::GameThread, [&]() {OnEntryList.Broadcast(ConnectionIdentifier, GCarsEntryList);});

	} 
	break;

	// #ACCD_CASE: ENTRY_LIST_CAR
	case EInboundMessageTypes::ENTRY_LIST_CAR:
	{
		uint16 CarIndex;
		*ArrayReaderPtr << CarIndex;

		if (GCarsEntryList.Contains(CarIndex))
		{			
			GCarInfo = *GCarsEntryList.FindByKey(CarIndex);			
		}
		else
		{
			UE_LOG(LogACCDProtocol, Warning, TEXT("Entry list update for unknown CarIndex: %d"), CarIndex);			
			break;
		}

		*ArrayReaderPtr << GCarInfo.CarModelType;	// Byte sized car model
		ReadString(ArrayReaderPtr, GCarInfo.TeamName);
		*ArrayReaderPtr << GCarInfo.RaceNumber;
		*ArrayReaderPtr << GCarInfo.CupCategory;	// Cup: Overall/Pro = 0, ProAm = 1, Am = 2, Silver = 3, National = 4
		
		uint8 TempCurrentDriverIndex;
		*ArrayReaderPtr << TempCurrentDriverIndex;
		GCarInfo.CurrentDriverIndex = (int32)TempCurrentDriverIndex;
		
		// Now the drivers on this car
		uint8 DriversOnCarCount;
		*ArrayReaderPtr << DriversOnCarCount;
		for (int32 i = 0; i < DriversOnCarCount; i++)
		{
			FDriverInfo DriverInfo = FDriverInfo();
			
			ReadString(ArrayReaderPtr, DriverInfo.FirstName);
			ReadString(ArrayReaderPtr, DriverInfo.LastName);			
			ReadString(ArrayReaderPtr, DriverInfo.ShortName);
			*ArrayReaderPtr << DriverInfo.Category;	// Platinum = 3, Gold = 2, Silver = 1, Bronze = 0

			GCarInfo.AddDriver(DriverInfo);
		}

		int32 Index = GCarsEntryList.IndexOfByKey(GCarInfo);
		GCarsEntryList[Index] = GCarInfo;
		
		AsyncTask(ENamedThreads::GameThread, [&] {OnEntryListUpdate.Broadcast(ConnectionIdentifier, GCarInfo); });
	} 
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

	} 
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
		}

		float TempTimeOfDay = 0.f;
		*ArrayReaderPtr << TempTimeOfDay;
		RTUpdate.TimeOfDay = FTimespan::FromMilliseconds(TempTimeOfDay);

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
	} 
	break;

	// #ACCD_CASE: REALTIME_CAR_UPDATE
	case EInboundMessageTypes::REALTIME_CAR_UPDATE:
	{
		
		FRealTimeCarUpdate CarUpdate;

		uint16 TempCarIndex;
		*ArrayReaderPtr << TempCarIndex;
		CarUpdate.CarIndex = TempCarIndex;

		uint16 TempDriverIndex;
		*ArrayReaderPtr << TempDriverIndex;	// Driver swap will make this change
		CarUpdate.DriverIndex = TempDriverIndex;

		*ArrayReaderPtr << CarUpdate.DriverCount;

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

		CarUpdate.BestSessionLap = ReadLap(ArrayReaderPtr);
		CarUpdate.LastLap = ReadLap(ArrayReaderPtr);
		CarUpdate.CurrentLap = ReadLap(ArrayReaderPtr);

		//const FCarInfo TempCarInfo = FCarInfo(CarUpdate.CarIndex);
		if (!GCarsEntryList.Contains(CarUpdate.CarIndex)/* || TempCarInfo.Drivers.Num() != CarUpdate.DriverCount*/)
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
			OnRealTimeCarUpdate.Broadcast(ConnectionIdentifier, CarUpdate);
		}
		
		
	} 
	break;

	// #ACCD_CASE: BROADCASTING_EVENT
	case EInboundMessageTypes::BROADCASTING_EVENT:
	{
		*ArrayReaderPtr << GBroadcastingEvent.EventType;
		ReadString(ArrayReaderPtr, GBroadcastingEvent.Msg);
		*ArrayReaderPtr << GBroadcastingEvent.TimeMs;
		*ArrayReaderPtr << GBroadcastingEvent.CarId;

		if (GCarsEntryList.Contains(FCarInfo(GBroadcastingEvent.CarId)))
		{
			switch (GBroadcastingEvent.EventType)
			{

			// These cases will be filtered by user in the widget, here we only exclude the LapCompleted event.
			case EBroadcastingCarEventType::GreenFlag:
			case EBroadcastingCarEventType::SessionOver:
			case EBroadcastingCarEventType::Accident:
			case EBroadcastingCarEventType::PenaltyCommMsg:
			case EBroadcastingCarEventType::BestSessionLap:
			case EBroadcastingCarEventType::BestPersonalLap:
			{
				// #ACCD_TODO fix this
				int32 CIndex = GCarsEntryList.Find(GBroadcastingEvent.CarId);
				GBroadcastingEvent.CarData = GCarsEntryList[CIndex];
				AsyncTask(ENamedThreads::GameThread, [&]() {OnBroadcastingEvent.Broadcast(ConnectionIdentifier, GBroadcastingEvent); });
				break;
			}
			
			default:
				break;
			}

			/*if (GCarsEntryList.IsValidIndex(GBroadcastingEvent.CarId))
			{
				GBroadcastingEvent.CarData = GCarsEntryList[GBroadcastingEvent.CarId];				
				AsyncTask(ENamedThreads::GameThread, [&]() {OnBroadcastingEvent.Broadcast(ConnectionIdentifier, GBroadcastingEvent); });
			}*/
			
		}
		break;
	}

	default:
		UE_LOG(LogACCDProtocol, Warning, TEXT("=== Undefined Inbound Message: %d ==="), MessageType);
		break;
	}

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
	String.Empty();

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
		LapInfo.LapType = ELapType::Outlap;
	}
	else if (bIsInLap)
	{
		LapInfo.LapType = ELapType::Inlap;
	}
	else
	{
		LapInfo.LapType = ELapType::Regular;
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



