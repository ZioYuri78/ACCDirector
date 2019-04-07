// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACCDirector_init() {}
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature();
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature();
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature();
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature();
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature();
	ACCDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ACCDirector()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ACCDirector_ConnectionStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ACCDirector_EntryListDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ACCDirector_RealtimeUpdateDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ACCDirector_RealTimeCarUpdateDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ACCDirector_EntryListUpdateDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ACCDirector_TrackDataUpdateDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/ACCDirector",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1D5FE471,
				0x5E802F89,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
