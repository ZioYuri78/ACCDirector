// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACCDirector/Public/Framework/ACCDGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACCDGameMode() {}
// Cross Module References
	ACCDIRECTOR_API UClass* Z_Construct_UClass_AACCDGameMode_NoRegister();
	ACCDIRECTOR_API UClass* Z_Construct_UClass_AACCDGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ACCDirector();
// End Cross Module References
	void AACCDGameMode::StaticRegisterNativesAACCDGameMode()
	{
	}
	UClass* Z_Construct_UClass_AACCDGameMode_NoRegister()
	{
		return AACCDGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AACCDGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACCDGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACCDGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Framework/ACCDGameMode.h" },
		{ "ModuleRelativePath", "Public/Framework/ACCDGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACCDGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACCDGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AACCDGameMode_Statics::ClassParams = {
		&AACCDGameMode::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AACCDGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AACCDGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AACCDGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AACCDGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AACCDGameMode, 1044272206);
	template<> ACCDIRECTOR_API UClass* StaticClass<AACCDGameMode>()
	{
		return AACCDGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACCDGameMode(Z_Construct_UClass_AACCDGameMode, &AACCDGameMode::StaticClass, TEXT("/Script/ACCDirector"), TEXT("AACCDGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACCDGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
