// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACCDirector/Public/ACCD/ACCDBaseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACCDBaseWidget() {}
// Cross Module References
	ACCDIRECTOR_API UClass* Z_Construct_UClass_UACCDBaseWidget_NoRegister();
	ACCDIRECTOR_API UClass* Z_Construct_UClass_UACCDBaseWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ACCDirector();
// End Cross Module References
	void UACCDBaseWidget::StaticRegisterNativesUACCDBaseWidget()
	{
	}
	UClass* Z_Construct_UClass_UACCDBaseWidget_NoRegister()
	{
		return UACCDBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_UACCDBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACCDBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ACCDirector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACCDBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACCD/ACCDBaseWidget.h" },
		{ "ModuleRelativePath", "Public/ACCD/ACCDBaseWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACCDBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACCDBaseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UACCDBaseWidget_Statics::ClassParams = {
		&UACCDBaseWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UACCDBaseWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UACCDBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACCDBaseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACCDBaseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACCDBaseWidget, 3250900029);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACCDBaseWidget(Z_Construct_UClass_UACCDBaseWidget, &UACCDBaseWidget::StaticClass, TEXT("/Script/ACCDirector"), TEXT("UACCDBaseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACCDBaseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
