// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACCDirector/Private/ACCD/ACCDProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACCDProtocol() {}
// Cross Module References
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ACCDirector();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FTrackData();
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCarInfo();
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FRealTimeCarUpdate();
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FRealTimeUpdate();
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature();
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature();
	ACCDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FRegistrationResult();
	ACCDIRECTOR_API UClass* Z_Construct_UClass_AACCDProtocol_NoRegister();
	ACCDIRECTOR_API UClass* Z_Construct_UClass_AACCDProtocol();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ACCDIRECTOR_API UFunction* Z_Construct_UFunction_AACCDProtocol_RequestConnection();
	ACCDIRECTOR_API UFunction* Z_Construct_UFunction_AACCDProtocol_RequestDisconnection();
	ACCDIRECTOR_API UFunction* Z_Construct_UFunction_AACCDProtocol_RequestEntryList();
	ACCDIRECTOR_API UFunction* Z_Construct_UFunction_AACCDProtocol_RequestHUDPage();
	ACCDIRECTOR_API UFunction* Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay();
	ACCDIRECTOR_API UFunction* Z_Construct_UFunction_AACCDProtocol_RequestTrackData();
	ACCDIRECTOR_API UFunction* Z_Construct_UFunction_AACCDProtocol_SetCamera();
	ACCDIRECTOR_API UFunction* Z_Construct_UFunction_AACCDProtocol_SetFocus();
	ACCDIRECTOR_API UFunction* Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_ACCDirector_eventTrackDataUpdateDelegate_Parms
		{
			FString ConnectionIdentifier;
			FTrackData TrackData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::NewProp_TrackData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::NewProp_TrackData = { "TrackData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ACCDirector_eventTrackDataUpdateDelegate_Parms, TrackData), Z_Construct_UScriptStruct_FTrackData, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::NewProp_TrackData_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::NewProp_TrackData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier = { "ConnectionIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ACCDirector_eventTrackDataUpdateDelegate_Parms, ConnectionIdentifier), METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::NewProp_TrackData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ACCDirector, nullptr, "TrackDataUpdateDelegate__DelegateSignature", sizeof(_Script_ACCDirector_eventTrackDataUpdateDelegate_Parms), Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_ACCDirector_eventEntryListUpdateDelegate_Parms
		{
			FString ConnectionIdentifier;
			FCarInfo CarInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CarInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::NewProp_CarInfo = { "CarInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ACCDirector_eventEntryListUpdateDelegate_Parms, CarInfo), Z_Construct_UScriptStruct_FCarInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier = { "ConnectionIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ACCDirector_eventEntryListUpdateDelegate_Parms, ConnectionIdentifier), METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::NewProp_CarInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ACCDirector, nullptr, "EntryListUpdateDelegate__DelegateSignature", sizeof(_Script_ACCDirector_eventEntryListUpdateDelegate_Parms), Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_ACCDirector_eventRealTimeCarUpdateDelegate_Parms
		{
			FString ConnectionIdentifier;
			FRealTimeCarUpdate CarUpdate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CarUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::NewProp_CarUpdate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::NewProp_CarUpdate = { "CarUpdate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ACCDirector_eventRealTimeCarUpdateDelegate_Parms, CarUpdate), Z_Construct_UScriptStruct_FRealTimeCarUpdate, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::NewProp_CarUpdate_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::NewProp_CarUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier = { "ConnectionIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ACCDirector_eventRealTimeCarUpdateDelegate_Parms, ConnectionIdentifier), METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::NewProp_CarUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ACCDirector, nullptr, "RealTimeCarUpdateDelegate__DelegateSignature", sizeof(_Script_ACCDirector_eventRealTimeCarUpdateDelegate_Parms), Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_ACCDirector_eventRealtimeUpdateDelegate_Parms
		{
			FString ConnectionIdentifier;
			FRealTimeUpdate RealTimeUpdate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealTimeUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealTimeUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::NewProp_RealTimeUpdate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::NewProp_RealTimeUpdate = { "RealTimeUpdate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ACCDirector_eventRealtimeUpdateDelegate_Parms, RealTimeUpdate), Z_Construct_UScriptStruct_FRealTimeUpdate, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::NewProp_RealTimeUpdate_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::NewProp_RealTimeUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier = { "ConnectionIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ACCDirector_eventRealtimeUpdateDelegate_Parms, ConnectionIdentifier), METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::NewProp_RealTimeUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ACCDirector, nullptr, "RealtimeUpdateDelegate__DelegateSignature", sizeof(_Script_ACCDirector_eventRealtimeUpdateDelegate_Parms), Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics
	{
		struct _Script_ACCDirector_eventEntryListDelegate_Parms
		{
			FString ConnectionIdentifier;
			TArray<FCarInfo> EntryList;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EntryList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntryList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_EntryList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_EntryList = { "EntryList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ACCDirector_eventEntryListDelegate_Parms, EntryList), METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_EntryList_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_EntryList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_EntryList_Inner = { "EntryList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCarInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier = { "ConnectionIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ACCDirector_eventEntryListDelegate_Parms, ConnectionIdentifier), METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_EntryList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_EntryList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::NewProp_ConnectionIdentifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ACCDirector, nullptr, "EntryListDelegate__DelegateSignature", sizeof(_Script_ACCDirector_eventEntryListDelegate_Parms), Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_ACCDirector_eventConnectionStateChangedDelegate_Parms
		{
			FRegistrationResult RegistrationResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistrationResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegistrationResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::NewProp_RegistrationResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::NewProp_RegistrationResult = { "RegistrationResult", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ACCDirector_eventConnectionStateChangedDelegate_Parms, RegistrationResult), Z_Construct_UScriptStruct_FRegistrationResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::NewProp_RegistrationResult_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::NewProp_RegistrationResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::NewProp_RegistrationResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ACCDirector, nullptr, "ConnectionStateChangedDelegate__DelegateSignature", sizeof(_Script_ACCDirector_eventConnectionStateChangedDelegate_Parms), Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AACCDProtocol::StaticRegisterNativesAACCDProtocol()
	{
		UClass* Class = AACCDProtocol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestConnection", &AACCDProtocol::execRequestConnection },
			{ "RequestDisconnection", &AACCDProtocol::execRequestDisconnection },
			{ "RequestEntryList", &AACCDProtocol::execRequestEntryList },
			{ "RequestHUDPage", &AACCDProtocol::execRequestHUDPage },
			{ "RequestInstantReplay", &AACCDProtocol::execRequestInstantReplay },
			{ "RequestTrackData", &AACCDProtocol::execRequestTrackData },
			{ "SetCamera", &AACCDProtocol::execSetCamera },
			{ "SetFocus", &AACCDProtocol::execSetFocus },
			{ "SetFocusWithCam", &AACCDProtocol::execSetFocusWithCam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics
	{
		struct ACCDProtocol_eventRequestConnection_Parms
		{
			FString IP;
			int32 Port;
			FString DisplayName;
			FString ConnectionPsw;
			int32 RTUpdateInterval;
			FString CommandPsw;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandPsw;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RTUpdateInterval;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionPsw;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACCDProtocol_eventRequestConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACCDProtocol_eventRequestConnection_Parms), &Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_CommandPsw = { "CommandPsw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestConnection_Parms, CommandPsw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_RTUpdateInterval = { "RTUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestConnection_Parms, RTUpdateInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_ConnectionPsw = { "ConnectionPsw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestConnection_Parms, ConnectionPsw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestConnection_Parms, DisplayName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestConnection_Parms, Port), METADATA_PARAMS(Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_Port_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_IP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestConnection_Parms, IP), METADATA_PARAMS(Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_IP_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_IP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_CommandPsw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_RTUpdateInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_ConnectionPsw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::NewProp_IP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACCDProtocol, nullptr, "RequestConnection", sizeof(ACCDProtocol_eventRequestConnection_Parms), Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACCDProtocol_RequestConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACCDProtocol_RequestConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACCDProtocol_RequestDisconnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACCDProtocol_RequestDisconnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AACCDProtocol_RequestDisconnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACCDProtocol, nullptr, "RequestDisconnection", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACCDProtocol_RequestDisconnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_RequestDisconnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACCDProtocol_RequestDisconnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACCDProtocol_RequestDisconnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACCDProtocol_RequestEntryList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACCDProtocol_RequestEntryList_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AACCDProtocol_RequestEntryList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACCDProtocol, nullptr, "RequestEntryList", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACCDProtocol_RequestEntryList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_RequestEntryList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACCDProtocol_RequestEntryList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACCDProtocol_RequestEntryList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACCDProtocol_RequestHUDPage_Statics
	{
		struct ACCDProtocol_eventRequestHUDPage_Parms
		{
			FString HudPage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HudPage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestHUDPage_Statics::NewProp_HudPage = { "HudPage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestHUDPage_Parms, HudPage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACCDProtocol_RequestHUDPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestHUDPage_Statics::NewProp_HudPage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACCDProtocol_RequestHUDPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AACCDProtocol_RequestHUDPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACCDProtocol, nullptr, "RequestHUDPage", sizeof(ACCDProtocol_eventRequestHUDPage_Parms), Z_Construct_UFunction_AACCDProtocol_RequestHUDPage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_RequestHUDPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACCDProtocol_RequestHUDPage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_RequestHUDPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACCDProtocol_RequestHUDPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACCDProtocol_RequestHUDPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics
	{
		struct ACCDProtocol_eventRequestInstantReplay_Parms
		{
			float StartSessionTime;
			float DurationMS;
			int32 InitialFocusedCarIndex;
			FString InitialCameraSet;
			FString InitialCamera;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InitialCamera;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InitialCameraSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialFocusedCarIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationMS;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartSessionTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::NewProp_InitialCamera = { "InitialCamera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestInstantReplay_Parms, InitialCamera), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::NewProp_InitialCameraSet = { "InitialCameraSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestInstantReplay_Parms, InitialCameraSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::NewProp_InitialFocusedCarIndex = { "InitialFocusedCarIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestInstantReplay_Parms, InitialFocusedCarIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::NewProp_DurationMS = { "DurationMS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestInstantReplay_Parms, DurationMS), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::NewProp_StartSessionTime = { "StartSessionTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventRequestInstantReplay_Parms, StartSessionTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::NewProp_InitialCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::NewProp_InitialCameraSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::NewProp_InitialFocusedCarIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::NewProp_DurationMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::NewProp_StartSessionTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACCD|Protocol" },
		{ "CPP_Default_InitialCamera", "" },
		{ "CPP_Default_InitialCameraSet", "" },
		{ "CPP_Default_InitialFocusedCarIndex", "-1" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACCDProtocol, nullptr, "RequestInstantReplay", sizeof(ACCDProtocol_eventRequestInstantReplay_Parms), Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACCDProtocol_RequestTrackData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACCDProtocol_RequestTrackData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AACCDProtocol_RequestTrackData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACCDProtocol, nullptr, "RequestTrackData", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACCDProtocol_RequestTrackData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_RequestTrackData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACCDProtocol_RequestTrackData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACCDProtocol_RequestTrackData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics
	{
		struct ACCDProtocol_eventSetCamera_Parms
		{
			FString CameraSet;
			FString Camera;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CameraSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventSetCamera_Parms, Camera), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::NewProp_CameraSet = { "CameraSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventSetCamera_Parms, CameraSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::NewProp_CameraSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACCDProtocol, nullptr, "SetCamera", sizeof(ACCDProtocol_eventSetCamera_Parms), Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACCDProtocol_SetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACCDProtocol_SetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACCDProtocol_SetFocus_Statics
	{
		struct ACCDProtocol_eventSetFocus_Parms
		{
			int32 CarIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CarIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACCDProtocol_SetFocus_Statics::NewProp_CarIndex = { "CarIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventSetFocus_Parms, CarIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACCDProtocol_SetFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_SetFocus_Statics::NewProp_CarIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACCDProtocol_SetFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AACCDProtocol_SetFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACCDProtocol, nullptr, "SetFocus", sizeof(ACCDProtocol_eventSetFocus_Parms), Z_Construct_UFunction_AACCDProtocol_SetFocus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_SetFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACCDProtocol_SetFocus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_SetFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACCDProtocol_SetFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACCDProtocol_SetFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics
	{
		struct ACCDProtocol_eventSetFocusWithCam_Parms
		{
			int32 CarIndex;
			FString CameraSet;
			FString Camera;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CameraSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CarIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventSetFocusWithCam_Parms, Camera), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::NewProp_CameraSet = { "CameraSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventSetFocusWithCam_Parms, CameraSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::NewProp_CarIndex = { "CarIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACCDProtocol_eventSetFocusWithCam_Parms, CarIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::NewProp_CameraSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::NewProp_CarIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACCDProtocol, nullptr, "SetFocusWithCam", sizeof(ACCDProtocol_eventSetFocusWithCam_Parms), Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AACCDProtocol_NoRegister()
	{
		return AACCDProtocol::StaticClass();
	}
	struct Z_Construct_UClass_AACCDProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTrackDataUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackDataUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEntryListUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntryListUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRealTimeCarUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRealTimeCarUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRealTimeUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRealTimeUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEntryList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntryList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnectionStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionStateChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACCDProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AACCDProtocol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACCDProtocol_RequestConnection, "RequestConnection" }, // 815173560
		{ &Z_Construct_UFunction_AACCDProtocol_RequestDisconnection, "RequestDisconnection" }, // 4268595303
		{ &Z_Construct_UFunction_AACCDProtocol_RequestEntryList, "RequestEntryList" }, // 3211820155
		{ &Z_Construct_UFunction_AACCDProtocol_RequestHUDPage, "RequestHUDPage" }, // 4208538748
		{ &Z_Construct_UFunction_AACCDProtocol_RequestInstantReplay, "RequestInstantReplay" }, // 761036475
		{ &Z_Construct_UFunction_AACCDProtocol_RequestTrackData, "RequestTrackData" }, // 540745016
		{ &Z_Construct_UFunction_AACCDProtocol_SetCamera, "SetCamera" }, // 4159317767
		{ &Z_Construct_UFunction_AACCDProtocol_SetFocus, "SetFocus" }, // 2320924252
		{ &Z_Construct_UFunction_AACCDProtocol_SetFocusWithCam, "SetFocusWithCam" }, // 977418283
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACCDProtocol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACCD/ACCDProtocol.h" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnTrackDataUpdate_MetaData[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnTrackDataUpdate = { "OnTrackDataUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACCDProtocol, OnTrackDataUpdate), Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnTrackDataUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnTrackDataUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnEntryListUpdate_MetaData[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnEntryListUpdate = { "OnEntryListUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACCDProtocol, OnEntryListUpdate), Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnEntryListUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnEntryListUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnRealTimeCarUpdate_MetaData[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnRealTimeCarUpdate = { "OnRealTimeCarUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACCDProtocol, OnRealTimeCarUpdate), Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnRealTimeCarUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnRealTimeCarUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnRealTimeUpdate_MetaData[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnRealTimeUpdate = { "OnRealTimeUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACCDProtocol, OnRealTimeUpdate), Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnRealTimeUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnRealTimeUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnEntryList_MetaData[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnEntryList = { "OnEntryList", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACCDProtocol, OnEntryList), Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnEntryList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnEntryList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnConnectionStateChanged_MetaData[] = {
		{ "Category", "ACCD|Protocol" },
		{ "ModuleRelativePath", "Private/ACCD/ACCDProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnConnectionStateChanged = { "OnConnectionStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACCDProtocol, OnConnectionStateChanged), Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnConnectionStateChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnConnectionStateChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACCDProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnTrackDataUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnEntryListUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnRealTimeCarUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnRealTimeUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnEntryList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACCDProtocol_Statics::NewProp_OnConnectionStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACCDProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACCDProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AACCDProtocol_Statics::ClassParams = {
		&AACCDProtocol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACCDProtocol_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AACCDProtocol_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AACCDProtocol_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AACCDProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AACCDProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AACCDProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AACCDProtocol, 834713810);
	template<> ACCDIRECTOR_API UClass* StaticClass<AACCDProtocol>()
	{
		return AACCDProtocol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACCDProtocol(Z_Construct_UClass_AACCDProtocol, &AACCDProtocol::StaticClass, TEXT("/Script/ACCDirector"), TEXT("AACCDProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACCDProtocol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
