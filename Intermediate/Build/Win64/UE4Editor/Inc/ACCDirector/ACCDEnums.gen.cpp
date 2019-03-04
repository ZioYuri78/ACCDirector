// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ERaceSessionType();
	UPackage* Z_Construct_UPackage__Script_ACCDirector();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ESessionPhase();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ECarLocationEnum();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_ELapType();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EDriverCategory();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EBNProtocol();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EInboundMessageTypes();
	ACCDIRECTOR_API UEnum* Z_Construct_UEnum_ACCDirector_EOutboundMessageTypes();
// End Cross Module References
	static UEnum* ERaceSessionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACCDirector_ERaceSessionType, Z_Construct_UPackage__Script_ACCDirector(), TEXT("ERaceSessionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERaceSessionType(ERaceSessionType_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("ERaceSessionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_ERaceSessionType_CRC() { return 3352727310U; }
	UEnum* Z_Construct_UEnum_ACCDirector_ERaceSessionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERaceSessionType"), 0, Get_Z_Construct_UEnum_ACCDirector_ERaceSessionType_CRC(), false);
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
				{ "ERaceSessionType::NONE", (int64)ERaceSessionType::NONE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERaceSessionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERaceSessionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
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
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESessionPhase(ESessionPhase_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("ESessionPhase"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_ESessionPhase_CRC() { return 3090050046U; }
	UEnum* Z_Construct_UEnum_ACCDirector_ESessionPhase()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESessionPhase"), 0, Get_Z_Construct_UEnum_ACCDirector_ESessionPhase_CRC(), false);
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
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESessionPhase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESessionPhase",
				Enumerators,
				ARRAY_COUNT(Enumerators),
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
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECarLocationEnum(ECarLocationEnum_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("ECarLocationEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_ECarLocationEnum_CRC() { return 1787218434U; }
	UEnum* Z_Construct_UEnum_ACCDirector_ECarLocationEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECarLocationEnum"), 0, Get_Z_Construct_UEnum_ACCDirector_ECarLocationEnum_CRC(), false);
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
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECarLocationEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECarLocationEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
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
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELapType(ELapType_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("ELapType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_ELapType_CRC() { return 3918948321U; }
	UEnum* Z_Construct_UEnum_ACCDirector_ELapType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELapType"), 0, Get_Z_Construct_UEnum_ACCDirector_ELapType_CRC(), false);
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
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELapType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELapType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
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
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDriverCategory(EDriverCategory_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("EDriverCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_EDriverCategory_CRC() { return 989618274U; }
	UEnum* Z_Construct_UEnum_ACCDirector_EDriverCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDriverCategory"), 0, Get_Z_Construct_UEnum_ACCDirector_EDriverCategory_CRC(), false);
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
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDriverCategory",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDriverCategory",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBNProtocol_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACCDirector_EBNProtocol, Z_Construct_UPackage__Script_ACCDirector(), TEXT("EBNProtocol"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBNProtocol(EBNProtocol_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("EBNProtocol"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_EBNProtocol_CRC() { return 3135053500U; }
	UEnum* Z_Construct_UEnum_ACCDirector_EBNProtocol()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBNProtocol"), 0, Get_Z_Construct_UEnum_ACCDirector_EBNProtocol_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBNProtocol::BROADCAST_PROTOCOL_VERSION", (int64)EBNProtocol::BROADCAST_PROTOCOL_VERSION },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBNProtocol",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBNProtocol",
				Enumerators,
				ARRAY_COUNT(Enumerators),
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
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInboundMessageTypes(EInboundMessageTypes_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("EInboundMessageTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_EInboundMessageTypes_CRC() { return 1356117354U; }
	UEnum* Z_Construct_UEnum_ACCDirector_EInboundMessageTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInboundMessageTypes"), 0, Get_Z_Construct_UEnum_ACCDirector_EInboundMessageTypes_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInboundMessageTypes::NONE", (int64)EInboundMessageTypes::NONE },
				{ "EInboundMessageTypes::REGISTRATION_RESULT", (int64)EInboundMessageTypes::REGISTRATION_RESULT },
				{ "EInboundMessageTypes::REALTIME_UPDATE", (int64)EInboundMessageTypes::REALTIME_UPDATE },
				{ "EInboundMessageTypes::REALTIME_CAR_UPDATE", (int64)EInboundMessageTypes::REALTIME_CAR_UPDATE },
				{ "EInboundMessageTypes::ENTRY_LIST", (int64)EInboundMessageTypes::ENTRY_LIST },
				{ "EInboundMessageTypes::ENTRY_LIST_CAR", (int64)EInboundMessageTypes::ENTRY_LIST_CAR },
				{ "EInboundMessageTypes::TRACK_DATA", (int64)EInboundMessageTypes::TRACK_DATA },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ACCD/ACCDEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACCDirector,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EInboundMessageTypes",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EInboundMessageTypes",
				Enumerators,
				ARRAY_COUNT(Enumerators),
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
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOutboundMessageTypes(EOutboundMessageTypes_StaticEnum, TEXT("/Script/ACCDirector"), TEXT("EOutboundMessageTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACCDirector_EOutboundMessageTypes_CRC() { return 965753703U; }
	UEnum* Z_Construct_UEnum_ACCDirector_EOutboundMessageTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACCDirector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOutboundMessageTypes"), 0, Get_Z_Construct_UEnum_ACCDirector_EOutboundMessageTypes_CRC(), false);
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
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EOutboundMessageTypes",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EOutboundMessageTypes",
				Enumerators,
				ARRAY_COUNT(Enumerators),
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
