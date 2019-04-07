// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACCDirector/Public/Framework/ACCDGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACCDGameInstance() {}
// Cross Module References
	ACCDIRECTOR_API UClass* Z_Construct_UClass_UACCDGameInstance_NoRegister();
	ACCDIRECTOR_API UClass* Z_Construct_UClass_UACCDGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_ACCDirector();
// End Cross Module References
	void UACCDGameInstance::StaticRegisterNativesUACCDGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UACCDGameInstance_NoRegister()
	{
		return UACCDGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UACCDGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACCDGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACCDGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Framework/ACCDGameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Framework/ACCDGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACCDGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACCDGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UACCDGameInstance_Statics::ClassParams = {
		&UACCDGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UACCDGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UACCDGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACCDGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACCDGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACCDGameInstance, 503788151);
	template<> ACCDIRECTOR_API UClass* StaticClass<UACCDGameInstance>()
	{
		return UACCDGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACCDGameInstance(Z_Construct_UClass_UACCDGameInstance, &UACCDGameInstance::StaticClass, TEXT("/Script/ACCDirector"), TEXT("UACCDGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACCDGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
