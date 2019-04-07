// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCDIRECTOR_ACCDEnums_generated_h
#error "ACCDEnums.generated.h already included, missing '#pragma once' in ACCDEnums.h"
#endif
#define ACCDIRECTOR_ACCDEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ACCDirector_Source_ACCDirector_Public_ACCD_ACCDEnums_h


#define FOREACH_ENUM_ERACESESSIONTYPE(op) \
	op(ERaceSessionType::Practice) \
	op(ERaceSessionType::Qualifying) \
	op(ERaceSessionType::Superpole) \
	op(ERaceSessionType::Race) \
	op(ERaceSessionType::Hotlap) \
	op(ERaceSessionType::Hotstint) \
	op(ERaceSessionType::HotlapSuperpole) \
	op(ERaceSessionType::Replay) \
	op(ERaceSessionType::NONE) 

enum class ERaceSessionType : uint8;
template<> ACCDIRECTOR_API UEnum* StaticEnum<ERaceSessionType>();

#define FOREACH_ENUM_ESESSIONPHASE(op) \
	op(ESessionPhase::NONE) \
	op(ESessionPhase::Starting) \
	op(ESessionPhase::PreFormation) \
	op(ESessionPhase::FormationLap) \
	op(ESessionPhase::PreSession) \
	op(ESessionPhase::Session) \
	op(ESessionPhase::SessionOver) \
	op(ESessionPhase::PostSession) \
	op(ESessionPhase::ResultUI) 

enum class ESessionPhase : uint8;
template<> ACCDIRECTOR_API UEnum* StaticEnum<ESessionPhase>();

#define FOREACH_ENUM_ECARLOCATIONENUM(op) \
	op(ECarLocationEnum::NONE) \
	op(ECarLocationEnum::Track) \
	op(ECarLocationEnum::Pitlane) \
	op(ECarLocationEnum::PitEntry) \
	op(ECarLocationEnum::PitExit) 

enum class ECarLocationEnum : uint8;
template<> ACCDIRECTOR_API UEnum* StaticEnum<ECarLocationEnum>();

#define FOREACH_ENUM_ELAPTYPE(op) \
	op(ELapType::ERROR) \
	op(ELapType::Outlap) \
	op(ELapType::Regular) \
	op(ELapType::Inlap) 

enum class ELapType : uint8;
template<> ACCDIRECTOR_API UEnum* StaticEnum<ELapType>();

#define FOREACH_ENUM_EDRIVERCATEGORY(op) \
	op(EDriverCategory::Platinum) \
	op(EDriverCategory::Gold) \
	op(EDriverCategory::Silver) \
	op(EDriverCategory::Bronze) \
	op(EDriverCategory::Error) 

enum class EDriverCategory : uint8;
template<> ACCDIRECTOR_API UEnum* StaticEnum<EDriverCategory>();

#define FOREACH_ENUM_EBNPROTOCOL(op) \
	op(EBNProtocol::BROADCAST_PROTOCOL_VERSION) 

enum class EBNProtocol : uint8;
template<> ACCDIRECTOR_API UEnum* StaticEnum<EBNProtocol>();

#define FOREACH_ENUM_EINBOUNDMESSAGETYPES(op) \
	op(EInboundMessageTypes::NONE) \
	op(EInboundMessageTypes::REGISTRATION_RESULT) \
	op(EInboundMessageTypes::REALTIME_UPDATE) \
	op(EInboundMessageTypes::REALTIME_CAR_UPDATE) \
	op(EInboundMessageTypes::ENTRY_LIST) \
	op(EInboundMessageTypes::ENTRY_LIST_CAR) \
	op(EInboundMessageTypes::TRACK_DATA) 

enum class EInboundMessageTypes : uint8;
template<> ACCDIRECTOR_API UEnum* StaticEnum<EInboundMessageTypes>();

#define FOREACH_ENUM_EOUTBOUNDMESSAGETYPES(op) \
	op(EOutboundMessageTypes::REGISTER_COMMAND_APPLICATION) \
	op(EOutboundMessageTypes::UNREGISTER_COMMAND_APPLICATION) \
	op(EOutboundMessageTypes::REQUEST_ENTRY_LIST) \
	op(EOutboundMessageTypes::REQUEST_TRACK_DATA) \
	op(EOutboundMessageTypes::CHANGE_HUD_PAGE) \
	op(EOutboundMessageTypes::CHANGE_FOCUS) \
	op(EOutboundMessageTypes::INSTANT_REPLAY_REQUEST) \
	op(EOutboundMessageTypes::PLAY_MANUAL_REPLAY_HIGHLIGHT) \
	op(EOutboundMessageTypes::SAVE_MANUAL_REPLAY_HIGHLIGHT) 

enum class EOutboundMessageTypes : uint8;
template<> ACCDIRECTOR_API UEnum* StaticEnum<EOutboundMessageTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
