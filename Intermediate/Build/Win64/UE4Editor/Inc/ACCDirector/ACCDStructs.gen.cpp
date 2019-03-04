// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACCDirector/Public/ACCD/ACCDStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACCDStructs() {}
// Cross Module References
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FTrackData();
	UPackage* Z_Construct_UPackage__Script_ACCDirector();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCameraSet();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FRealTimeUpdate();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ERaceSessionType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FLapInfo();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ESessionPhase();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FRealTimeCarUpdate();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ECarLocationEnum();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ELapType();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCarInfo();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FDriverInfo();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EDriverCategory();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FRegistrationResult();
// End Cross Module References
class UScriptStruct* FTrackData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FTrackData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackData, Z_Construct_UPackage__Script_ACCDirector(), TEXT("TrackData"), sizeof(FTrackData), Get_Z_Construct_UScriptStruct_FTrackData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackData(FTrackData::StaticStruct, TEXT("/Script/ACCDirector"), TEXT("TrackData"), false, nullptr, nullptr);
static struct FScriptStruct_ACCDirector_StaticRegisterNativesFTrackData
{
	FScriptStruct_ACCDirector_StaticRegisterNativesFTrackData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackData")),new UScriptStruct::TCppStructOps<FTrackData>);
	}
} ScriptStruct_ACCDirector_StaticRegisterNativesFTrackData;
	struct Z_Construct_UScriptStruct_FTrackData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudPages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HudPages;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HudPages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CameraSets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_HudPages_MetaData[] = {
		{ "Category", "ACCD|Track Data" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_HudPages = { UE4CodeGen_Private::EPropertyClass::Array, "HudPages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FTrackData, HudPages), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_HudPages_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_HudPages_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_HudPages_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "HudPages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets_MetaData[] = {
		{ "Category", "ACCD|Track Data" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets = { UE4CodeGen_Private::EPropertyClass::Array, "CameraSets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FTrackData, CameraSets), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraSets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCameraSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackMeters_MetaData[] = {
		{ "Category", "ACCD|Track Data" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackMeters = { UE4CodeGen_Private::EPropertyClass::Int, "TrackMeters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FTrackData, TrackMeters), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackMeters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackName_MetaData[] = {
		{ "Category", "ACCD|Track Data" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Str, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FTrackData, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_HudPages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_HudPages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
		nullptr,
		&NewStructOps,
		"TrackData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTrackData),
		alignof(FTrackData),
		Z_Construct_UScriptStruct_FTrackData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackData"), sizeof(FTrackData), Get_Z_Construct_UScriptStruct_FTrackData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackData_CRC() { return 249321700U; }
class UScriptStruct* FCameraSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FCameraSet_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraSet, Z_Construct_UPackage__Script_ACCDirector(), TEXT("CameraSet"), sizeof(FCameraSet), Get_Z_Construct_UScriptStruct_FCameraSet_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraSet(FCameraSet::StaticStruct, TEXT("/Script/ACCDirector"), TEXT("CameraSet"), false, nullptr, nullptr);
static struct FScriptStruct_ACCDirector_StaticRegisterNativesFCameraSet
{
	FScriptStruct_ACCDirector_StaticRegisterNativesFCameraSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraSet")),new UScriptStruct::TCppStructOps<FCameraSet>);
	}
} ScriptStruct_ACCDirector_StaticRegisterNativesFCameraSet;
	struct Z_Construct_UScriptStruct_FCameraSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cameras_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cameras;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Cameras_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CameraSetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_Cameras_MetaData[] = {
		{ "Category", "ACCD|Camera Set" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_Cameras = { UE4CodeGen_Private::EPropertyClass::Array, "Cameras", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCameraSet, Cameras), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_Cameras_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_Cameras_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_Cameras_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Cameras", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_CameraSetName_MetaData[] = {
		{ "Category", "ACCD|Camera Set" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_CameraSetName = { UE4CodeGen_Private::EPropertyClass::Str, "CameraSetName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCameraSet, CameraSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_CameraSetName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_CameraSetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_Cameras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_Cameras_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_CameraSetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
		nullptr,
		&NewStructOps,
		"CameraSet",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCameraSet),
		alignof(FCameraSet),
		Z_Construct_UScriptStruct_FCameraSet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSet_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraSet_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraSet_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraSet"), sizeof(FCameraSet), Get_Z_Construct_UScriptStruct_FCameraSet_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraSet_CRC() { return 3140906553U; }
class UScriptStruct* FRealTimeUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FRealTimeUpdate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealTimeUpdate, Z_Construct_UPackage__Script_ACCDirector(), TEXT("RealTimeUpdate"), sizeof(FRealTimeUpdate), Get_Z_Construct_UScriptStruct_FRealTimeUpdate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRealTimeUpdate(FRealTimeUpdate::StaticStruct, TEXT("/Script/ACCDirector"), TEXT("RealTimeUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_ACCDirector_StaticRegisterNativesFRealTimeUpdate
{
	FScriptStruct_ACCDirector_StaticRegisterNativesFRealTimeUpdate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RealTimeUpdate")),new UScriptStruct::TCppStructOps<FRealTimeUpdate>);
	}
} ScriptStruct_ACCDirector_StaticRegisterNativesFRealTimeUpdate;
	struct Z_Construct_UScriptStruct_FRealTimeUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHudPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentHudPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTemp_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackTemp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientTemp_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmbientTemp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionRemainingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionRemainingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayFocusedCar_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplayFocusedCar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayRemainingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplayRemainingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplaySessionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplaySessionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReplayPlaying_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IsReplayPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActiveCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCameraSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActiveCameraSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPBestLapDriverIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BPBestLapDriverIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPBestLapCarIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BPBestLapCarIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BestSessionLap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BestSessionLap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wetness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Wetness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Clouds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Clouds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RainLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeOfDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeOfDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Phase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Phase_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealTimeUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_CurrentHudPage_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_CurrentHudPage = { UE4CodeGen_Private::EPropertyClass::Str, "CurrentHudPage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, CurrentHudPage), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_CurrentHudPage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_CurrentHudPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TrackTemp_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TrackTemp = { UE4CodeGen_Private::EPropertyClass::Byte, "TrackTemp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, TrackTemp), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TrackTemp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TrackTemp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_AmbientTemp_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_AmbientTemp = { UE4CodeGen_Private::EPropertyClass::Byte, "AmbientTemp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, AmbientTemp), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_AmbientTemp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_AmbientTemp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType = { UE4CodeGen_Private::EPropertyClass::Enum, "SessionType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, SessionType), Z_Construct_UEnum_ACCDirector_ERaceSessionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionEndTime_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionEndTime = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionEndTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, SessionEndTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionEndTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionRemainingTime_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionRemainingTime = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionRemainingTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, SessionRemainingTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionRemainingTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionRemainingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayFocusedCar_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayFocusedCar = { UE4CodeGen_Private::EPropertyClass::Int, "ReplayFocusedCar", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, ReplayFocusedCar), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayFocusedCar_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayFocusedCar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayRemainingTime_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayRemainingTime = { UE4CodeGen_Private::EPropertyClass::Float, "ReplayRemainingTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, ReplayRemainingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayRemainingTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayRemainingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplaySessionTime_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplaySessionTime = { UE4CodeGen_Private::EPropertyClass::Float, "ReplaySessionTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, ReplaySessionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplaySessionTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplaySessionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_IsReplayPlaying_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_IsReplayPlaying = { UE4CodeGen_Private::EPropertyClass::Byte, "IsReplayPlaying", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, IsReplayPlaying), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_IsReplayPlaying_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_IsReplayPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCamera_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCamera = { UE4CodeGen_Private::EPropertyClass::Str, "ActiveCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, ActiveCamera), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCamera_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCameraSet_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCameraSet = { UE4CodeGen_Private::EPropertyClass::Str, "ActiveCameraSet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, ActiveCameraSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCameraSet_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCameraSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapDriverIndex_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapDriverIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BPBestLapDriverIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, BPBestLapDriverIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapDriverIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapDriverIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapCarIndex_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapCarIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BPBestLapCarIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, BPBestLapCarIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapCarIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapCarIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BestSessionLap_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BestSessionLap = { UE4CodeGen_Private::EPropertyClass::Struct, "BestSessionLap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, BestSessionLap), Z_Construct_UScriptStruct_FLapInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BestSessionLap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BestSessionLap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Wetness_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Wetness = { UE4CodeGen_Private::EPropertyClass::Float, "Wetness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, Wetness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Wetness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Wetness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Clouds_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Clouds = { UE4CodeGen_Private::EPropertyClass::Float, "Clouds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, Clouds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Clouds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Clouds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_RainLevel_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_RainLevel = { UE4CodeGen_Private::EPropertyClass::Float, "RainLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, RainLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_RainLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_RainLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TimeOfDay_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TimeOfDay = { UE4CodeGen_Private::EPropertyClass::Struct, "TimeOfDay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, TimeOfDay), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TimeOfDay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TimeOfDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionTime_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionTime = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, SessionTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase = { UE4CodeGen_Private::EPropertyClass::Enum, "Phase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeUpdate, Phase), Z_Construct_UEnum_ACCDirector_ESessionPhase, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_CurrentHudPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TrackTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_AmbientTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionRemainingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayFocusedCar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayRemainingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplaySessionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_IsReplayPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCameraSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapDriverIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapCarIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BestSessionLap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Wetness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Clouds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_RainLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TimeOfDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
		nullptr,
		&NewStructOps,
		"RealTimeUpdate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRealTimeUpdate),
		alignof(FRealTimeUpdate),
		Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealTimeUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRealTimeUpdate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RealTimeUpdate"), sizeof(FRealTimeUpdate), Get_Z_Construct_UScriptStruct_FRealTimeUpdate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRealTimeUpdate_CRC() { return 1204530064U; }
class UScriptStruct* FRealTimeCarUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FRealTimeCarUpdate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealTimeCarUpdate, Z_Construct_UPackage__Script_ACCDirector(), TEXT("RealTimeCarUpdate"), sizeof(FRealTimeCarUpdate), Get_Z_Construct_UScriptStruct_FRealTimeCarUpdate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRealTimeCarUpdate(FRealTimeCarUpdate::StaticStruct, TEXT("/Script/ACCDirector"), TEXT("RealTimeCarUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_ACCDirector_StaticRegisterNativesFRealTimeCarUpdate
{
	FScriptStruct_ACCDirector_StaticRegisterNativesFRealTimeCarUpdate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RealTimeCarUpdate")),new UScriptStruct::TCppStructOps<FRealTimeCarUpdate>);
	}
} ScriptStruct_ACCDirector_StaticRegisterNativesFRealTimeCarUpdate;
	struct Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Laps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Laps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastLap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BestSessionLap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BestSessionLap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplinePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplinePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kmh_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kmh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CarLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CarLocation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gear_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Gear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriverIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DriverIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CarIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealTimeCarUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Laps_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Laps = { UE4CodeGen_Private::EPropertyClass::Int, "Laps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, Laps), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Laps_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Laps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CurrentLap_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CurrentLap = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentLap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, CurrentLap), Z_Construct_UScriptStruct_FLapInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CurrentLap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CurrentLap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_LastLap_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_LastLap = { UE4CodeGen_Private::EPropertyClass::Struct, "LastLap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, LastLap), Z_Construct_UScriptStruct_FLapInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_LastLap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_LastLap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_BestSessionLap_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_BestSessionLap = { UE4CodeGen_Private::EPropertyClass::Struct, "BestSessionLap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, BestSessionLap), Z_Construct_UScriptStruct_FLapInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_BestSessionLap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_BestSessionLap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Delta = { UE4CodeGen_Private::EPropertyClass::Int, "Delta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, Delta), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Delta_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_SplinePosition_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_SplinePosition = { UE4CodeGen_Private::EPropertyClass::Float, "SplinePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, SplinePosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_SplinePosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_SplinePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_TrackPosition_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_TrackPosition = { UE4CodeGen_Private::EPropertyClass::Int, "TrackPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, TrackPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_TrackPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_TrackPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Int, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Kmh_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Kmh = { UE4CodeGen_Private::EPropertyClass::Int, "Kmh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, Kmh), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Kmh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Kmh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation = { UE4CodeGen_Private::EPropertyClass::Enum, "CarLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, CarLocation), Z_Construct_UEnum_ACCDirector_ECarLocationEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Gear_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Gear = { UE4CodeGen_Private::EPropertyClass::Int, "Gear", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, Gear), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Gear_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Gear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_DriverIndex_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_DriverIndex = { UE4CodeGen_Private::EPropertyClass::Int, "DriverIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, DriverIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_DriverIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_DriverIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarIndex_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CarIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRealTimeCarUpdate, CarIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Laps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CurrentLap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_LastLap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_BestSessionLap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_SplinePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_TrackPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Kmh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Gear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_DriverIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
		nullptr,
		&NewStructOps,
		"RealTimeCarUpdate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRealTimeCarUpdate),
		alignof(FRealTimeCarUpdate),
		Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealTimeCarUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRealTimeCarUpdate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RealTimeCarUpdate"), sizeof(FRealTimeCarUpdate), Get_Z_Construct_UScriptStruct_FRealTimeCarUpdate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRealTimeCarUpdate_CRC() { return 2743044571U; }
class UScriptStruct* FLapInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FLapInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLapInfo, Z_Construct_UPackage__Script_ACCDirector(), TEXT("LapInfo"), sizeof(FLapInfo), Get_Z_Construct_UScriptStruct_FLapInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLapInfo(FLapInfo::StaticStruct, TEXT("/Script/ACCDirector"), TEXT("LapInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ACCDirector_StaticRegisterNativesFLapInfo
{
	FScriptStruct_ACCDirector_StaticRegisterNativesFLapInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LapInfo")),new UScriptStruct::TCppStructOps<FLapInfo>);
	}
} ScriptStruct_ACCDirector_StaticRegisterNativesFLapInfo;
	struct Z_Construct_UScriptStruct_FLapInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValidForBest_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bIsValidForBest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Splits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Splits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Splits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaptimeMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LaptimeMS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLapInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLapInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ACCD|Lap Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLapInfo, Type), Z_Construct_UEnum_ACCDirector_ELapType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValidForBest_MetaData[] = {
		{ "Category", "ACCD|Lap Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValidForBest = { UE4CodeGen_Private::EPropertyClass::Byte, "bIsValidForBest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLapInfo, bIsValidForBest), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValidForBest_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValidForBest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "ACCD|Lap Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValid = { UE4CodeGen_Private::EPropertyClass::Byte, "bIsValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLapInfo, bIsValid), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits_MetaData[] = {
		{ "Category", "ACCD|Lap Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits = { UE4CodeGen_Private::EPropertyClass::Array, "Splits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLapInfo, Splits), METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Splits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LaptimeMS_MetaData[] = {
		{ "Category", "ACCD|Lap Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LaptimeMS = { UE4CodeGen_Private::EPropertyClass::Int, "LaptimeMS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLapInfo, LaptimeMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LaptimeMS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LaptimeMS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLapInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValidForBest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LaptimeMS,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLapInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
		nullptr,
		&NewStructOps,
		"LapInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLapInfo),
		alignof(FLapInfo),
		Z_Construct_UScriptStruct_FLapInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLapInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLapInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LapInfo"), sizeof(FLapInfo), Get_Z_Construct_UScriptStruct_FLapInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLapInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLapInfo_CRC() { return 1615170644U; }
class UScriptStruct* FCarInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FCarInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCarInfo, Z_Construct_UPackage__Script_ACCDirector(), TEXT("CarInfo"), sizeof(FCarInfo), Get_Z_Construct_UScriptStruct_FCarInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCarInfo(FCarInfo::StaticStruct, TEXT("/Script/ACCDirector"), TEXT("CarInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ACCDirector_StaticRegisterNativesFCarInfo
{
	FScriptStruct_ACCDirector_StaticRegisterNativesFCarInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CarInfo")),new UScriptStruct::TCppStructOps<FCarInfo>);
	}
} ScriptStruct_ACCDirector_StaticRegisterNativesFCarInfo;
	struct Z_Construct_UScriptStruct_FCarInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Drivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Drivers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Drivers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CupCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CupCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamCarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TeamCarName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaceNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RaceNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TeamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarModelType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CarModelType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPCarIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BPCarIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCarInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCarInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers = { UE4CodeGen_Private::EPropertyClass::Array, "Drivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCarInfo, Drivers), METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Drivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDriverInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CupCategory_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
		{ "ToolTip", "Cup: Overall/Pro = 0, ProAm = 1, Am = 2, Silver = 3, National = 4" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CupCategory = { UE4CodeGen_Private::EPropertyClass::Byte, "CupCategory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCarInfo, CupCategory), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CupCategory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CupCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCarInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamCarName_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamCarName = { UE4CodeGen_Private::EPropertyClass::Str, "TeamCarName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCarInfo, TeamCarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamCarName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamCarName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_RaceNumber_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_RaceNumber = { UE4CodeGen_Private::EPropertyClass::Int, "RaceNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCarInfo, RaceNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_RaceNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_RaceNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamName_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamName = { UE4CodeGen_Private::EPropertyClass::Str, "TeamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCarInfo, TeamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CarModelType_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CarModelType = { UE4CodeGen_Private::EPropertyClass::Byte, "CarModelType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCarInfo, CarModelType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CarModelType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CarModelType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_BPCarIndex_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
		{ "ToolTip", "I need it because i can't expose uint16 types on Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_BPCarIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BPCarIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCarInfo, BPCarIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_BPCarIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_BPCarIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCarInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CupCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamCarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_RaceNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CarModelType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_BPCarIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCarInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
		nullptr,
		&NewStructOps,
		"CarInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCarInfo),
		alignof(FCarInfo),
		Z_Construct_UScriptStruct_FCarInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCarInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCarInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CarInfo"), sizeof(FCarInfo), Get_Z_Construct_UScriptStruct_FCarInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCarInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCarInfo_CRC() { return 2695381172U; }
class UScriptStruct* FDriverInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FDriverInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDriverInfo, Z_Construct_UPackage__Script_ACCDirector(), TEXT("DriverInfo"), sizeof(FDriverInfo), Get_Z_Construct_UScriptStruct_FDriverInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDriverInfo(FDriverInfo::StaticStruct, TEXT("/Script/ACCDirector"), TEXT("DriverInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ACCDirector_StaticRegisterNativesFDriverInfo
{
	FScriptStruct_ACCDirector_StaticRegisterNativesFDriverInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DriverInfo")),new UScriptStruct::TCppStructOps<FDriverInfo>);
	}
} ScriptStruct_ACCDirector_StaticRegisterNativesFDriverInfo;
	struct Z_Construct_UScriptStruct_FDriverInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShortName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NickName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NickName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FirstName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPDriverIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BPDriverIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriverInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDriverInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDriverInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "ACCD|Driver Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
		{ "ToolTip", "Platinum = 3, Gold = 2, Silver = 1, Bronze = 0" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category = { UE4CodeGen_Private::EPropertyClass::Enum, "Category", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FDriverInfo, Category), Z_Construct_UEnum_ACCDirector_EDriverCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_ShortName_MetaData[] = {
		{ "Category", "ACCD|Driver Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_ShortName = { UE4CodeGen_Private::EPropertyClass::Str, "ShortName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FDriverInfo, ShortName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_ShortName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_ShortName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_NickName_MetaData[] = {
		{ "Category", "ACCD|Driver Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_NickName = { UE4CodeGen_Private::EPropertyClass::Str, "NickName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FDriverInfo, NickName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_NickName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_NickName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_LastName_MetaData[] = {
		{ "Category", "ACCD|Driver Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_LastName = { UE4CodeGen_Private::EPropertyClass::Str, "LastName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FDriverInfo, LastName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_LastName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_LastName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_FirstName_MetaData[] = {
		{ "Category", "ACCD|Driver Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_FirstName = { UE4CodeGen_Private::EPropertyClass::Str, "FirstName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FDriverInfo, FirstName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_FirstName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_FirstName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_BPDriverIndex_MetaData[] = {
		{ "Category", "ACCD|Driver Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
		{ "ToolTip", "I need it because i can't expose uint16 types on Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_BPDriverIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BPDriverIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FDriverInfo, BPDriverIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_BPDriverIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_BPDriverIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDriverInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_ShortName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_NickName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_LastName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_FirstName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_BPDriverIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDriverInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
		nullptr,
		&NewStructOps,
		"DriverInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FDriverInfo),
		alignof(FDriverInfo),
		Z_Construct_UScriptStruct_FDriverInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDriverInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDriverInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DriverInfo"), sizeof(FDriverInfo), Get_Z_Construct_UScriptStruct_FDriverInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDriverInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDriverInfo_CRC() { return 683036087U; }
class UScriptStruct* FRegistrationResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FRegistrationResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegistrationResult, Z_Construct_UPackage__Script_ACCDirector(), TEXT("RegistrationResult"), sizeof(FRegistrationResult), Get_Z_Construct_UScriptStruct_FRegistrationResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRegistrationResult(FRegistrationResult::StaticStruct, TEXT("/Script/ACCDirector"), TEXT("RegistrationResult"), false, nullptr, nullptr);
static struct FScriptStruct_ACCDirector_StaticRegisterNativesFRegistrationResult
{
	FScriptStruct_ACCDirector_StaticRegisterNativesFRegistrationResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RegistrationResult")),new UScriptStruct::TCppStructOps<FRegistrationResult>);
	}
} ScriptStruct_ACCDirector_StaticRegisterNativesFRegistrationResult;
	struct Z_Construct_UScriptStruct_FRegistrationResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReadOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IsReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConnectionSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegistrationResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
		{ "ToolTip", "===STRUCTS===" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegistrationResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ErrMsg_MetaData[] = {
		{ "Category", "ACCD|Registration Result" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ErrMsg = { UE4CodeGen_Private::EPropertyClass::Str, "ErrMsg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRegistrationResult, ErrMsg), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ErrMsg_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ErrMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_IsReadOnly_MetaData[] = {
		{ "Category", "ACCD|Registration Result" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_IsReadOnly = { UE4CodeGen_Private::EPropertyClass::Byte, "IsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRegistrationResult, IsReadOnly), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_IsReadOnly_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_IsReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionSuccess_MetaData[] = {
		{ "Category", "ACCD|Registration Result" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionSuccess = { UE4CodeGen_Private::EPropertyClass::Byte, "ConnectionSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRegistrationResult, ConnectionSuccess), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionSuccess_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionID_MetaData[] = {
		{ "Category", "ACCD|Registration Result" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionID = { UE4CodeGen_Private::EPropertyClass::Int, "ConnectionID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRegistrationResult, ConnectionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "ACCD|Registration Result" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Str, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRegistrationResult, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegistrationResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ErrMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_IsReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_Target,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegistrationResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
		nullptr,
		&NewStructOps,
		"RegistrationResult",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRegistrationResult),
		alignof(FRegistrationResult),
		Z_Construct_UScriptStruct_FRegistrationResult_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegistrationResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRegistrationResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RegistrationResult"), sizeof(FRegistrationResult), Get_Z_Construct_UScriptStruct_FRegistrationResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRegistrationResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRegistrationResult_CRC() { return 1666328268U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
