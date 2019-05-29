// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACCDirector/Public/ACCD/ACCDEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACCDEnums() {}
// Cross Module References
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EBroadcastingCarEventType();
	UPackage* Z_Construct_UPackage__Script_ACCDirector();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ERaceSessionType();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ESessionPhase();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ECarLocationEnum();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ELapType();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EDriverCategory();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EBNProtocolVersion();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EInboundMessageTypes();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EOutboundMessageTypes();
// End Cross Module References
	static UEnum* EBroadcastingCarEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACCDirector_EBroadcastingCarEventType, Z_Construct_UPackage__Script_ACCDirector(), TEXT("EBroadcastingCarEventType"));
		}
		return Singleton;
	}
	template<> ACCDIRECTOR_API UEnum* StaticEnum<EBroadcastingCarEventType>()
	{
		return EBroadcastingCarEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBroadcastingCarEventType(EBroadcastingCarEventType_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("EBroadcastingCarEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_EBroadcastingCarEventType_Hash() { return 1248523645U; }
	UEnum* Z_Construct_UEnum_ACCDirector_EBroadcastingCarEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBroadcastingCarEventType"), 0, Get_Z_Construct_UEnum_ACCDirector_EBroadcastingCarEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBroadcastingCarEventType::None", (int64)EBroadcastingCarEventType::None },
				{ "EBroadcastingCarEventType::GreenFlag", (int64)EBroadcastingCarEventType::GreenFlag },
				{ "EBroadcastingCarEventType::SessionOver", (int64)EBroadcastingCarEventType::SessionOver },
				{ "EBroadcastingCarEventType::PenaltyCommMsg", (int64)EBroadcastingCarEventType::PenaltyCommMsg },
				{ "EBroadcastingCarEventType::Accident", (int64)EBroadcastingCarEventType::Accident },
				{ "EBroadcastingCarEventType::LapCompleted", (int64)EBroadcastingCarEventType::LapCompleted },
				{ "EBroadcastingCarEventType::BestSessionLap", (int64)EBroadcastingCarEventType::BestSessionLap },
				{ "EBroadcastingCarEventType::BestPersonalLap", (int64)EBroadcastingCarEventType::BestPersonalLap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				nullptr,
				"EBroadcastingCarEventType",
				"EBroadcastingCarEventType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERaceSessionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACCDirector_ERaceSessionType, Z_Construct_UPackage__Script_ACCDirector(), TEXT("ERaceSessionType"));
		}
		return Singleton;
	}
	template<> ACCDIRECTOR_API UEnum* StaticEnum<ERaceSessionType>()
	{
		return ERaceSessionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERaceSessionType(ERaceSessionType_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("ERaceSessionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_ERaceSessionType_Hash() { return 572702059U; }
	UEnum* Z_Construct_UEnum_ACCDirector_ERaceSessionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERaceSessionType"), 0, Get_Z_Construct_UEnum_ACCDirector_ERaceSessionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERaceSessionType::Practice", (int64)ERaceSessionType::Practice },
				{ "ERaceSessionType::Qualifying", (int64)ERaceSessionType::Qualifying },
				{ "ERaceSessionType::Superpole", (int64)ERaceSessionType::Superpole },
				{ "ERaceSessionType::Race", (int64)ERaceSessionType::Race },
				{ "ERaceSessionType::Hotlap", (int64)ERaceSessionType::Hotlap },
				{ "ERaceSessionType::Hotstint", (int64)ERaceSessionType::Hotstint },
				{ "ERaceSessionType::HotlapSuperpole", (int64)ERaceSessionType::HotlapSuperpole },
				{ "ERaceSessionType::Replay", (int64)ERaceSessionType::Replay },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				nullptr,
				"ERaceSessionType",
				"ERaceSessionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESessionPhase_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACCDirector_ESessionPhase, Z_Construct_UPackage__Script_ACCDirector(), TEXT("ESessionPhase"));
		}
		return Singleton;
	}
	template<> ACCDIRECTOR_API UEnum* StaticEnum<ESessionPhase>()
	{
		return ESessionPhase_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESessionPhase(ESessionPhase_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("ESessionPhase"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_ESessionPhase_Hash() { return 101067584U; }
	UEnum* Z_Construct_UEnum_ACCDirector_ESessionPhase()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESessionPhase"), 0, Get_Z_Construct_UEnum_ACCDirector_ESessionPhase_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESessionPhase::NONE", (int64)ESessionPhase::NONE },
				{ "ESessionPhase::Starting", (int64)ESessionPhase::Starting },
				{ "ESessionPhase::PreFormation", (int64)ESessionPhase::PreFormation },
				{ "ESessionPhase::FormationLap", (int64)ESessionPhase::FormationLap },
				{ "ESessionPhase::PreSession", (int64)ESessionPhase::PreSession },
				{ "ESessionPhase::Session", (int64)ESessionPhase::Session },
				{ "ESessionPhase::SessionOver", (int64)ESessionPhase::SessionOver },
				{ "ESessionPhase::PostSession", (int64)ESessionPhase::PostSession },
				{ "ESessionPhase::ResultUI", (int64)ESessionPhase::ResultUI },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				nullptr,
				"ESessionPhase",
				"ESessionPhase",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECarLocationEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACCDirector_ECarLocationEnum, Z_Construct_UPackage__Script_ACCDirector(), TEXT("ECarLocationEnum"));
		}
		return Singleton;
	}
	template<> ACCDIRECTOR_API UEnum* StaticEnum<ECarLocationEnum>()
	{
		return ECarLocationEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECarLocationEnum(ECarLocationEnum_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("ECarLocationEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_ECarLocationEnum_Hash() { return 3635592906U; }
	UEnum* Z_Construct_UEnum_ACCDirector_ECarLocationEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECarLocationEnum"), 0, Get_Z_Construct_UEnum_ACCDirector_ECarLocationEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECarLocationEnum::NONE", (int64)ECarLocationEnum::NONE },
				{ "ECarLocationEnum::Track", (int64)ECarLocationEnum::Track },
				{ "ECarLocationEnum::Pitlane", (int64)ECarLocationEnum::Pitlane },
				{ "ECarLocationEnum::PitEntry", (int64)ECarLocationEnum::PitEntry },
				{ "ECarLocationEnum::PitExit", (int64)ECarLocationEnum::PitExit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				nullptr,
				"ECarLocationEnum",
				"ECarLocationEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELapType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACCDirector_ELapType, Z_Construct_UPackage__Script_ACCDirector(), TEXT("ELapType"));
		}
		return Singleton;
	}
	template<> ACCDIRECTOR_API UEnum* StaticEnum<ELapType>()
	{
		return ELapType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELapType(ELapType_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("ELapType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_ELapType_Hash() { return 1832837404U; }
	UEnum* Z_Construct_UEnum_ACCDirector_ELapType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELapType"), 0, Get_Z_Construct_UEnum_ACCDirector_ELapType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELapType::ERROR", (int64)ELapType::ERROR },
				{ "ELapType::Outlap", (int64)ELapType::Outlap },
				{ "ELapType::Regular", (int64)ELapType::Regular },
				{ "ELapType::Inlap", (int64)ELapType::Inlap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				nullptr,
				"ELapType",
				"ELapType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDriverCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACCDirector_EDriverCategory, Z_Construct_UPackage__Script_ACCDirector(), TEXT("EDriverCategory"));
		}
		return Singleton;
	}
	template<> ACCDIRECTOR_API UEnum* StaticEnum<EDriverCategory>()
	{
		return EDriverCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDriverCategory(EDriverCategory_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("EDriverCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_EDriverCategory_Hash() { return 3392188076U; }
	UEnum* Z_Construct_UEnum_ACCDirector_EDriverCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDriverCategory"), 0, Get_Z_Construct_UEnum_ACCDirector_EDriverCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDriverCategory::Platinum", (int64)EDriverCategory::Platinum },
				{ "EDriverCategory::Gold", (int64)EDriverCategory::Gold },
				{ "EDriverCategory::Silver", (int64)EDriverCategory::Silver },
				{ "EDriverCategory::Bronze", (int64)EDriverCategory::Bronze },
				{ "EDriverCategory::Error", (int64)EDriverCategory::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				nullptr,
				"EDriverCategory",
				"EDriverCategory",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBNProtocolVersion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACCDirector_EBNProtocolVersion, Z_Construct_UPackage__Script_ACCDirector(), TEXT("EBNProtocolVersion"));
		}
		return Singleton;
	}
	template<> ACCDIRECTOR_API UEnum* StaticEnum<EBNProtocolVersion>()
	{
		return EBNProtocolVersion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBNProtocolVersion(EBNProtocolVersion_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("EBNProtocolVersion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_EBNProtocolVersion_Hash() { return 1657553030U; }
	UEnum* Z_Construct_UEnum_ACCDirector_EBNProtocolVersion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBNProtocolVersion"), 0, Get_Z_Construct_UEnum_ACCDirector_EBNProtocolVersion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBNProtocolVersion::BROADCAST_PROTOCOL_VERSION", (int64)EBNProtocolVersion::BROADCAST_PROTOCOL_VERSION },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				nullptr,
				"EBNProtocolVersion",
				"EBNProtocolVersion",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EInboundMessageTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACCDirector_EInboundMessageTypes, Z_Construct_UPackage__Script_ACCDirector(), TEXT("EInboundMessageTypes"));
		}
		return Singleton;
	}
	template<> ACCDIRECTOR_API UEnum* StaticEnum<EInboundMessageTypes>()
	{
		return EInboundMessageTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInboundMessageTypes(EInboundMessageTypes_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("EInboundMessageTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_EInboundMessageTypes_Hash() { return 209598607U; }
	UEnum* Z_Construct_UEnum_ACCDirector_EInboundMessageTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInboundMessageTypes"), 0, Get_Z_Construct_UEnum_ACCDirector_EInboundMessageTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInboundMessageTypes::REGISTRATION_RESULT", (int64)EInboundMessageTypes::REGISTRATION_RESULT },
				{ "EInboundMessageTypes::REALTIME_UPDATE", (int64)EInboundMessageTypes::REALTIME_UPDATE },
				{ "EInboundMessageTypes::REALTIME_CAR_UPDATE", (int64)EInboundMessageTypes::REALTIME_CAR_UPDATE },
				{ "EInboundMessageTypes::ENTRY_LIST", (int64)EInboundMessageTypes::ENTRY_LIST },
				{ "EInboundMessageTypes::TRACK_DATA", (int64)EInboundMessageTypes::TRACK_DATA },
				{ "EInboundMessageTypes::ENTRY_LIST_CAR", (int64)EInboundMessageTypes::ENTRY_LIST_CAR },
				{ "EInboundMessageTypes::BROADCASTING_EVENT", (int64)EInboundMessageTypes::BROADCASTING_EVENT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				nullptr,
				"EInboundMessageTypes",
				"EInboundMessageTypes",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOutboundMessageTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACCDirector_EOutboundMessageTypes, Z_Construct_UPackage__Script_ACCDirector(), TEXT("EOutboundMessageTypes"));
		}
		return Singleton;
	}
	template<> ACCDIRECTOR_API UEnum* StaticEnum<EOutboundMessageTypes>()
	{
		return EOutboundMessageTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOutboundMessageTypes(EOutboundMessageTypes_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("EOutboundMessageTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_EOutboundMessageTypes_Hash() { return 314295709U; }
	UEnum* Z_Construct_UEnum_ACCDirector_EOutboundMessageTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOutboundMessageTypes"), 0, Get_Z_Construct_UEnum_ACCDirector_EOutboundMessageTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOutboundMessageTypes::REGISTER_COMMAND_APPLICATION", (int64)EOutboundMessageTypes::REGISTER_COMMAND_APPLICATION },
				{ "EOutboundMessageTypes::UNREGISTER_COMMAND_APPLICATION", (int64)EOutboundMessageTypes::UNREGISTER_COMMAND_APPLICATION },
				{ "EOutboundMessageTypes::REQUEST_ENTRY_LIST", (int64)EOutboundMessageTypes::REQUEST_ENTRY_LIST },
				{ "EOutboundMessageTypes::REQUEST_TRACK_DATA", (int64)EOutboundMessageTypes::REQUEST_TRACK_DATA },
				{ "EOutboundMessageTypes::CHANGE_HUD_PAGE", (int64)EOutboundMessageTypes::CHANGE_HUD_PAGE },
				{ "EOutboundMessageTypes::CHANGE_FOCUS", (int64)EOutboundMessageTypes::CHANGE_FOCUS },
				{ "EOutboundMessageTypes::INSTANT_REPLAY_REQUEST", (int64)EOutboundMessageTypes::INSTANT_REPLAY_REQUEST },
				{ "EOutboundMessageTypes::PLAY_MANUAL_REPLAY_HIGHLIGHT", (int64)EOutboundMessageTypes::PLAY_MANUAL_REPLAY_HIGHLIGHT },
				{ "EOutboundMessageTypes::SAVE_MANUAL_REPLAY_HIGHLIGHT", (int64)EOutboundMessageTypes::SAVE_MANUAL_REPLAY_HIGHLIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
				{ "SAVE_MANUAL_REPLAY_HIGHLIGHT.ToolTip", "TODO, but planned" },
				{ "ToolTip", "===ENUMS===" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				nullptr,
				"EOutboundMessageTypes",
				"EOutboundMessageTypes",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
