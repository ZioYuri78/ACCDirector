// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Networking/Public/Networking.h"
#include "ACCDStructs.h"
#include "ACCDProtocol.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogACCDProtocol, All, All);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConnectionStateChangedDelegate, const FRegistrationResult, RegistrationResult);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEntryListDelegate, const FString&, ConnectionIdentifier, const TArray<FCarInfo>&, EntryList);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRealtimeUpdateDelegate, const FString&, ConnectionIdentifier, const FRealTimeUpdate, RealTimeUpdate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRealTimeCarUpdateDelegate, const FString&, ConnectionIdentifier, const FRealTimeCarUpdate, CarUpdate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEntryListUpdateDelegate, const FString&, ConnectionIdentifier, FCarInfo, CarInfo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrackDataUpdateDelegate, const FString&, ConnectionIdentifier, const FTrackData, TrackData);


UCLASS()
class AACCDProtocol : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AACCDProtocol();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UFUNCTION(BlueprintCallable, Category = "ACCD|Protocol")
	bool RequestConnection(const FString& IP, const int32 Port, FString DisplayName, FString ConnectionPsw, int32 RTUpdateInterval, FString CommandPsw);

	UFUNCTION(BlueprintCallable, Category = "ACCD|Protocol")
	void RequestDisconnection();

	UFUNCTION(BlueprintCallable, Category = "ACCD|Protocol")
	void RequestEntryList();

	UFUNCTION(BlueprintCallable, Category = "ACCD|Protocol")
	void RequestTrackData();

	UFUNCTION(BlueprintCallable, Category = "ACCD|Protocol")
	void SetFocus(int32 CarIndex);

	UFUNCTION(BlueprintCallable, Category = "ACCD|Protocol")
	void SetFocusWithCam(int32 CarIndex, FString CameraSet, FString Camera);

	UFUNCTION(BlueprintCallable, Category = "ACCD|Protocol")
	void SetCamera(FString CameraSet, FString Camera);

	UFUNCTION(BlueprintCallable, Category = "ACCD|Protocol")
	void RequestInstantReplay(float StartSessionTime, float DurationMS, int32 InitialFocusedCarIndex = -1, FString InitialCameraSet = "", FString InitialCamera = "");

	UFUNCTION(BlueprintCallable, Category = "ACCD|Protocol")
	void RequestHUDPage(FString HudPage);

	

	UPROPERTY(BlueprintAssignable, Category = "ACCD|Protocol")
	FConnectionStateChangedDelegate OnConnectionStateChanged;

	UPROPERTY(BlueprintAssignable, Category = "ACCD|Protocol")
	FEntryListDelegate OnEntryList;

	UPROPERTY(BlueprintAssignable, Category = "ACCD|Protocol")
	FRealtimeUpdateDelegate OnRealTimeUpdate;

	UPROPERTY(BlueprintAssignable, Category = "ACCD|Protocol")
	FRealTimeCarUpdateDelegate OnRealTimeCarUpdate;

	UPROPERTY(BlueprintAssignable, Category = "ACCD|Protocol")
	FEntryListUpdateDelegate OnEntryListUpdate;

	UPROPERTY(BlueprintAssignable, Category = "ACCD|Protocol")
	FTrackDataUpdateDelegate OnTrackDataUpdate;

private:

	void Recv(const FArrayReaderPtr& ArrayReaderPtr, const FIPv4Endpoint& Endpoint);

	void WriteString(FArrayWriter &Buffer, const FString &String);

	void ReadString(const FArrayReaderPtr &Buffer, FString &String);

	FLapInfo ReadLap(const FArrayReaderPtr &Buffer);

	void SetFocusInternal(uint16 CarIndex, FString CameraSet, FString Camera);

	bool CheckByteSent(int32 BytesSent);

	
	FUdpSocketReceiver* UDPReceiver;

	FSocket* UDPSenderSocket;
	FSocket* UDPReceiverSocket;

	TSharedPtr<FInternetAddr> RemoteAddr;

	FRegistrationResult RegistrationResult;

	FString ConnectionIdentifier;

	FDateTime LastEntryListRequest;

	// TrackData and EntryListCars are declared here because we need them on Game Thread or the AsyncTask in TRACK_DATA and ENTRY_LIST_CAR will crash
	FTrackData GTrackData;
	TArray<FCarInfo> GCarsEntryList;
	FCarInfo GCarInfo;

	// debug
	int GDRegResultCounter = 0;
	int GDEntryListCounter = 0;
	int GDEntryListCarCounter = 0;
	int GDTrackDataCounter = 0;
	int GDRealTimeUpdateCounter = 0;
	int GDRealTimeCarUpdateCounter = 0;
	int GDUpdatedCar = 0;
	void PrintRecvCounters();
};
