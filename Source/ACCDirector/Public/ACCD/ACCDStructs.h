#pragma once

#include "ACCD/ACCDEnums.h"
#include "ACCDStructs.generated.h"

// ===STRUCTS===


USTRUCT(BlueprintType)
struct FRegistrationResult
{
	GENERATED_USTRUCT_BODY()

	FRegistrationResult() {}

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Registration Result")
	FString Target;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Registration Result")
	int32 ConnectionID = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Registration Result")
	uint8 ConnectionSuccess = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Registration Result")
	uint8 IsReadOnly = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Registration Result")
	FString ErrMsg = FString("---");

};


USTRUCT(BlueprintType)
struct FDriverInfo
{
	GENERATED_USTRUCT_BODY()

	FDriverInfo() {}

	FDriverInfo(uint16 _DriverIndex)
	{
		DriverIndex = _DriverIndex;
		BPDriverIndex = _DriverIndex;
	}

	// I need it because i can't expose uint16 types on Blueprint
	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Driver Info")
	int32 BPDriverIndex = 0;

	uint16 DriverIndex = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Driver Info")
	FString FirstName;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Driver Info")
	FString LastName;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Driver Info")
	FString NickName;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Driver Info")
	FString ShortName;

	// Platinum = 3, Gold = 2, Silver = 1, Bronze = 0
	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Driver Info")
	EDriverCategory Category = EDriverCategory::Error;

	bool operator==(const FDriverInfo &Arg) const
	{
		return DriverIndex == Arg.DriverIndex;
	}
};


USTRUCT(BlueprintType)
struct FCarInfo
{
	GENERATED_USTRUCT_BODY()

	FCarInfo() {}

	FCarInfo(uint16 _CarIndex)
	{
		CarIndex = _CarIndex;
		BPCarIndex = _CarIndex;
	}

	void AddDriver(FDriverInfo DriverInfo)
	{
		Drivers.Add(DriverInfo);
	}

	// I need it because i can't expose uint16 types on Blueprint
	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Car Info")
	int32 BPCarIndex = 0;

	uint16 CarIndex = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Car Info")
	uint8 CarModelType = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Car Info")
	FString TeamName;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Car Info")
	int32 RaceNumber = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Car Info")
	FString TeamCarName;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Car Info")
	FString DisplayName;

	// Cup: Overall/Pro = 0, ProAm = 1, Am = 2, Silver = 3, National = 4
	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Car Info")
	uint8 CupCategory = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Car Info")
	TArray<FDriverInfo> Drivers;

	bool operator==(const FCarInfo &Arg) const
	{
		return CarIndex == Arg.CarIndex;
	}
};


USTRUCT(BlueprintType)
struct FLapInfo
{
	GENERATED_USTRUCT_BODY()

	FLapInfo() {}

	FString ToString()
	{
		FString Result;

		TArray<FString> SplitsToStrings;
		for (int32 Split : Splits)
		{
			SplitsToStrings.Add(FString::FromInt(Split));
		}

		FString TempSplits = FString::Join(SplitsToStrings, TEXT("|"));
		FString TempTimeMS = FString::Printf(TEXT("%f.5"), LaptimeMS);
		return Result = TempTimeMS + TEXT("|") + TempSplits;
	}

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Lap Info")
	int32 LaptimeMS = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Lap Info")
	TArray<int32> Splits;

	uint16 CarIndex = 0;
	uint16 DriverIndex = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Lap Info")
	uint8 bIsValid = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Lap Info")
	uint8 bIsValidForBest = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Lap Info")
	ELapType Type = ELapType::ERROR;

};


USTRUCT(BlueprintType)
struct FRealTimeCarUpdate
{
	GENERATED_USTRUCT_BODY()

	FRealTimeCarUpdate() {}

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	int32 CarIndex = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	int32 DriverIndex = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	int32 Gear = 0;


	float WorldPosX = 0.f;
	float WorldPosY = 0.f;
	float Yaw = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	ECarLocationEnum CarLocation = ECarLocationEnum::NONE;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	int32 Kmh = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	int32 Position = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	int32 TrackPosition = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	float SplinePosition = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	int32 Delta = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	FLapInfo BestSessionLap;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	FLapInfo LastLap;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	FLapInfo CurrentLap;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Car Update")
	int32 Laps = 0;

	uint16 CupPosition = 0;
};


USTRUCT(BlueprintType)
struct FRealTimeUpdate
{
	GENERATED_USTRUCT_BODY()

	FRealTimeUpdate() {}

	int32 EventIndex = 0;
	int32 SessionIndex = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	ESessionPhase Phase = ESessionPhase::NONE;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	FTimespan SessionTime = FTimespan::FromMilliseconds(1000);

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	FTimespan TimeOfDay = FTimespan::FromMilliseconds(1000);

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	float RainLevel = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	float Clouds = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	float Wetness = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	FLapInfo BestSessionLap;;

	
	uint16 BestLapCarIndex = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	int32 BPBestLapCarIndex = 0;

	
	uint16 BestLapDriverIndex = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	int32 BPBestLapDriverIndex = 0;


	int32 FocusedCarIndex = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	FString ActiveCameraSet;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	FString ActiveCamera;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	uint8 IsReplayPlaying = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	float ReplaySessionTime = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	float ReplayRemainingTime = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	int32 ReplayFocusedCar = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	FTimespan SessionRemainingTime = FTimespan::FromMilliseconds(1000);

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	FTimespan SessionEndTime = FTimespan::FromMilliseconds(1000);

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	ERaceSessionType SessionType = ERaceSessionType::NONE;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	uint8 AmbientTemp = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	uint8 TrackTemp = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Realtime Update")
	FString CurrentHudPage;
};


USTRUCT(BlueprintType)
struct FCameraSet
{
	GENERATED_USTRUCT_BODY()

	FCameraSet() {};

	FCameraSet(FString _CamSetName)
	{
		CameraSetName = _CamSetName;
	}

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Camera Set")
	FString CameraSetName;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Camera Set")
	TArray<FString> Cameras;
};


USTRUCT(BlueprintType)
struct FTrackData
{
	GENERATED_USTRUCT_BODY()

	FTrackData() {}

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Track Data")
	FString TrackName;

	int32 TrackID = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Track Data")
	int32 TrackMeters = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Track Data")
	TArray<FCameraSet> CameraSets;

	UPROPERTY(BlueprintReadOnly, Category = "ACCD|Track Data")
	TArray<FString> HudPages;
};