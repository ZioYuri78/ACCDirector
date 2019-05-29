// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FBroadcastingEvent();
	UPackage* Z_Construct_UPackage__Script_ACCDirector();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCarInfo();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EBroadcastingCarEventType();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FTrackData();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCameraSet();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FRealTimeUpdate();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ERaceSessionType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FLapInfo();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ESessionPhase();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FRealTimeCarUpdate();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ECarLocationEnum();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ELapType();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FDriverInfo();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EDriverCategory();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FRegistrationResult();
// End Cross Module References
class UScriptStruct* FBroadcastingEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FBroadcastingEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBroadcastingEvent, Z_Construct_UPackage__Script_ACCDirector(), TEXT("BroadcastingEvent"), sizeof(FBroadcastingEvent), Get_Z_Construct_UScriptStruct_FBroadcastingEvent_Hash());
	}
	return Singleton;
}
template<> ACCDIRECTOR_API UScriptStruct* StaticStruct<FBroadcastingEvent>()
{
	return FBroadcastingEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBroadcastingEvent(FBroadcastingEvent::StaticStruct, TEXT("/Script/ACCDirector"), TEXT("BroadcastingEvent"), false, nullptr, nullptr);
static struct FScriptStruct_ACCDirector_StaticRegisterNativesFBroadcastingEvent
{
	FScriptStruct_ACCDirector_StaticRegisterNativesFBroadcastingEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BroadcastingEvent")),new UScriptStruct::TCppStructOps<FBroadcastingEvent>);
	}
} ScriptStruct_ACCDirector_StaticRegisterNativesFBroadcastingEvent;
	struct Z_Construct_UScriptStruct_FBroadcastingEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CarData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CarId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Msg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBroadcastingEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_CarData_MetaData[] = {
		{ "Category", "BroadcastingEvent" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_CarData = { "CarData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBroadcastingEvent, CarData), Z_Construct_UScriptStruct_FCarInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_CarData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_CarData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_CarId_MetaData[] = {
		{ "Category", "BroadcastingEvent" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_CarId = { "CarId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBroadcastingEvent, CarId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_CarId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_CarId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_TimeMs_MetaData[] = {
		{ "Category", "BroadcastingEvent" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_TimeMs = { "TimeMs", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBroadcastingEvent, TimeMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_TimeMs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_TimeMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_Msg_MetaData[] = {
		{ "Category", "BroadcastingEvent" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBroadcastingEvent, Msg), METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_Msg_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_Msg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_EventType_MetaData[] = {
		{ "Category", "BroadcastingEvent" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBroadcastingEvent, EventType), Z_Construct_UEnum_ACCDirector_EBroadcastingCarEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_EventType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_EventType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_CarData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_CarId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_TimeMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_Msg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::NewProp_EventType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
		nullptr,
		&NewStructOps,
		"BroadcastingEvent",
		sizeof(FBroadcastingEvent),
		alignof(FBroadcastingEvent),
		Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBroadcastingEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBroadcastingEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BroadcastingEvent"), sizeof(FBroadcastingEvent), Get_Z_Construct_UScriptStruct_FBroadcastingEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBroadcastingEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBroadcastingEvent_Hash() { return 2788261719U; }
class UScriptStruct* FTrackData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FTrackData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackData, Z_Construct_UPackage__Script_ACCDirector(), TEXT("TrackData"), sizeof(FTrackData), Get_Z_Construct_UScriptStruct_FTrackData_Hash());
	}
	return Singleton;
}
template<> ACCDIRECTOR_API UScriptStruct* StaticStruct<FTrackData>()
{
	return FTrackData::StaticStruct();
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_HudPages = { "HudPages", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackData, HudPages), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_HudPages_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_HudPages_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_HudPages_Inner = { "HudPages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets_MetaData[] = {
		{ "Category", "ACCD|Track Data" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets = { "CameraSets", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackData, CameraSets), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_CameraSets_Inner = { "CameraSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCameraSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackMeters_MetaData[] = {
		{ "Category", "ACCD|Track Data" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackMeters = { "TrackMeters", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackData, TrackMeters), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackMeters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackName_MetaData[] = {
		{ "Category", "ACCD|Track Data" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackData, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::NewProp_TrackName_MetaData)) };
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
		sizeof(FTrackData),
		alignof(FTrackData),
		Z_Construct_UScriptStruct_FTrackData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackData"), sizeof(FTrackData), Get_Z_Construct_UScriptStruct_FTrackData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackData_Hash() { return 1765286352U; }
class UScriptStruct* FCameraSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FCameraSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraSet, Z_Construct_UPackage__Script_ACCDirector(), TEXT("CameraSet"), sizeof(FCameraSet), Get_Z_Construct_UScriptStruct_FCameraSet_Hash());
	}
	return Singleton;
}
template<> ACCDIRECTOR_API UScriptStruct* StaticStruct<FCameraSet>()
{
	return FCameraSet::StaticStruct();
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_Cameras = { "Cameras", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraSet, Cameras), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_Cameras_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_Cameras_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_Cameras_Inner = { "Cameras", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_CameraSetName_MetaData[] = {
		{ "Category", "ACCD|Camera Set" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_CameraSetName = { "CameraSetName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraSet, CameraSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_CameraSetName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSet_Statics::NewProp_CameraSetName_MetaData)) };
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
		sizeof(FCameraSet),
		alignof(FCameraSet),
		Z_Construct_UScriptStruct_FCameraSet_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraSet_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraSet"), sizeof(FCameraSet), Get_Z_Construct_UScriptStruct_FCameraSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraSet_Hash() { return 3366067198U; }
class UScriptStruct* FRealTimeUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FRealTimeUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealTimeUpdate, Z_Construct_UPackage__Script_ACCDirector(), TEXT("RealTimeUpdate"), sizeof(FRealTimeUpdate), Get_Z_Construct_UScriptStruct_FRealTimeUpdate_Hash());
	}
	return Singleton;
}
template<> ACCDIRECTOR_API UScriptStruct* StaticStruct<FRealTimeUpdate>()
{
	return FRealTimeUpdate::StaticStruct();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedCarIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FocusedCarIndex;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_CurrentHudPage = { "CurrentHudPage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, CurrentHudPage), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_CurrentHudPage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_CurrentHudPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TrackTemp_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TrackTemp = { "TrackTemp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, TrackTemp), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TrackTemp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TrackTemp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_AmbientTemp_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_AmbientTemp = { "AmbientTemp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, AmbientTemp), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_AmbientTemp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_AmbientTemp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, SessionType), Z_Construct_UEnum_ACCDirector_ERaceSessionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionEndTime_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionEndTime = { "SessionEndTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, SessionEndTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionEndTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionRemainingTime_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionRemainingTime = { "SessionRemainingTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, SessionRemainingTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionRemainingTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionRemainingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayRemainingTime_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayRemainingTime = { "ReplayRemainingTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, ReplayRemainingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayRemainingTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayRemainingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplaySessionTime_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplaySessionTime = { "ReplaySessionTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, ReplaySessionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplaySessionTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplaySessionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_IsReplayPlaying_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_IsReplayPlaying = { "IsReplayPlaying", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, IsReplayPlaying), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_IsReplayPlaying_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_IsReplayPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCamera_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCamera = { "ActiveCamera", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, ActiveCamera), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCamera_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCameraSet_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCameraSet = { "ActiveCameraSet", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, ActiveCameraSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCameraSet_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCameraSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_FocusedCarIndex_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_FocusedCarIndex = { "FocusedCarIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, FocusedCarIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_FocusedCarIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_FocusedCarIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapDriverIndex_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapDriverIndex = { "BPBestLapDriverIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, BPBestLapDriverIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapDriverIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapDriverIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapCarIndex_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapCarIndex = { "BPBestLapCarIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, BPBestLapCarIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapCarIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BPBestLapCarIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BestSessionLap_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BestSessionLap = { "BestSessionLap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, BestSessionLap), Z_Construct_UScriptStruct_FLapInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BestSessionLap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_BestSessionLap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Wetness_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Wetness = { "Wetness", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, Wetness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Wetness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Wetness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Clouds_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Clouds = { "Clouds", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, Clouds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Clouds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Clouds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_RainLevel_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_RainLevel = { "RainLevel", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, RainLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_RainLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_RainLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TimeOfDay_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TimeOfDay = { "TimeOfDay", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, TimeOfDay), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TimeOfDay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TimeOfDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionTime_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionTime = { "SessionTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, SessionTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase_MetaData[] = {
		{ "Category", "ACCD|Realtime Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeUpdate, Phase), Z_Construct_UEnum_ACCDirector_ESessionPhase, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_Phase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_CurrentHudPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_TrackTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_AmbientTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_SessionRemainingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplayRemainingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ReplaySessionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_IsReplayPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_ActiveCameraSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::NewProp_FocusedCarIndex,
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
		sizeof(FRealTimeUpdate),
		alignof(FRealTimeUpdate),
		Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealTimeUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRealTimeUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RealTimeUpdate"), sizeof(FRealTimeUpdate), Get_Z_Construct_UScriptStruct_FRealTimeUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealTimeUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRealTimeUpdate_Hash() { return 1504817627U; }
class UScriptStruct* FRealTimeCarUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FRealTimeCarUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealTimeCarUpdate, Z_Construct_UPackage__Script_ACCDirector(), TEXT("RealTimeCarUpdate"), sizeof(FRealTimeCarUpdate), Get_Z_Construct_UScriptStruct_FRealTimeCarUpdate_Hash());
	}
	return Singleton;
}
template<> ACCDIRECTOR_API UScriptStruct* StaticStruct<FRealTimeCarUpdate>()
{
	return FRealTimeCarUpdate::StaticStruct();
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Laps = { "Laps", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, Laps), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Laps_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Laps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CurrentLap_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CurrentLap = { "CurrentLap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, CurrentLap), Z_Construct_UScriptStruct_FLapInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CurrentLap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CurrentLap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_LastLap_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_LastLap = { "LastLap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, LastLap), Z_Construct_UScriptStruct_FLapInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_LastLap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_LastLap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_BestSessionLap_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_BestSessionLap = { "BestSessionLap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, BestSessionLap), Z_Construct_UScriptStruct_FLapInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_BestSessionLap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_BestSessionLap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, Delta), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Delta_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_SplinePosition_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_SplinePosition = { "SplinePosition", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, SplinePosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_SplinePosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_SplinePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_TrackPosition_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_TrackPosition = { "TrackPosition", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, TrackPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_TrackPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_TrackPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Kmh_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Kmh = { "Kmh", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, Kmh), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Kmh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Kmh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation = { "CarLocation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, CarLocation), Z_Construct_UEnum_ACCDirector_ECarLocationEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Gear_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Gear = { "Gear", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, Gear), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Gear_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_Gear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_DriverIndex_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_DriverIndex = { "DriverIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, DriverIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_DriverIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_DriverIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarIndex_MetaData[] = {
		{ "Category", "ACCD|Realtime Car Update" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarIndex = { "CarIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealTimeCarUpdate, CarIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::NewProp_CarIndex_MetaData)) };
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
		sizeof(FRealTimeCarUpdate),
		alignof(FRealTimeCarUpdate),
		Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealTimeCarUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRealTimeCarUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RealTimeCarUpdate"), sizeof(FRealTimeCarUpdate), Get_Z_Construct_UScriptStruct_FRealTimeCarUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealTimeCarUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRealTimeCarUpdate_Hash() { return 1098375214U; }
class UScriptStruct* FLapInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FLapInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLapInfo, Z_Construct_UPackage__Script_ACCDirector(), TEXT("LapInfo"), sizeof(FLapInfo), Get_Z_Construct_UScriptStruct_FLapInfo_Hash());
	}
	return Singleton;
}
template<> ACCDIRECTOR_API UScriptStruct* StaticStruct<FLapInfo>()
{
	return FLapInfo::StaticStruct();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LapType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LapType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LapType_Underlying;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LapType_MetaData[] = {
		{ "Category", "ACCD|Lap Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LapType = { "LapType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLapInfo, LapType), Z_Construct_UEnum_ACCDirector_ELapType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LapType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LapType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValidForBest_MetaData[] = {
		{ "Category", "ACCD|Lap Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValidForBest = { "bIsValidForBest", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLapInfo, bIsValidForBest), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValidForBest_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValidForBest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "ACCD|Lap Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLapInfo, bIsValid), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits_MetaData[] = {
		{ "Category", "ACCD|Lap Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits = { "Splits", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLapInfo, Splits), METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_Splits_Inner = { "Splits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LaptimeMS_MetaData[] = {
		{ "Category", "ACCD|Lap Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LaptimeMS = { "LaptimeMS", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLapInfo, LaptimeMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LaptimeMS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LaptimeMS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLapInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LapType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLapInfo_Statics::NewProp_LapType_Underlying,
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
		sizeof(FLapInfo),
		alignof(FLapInfo),
		Z_Construct_UScriptStruct_FLapInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLapInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLapInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLapInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LapInfo"), sizeof(FLapInfo), Get_Z_Construct_UScriptStruct_FLapInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLapInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLapInfo_Hash() { return 4250330529U; }
class UScriptStruct* FCarInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FCarInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCarInfo, Z_Construct_UPackage__Script_ACCDirector(), TEXT("CarInfo"), sizeof(FCarInfo), Get_Z_Construct_UScriptStruct_FCarInfo_Hash());
	}
	return Singleton;
}
template<> ACCDIRECTOR_API UScriptStruct* StaticStruct<FCarInfo>()
{
	return FCarInfo::StaticStruct();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDriverIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentDriverIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CupCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CupCategory;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers = { "Drivers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCarInfo, Drivers), METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers_Inner = { "Drivers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDriverInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CurrentDriverIndex_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CurrentDriverIndex = { "CurrentDriverIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCarInfo, CurrentDriverIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CurrentDriverIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CurrentDriverIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CupCategory_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
		{ "ToolTip", "Cup: Overall/Pro = 0, ProAm = 1, Am = 2, Silver = 3, National = 4" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CupCategory = { "CupCategory", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCarInfo, CupCategory), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CupCategory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CupCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_RaceNumber_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_RaceNumber = { "RaceNumber", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCarInfo, RaceNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_RaceNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_RaceNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamName_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamName = { "TeamName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCarInfo, TeamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_TeamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CarModelType_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CarModelType = { "CarModelType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCarInfo, CarModelType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CarModelType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CarModelType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_BPCarIndex_MetaData[] = {
		{ "Category", "ACCD|Car Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
		{ "ToolTip", "I need it because i can't expose uint16 types on Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_BPCarIndex = { "BPCarIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCarInfo, BPCarIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_BPCarIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_BPCarIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCarInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_Drivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CurrentDriverIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarInfo_Statics::NewProp_CupCategory,
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
		sizeof(FCarInfo),
		alignof(FCarInfo),
		Z_Construct_UScriptStruct_FCarInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCarInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCarInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CarInfo"), sizeof(FCarInfo), Get_Z_Construct_UScriptStruct_FCarInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCarInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCarInfo_Hash() { return 2195774812U; }
class UScriptStruct* FDriverInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FDriverInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDriverInfo, Z_Construct_UPackage__Script_ACCDirector(), TEXT("DriverInfo"), sizeof(FDriverInfo), Get_Z_Construct_UScriptStruct_FDriverInfo_Hash());
	}
	return Singleton;
}
template<> ACCDIRECTOR_API UScriptStruct* StaticStruct<FDriverInfo>()
{
	return FDriverInfo::StaticStruct();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FirstName;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDriverInfo, Category), Z_Construct_UEnum_ACCDirector_EDriverCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_ShortName_MetaData[] = {
		{ "Category", "ACCD|Driver Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDriverInfo, ShortName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_ShortName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_ShortName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_LastName_MetaData[] = {
		{ "Category", "ACCD|Driver Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDriverInfo, LastName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_LastName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_LastName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_FirstName_MetaData[] = {
		{ "Category", "ACCD|Driver Info" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_FirstName = { "FirstName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDriverInfo, FirstName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_FirstName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_FirstName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDriverInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_ShortName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_LastName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriverInfo_Statics::NewProp_FirstName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDriverInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
		nullptr,
		&NewStructOps,
		"DriverInfo",
		sizeof(FDriverInfo),
		alignof(FDriverInfo),
		Z_Construct_UScriptStruct_FDriverInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDriverInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDriverInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDriverInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDriverInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DriverInfo"), sizeof(FDriverInfo), Get_Z_Construct_UScriptStruct_FDriverInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDriverInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDriverInfo_Hash() { return 139485435U; }
class UScriptStruct* FRegistrationResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCDIRECTOR_API uint32 Get_Z_Construct_UScriptStruct_FRegistrationResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegistrationResult, Z_Construct_UPackage__Script_ACCDirector(), TEXT("RegistrationResult"), sizeof(FRegistrationResult), Get_Z_Construct_UScriptStruct_FRegistrationResult_Hash());
	}
	return Singleton;
}
template<> ACCDIRECTOR_API UScriptStruct* StaticStruct<FRegistrationResult>()
{
	return FRegistrationResult::StaticStruct();
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ErrMsg = { "ErrMsg", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegistrationResult, ErrMsg), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ErrMsg_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ErrMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_IsReadOnly_MetaData[] = {
		{ "Category", "ACCD|Registration Result" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_IsReadOnly = { "IsReadOnly", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegistrationResult, IsReadOnly), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_IsReadOnly_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_IsReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionSuccess_MetaData[] = {
		{ "Category", "ACCD|Registration Result" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionSuccess = { "ConnectionSuccess", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegistrationResult, ConnectionSuccess), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionSuccess_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionID_MetaData[] = {
		{ "Category", "ACCD|Registration Result" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionID = { "ConnectionID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegistrationResult, ConnectionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_ConnectionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "ACCD|Registration Result" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegistrationResult, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::NewProp_Target_MetaData)) };
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
		sizeof(FRegistrationResult),
		alignof(FRegistrationResult),
		Z_Construct_UScriptStruct_FRegistrationResult_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegistrationResult_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegistrationResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegistrationResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRegistrationResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RegistrationResult"), sizeof(FRegistrationResult), Get_Z_Construct_UScriptStruct_FRegistrationResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRegistrationResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRegistrationResult_Hash() { return 99252572U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
