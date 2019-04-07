// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTrackData;
struct FCarInfo;
struct FRealTimeCarUpdate;
struct FRealTimeUpdate;
struct FRegistrationResult;
#ifdef ACCDIRECTOR_ACCDProtocol_generated_h
#error "ACCDProtocol.generated.h already included, missing '#pragma once' in ACCDProtocol.h"
#endif
#define ACCDIRECTOR_ACCDProtocol_generated_h

#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_18_DELEGATE \
struct _Script_ACCDirector_eventTrackDataUpdateDelegate_Parms \
{ \
	FString ConnectionIdentifier; \
	FTrackData TrackData; \
}; \
static inline void FTrackDataUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackDataUpdateDelegate, const FString& ConnectionIdentifier, const FTrackData TrackData) \
{ \
	_Script_ACCDirector_eventTrackDataUpdateDelegate_Parms Parms; \
	Parms.ConnectionIdentifier=ConnectionIdentifier; \
	Parms.TrackData=TrackData; \
	TrackDataUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_17_DELEGATE \
struct _Script_ACCDirector_eventEntryListUpdateDelegate_Parms \
{ \
	FString ConnectionIdentifier; \
	FCarInfo CarInfo; \
}; \
static inline void FEntryListUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& EntryListUpdateDelegate, const FString& ConnectionIdentifier, FCarInfo CarInfo) \
{ \
	_Script_ACCDirector_eventEntryListUpdateDelegate_Parms Parms; \
	Parms.ConnectionIdentifier=ConnectionIdentifier; \
	Parms.CarInfo=CarInfo; \
	EntryListUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_16_DELEGATE \
struct _Script_ACCDirector_eventRealTimeCarUpdateDelegate_Parms \
{ \
	FString ConnectionIdentifier; \
	FRealTimeCarUpdate CarUpdate; \
}; \
static inline void FRealTimeCarUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& RealTimeCarUpdateDelegate, const FString& ConnectionIdentifier, const FRealTimeCarUpdate CarUpdate) \
{ \
	_Script_ACCDirector_eventRealTimeCarUpdateDelegate_Parms Parms; \
	Parms.ConnectionIdentifier=ConnectionIdentifier; \
	Parms.CarUpdate=CarUpdate; \
	RealTimeCarUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_15_DELEGATE \
struct _Script_ACCDirector_eventRealtimeUpdateDelegate_Parms \
{ \
	FString ConnectionIdentifier; \
	FRealTimeUpdate RealTimeUpdate; \
}; \
static inline void FRealtimeUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& RealtimeUpdateDelegate, const FString& ConnectionIdentifier, const FRealTimeUpdate RealTimeUpdate) \
{ \
	_Script_ACCDirector_eventRealtimeUpdateDelegate_Parms Parms; \
	Parms.ConnectionIdentifier=ConnectionIdentifier; \
	Parms.RealTimeUpdate=RealTimeUpdate; \
	RealtimeUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_14_DELEGATE \
struct _Script_ACCDirector_eventEntryListDelegate_Parms \
{ \
	FString ConnectionIdentifier; \
	TArray<FCarInfo> EntryList; \
}; \
static inline void FEntryListDelegate_DelegateWrapper(const FMulticastScriptDelegate& EntryListDelegate, const FString& ConnectionIdentifier, TArray<FCarInfo> const& EntryList) \
{ \
	_Script_ACCDirector_eventEntryListDelegate_Parms Parms; \
	Parms.ConnectionIdentifier=ConnectionIdentifier; \
	Parms.EntryList=EntryList; \
	EntryListDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_13_DELEGATE \
struct _Script_ACCDirector_eventConnectionStateChangedDelegate_Parms \
{ \
	FRegistrationResult RegistrationResult; \
}; \
static inline void FConnectionStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ConnectionStateChangedDelegate, const FRegistrationResult RegistrationResult) \
{ \
	_Script_ACCDirector_eventConnectionStateChangedDelegate_Parms Parms; \
	Parms.RegistrationResult=RegistrationResult; \
	ConnectionStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestHUDPage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_HudPage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestHUDPage(Z_Param_HudPage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestInstantReplay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartSessionTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DurationMS); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InitialFocusedCarIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InitialCameraSet); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InitialCamera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestInstantReplay(Z_Param_StartSessionTime,Z_Param_DurationMS,Z_Param_InitialFocusedCarIndex,Z_Param_InitialCameraSet,Z_Param_InitialCamera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCamera) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CameraSet); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Camera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCamera(Z_Param_CameraSet,Z_Param_Camera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFocusWithCam) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CarIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CameraSet); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Camera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFocusWithCam(Z_Param_CarIndex,Z_Param_CameraSet,Z_Param_Camera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFocus) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CarIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFocus(Z_Param_CarIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestTrackData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestTrackData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestEntryList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestEntryList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestDisconnection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestDisconnection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestConnection) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ConnectionPsw); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RTUpdateInterval); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CommandPsw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestConnection(Z_Param_IP,Z_Param_Port,Z_Param_DisplayName,Z_Param_ConnectionPsw,Z_Param_RTUpdateInterval,Z_Param_CommandPsw); \
		P_NATIVE_END; \
	}


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestHUDPage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_HudPage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestHUDPage(Z_Param_HudPage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestInstantReplay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartSessionTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DurationMS); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InitialFocusedCarIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InitialCameraSet); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InitialCamera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestInstantReplay(Z_Param_StartSessionTime,Z_Param_DurationMS,Z_Param_InitialFocusedCarIndex,Z_Param_InitialCameraSet,Z_Param_InitialCamera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCamera) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CameraSet); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Camera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCamera(Z_Param_CameraSet,Z_Param_Camera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFocusWithCam) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CarIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CameraSet); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Camera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFocusWithCam(Z_Param_CarIndex,Z_Param_CameraSet,Z_Param_Camera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFocus) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CarIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFocus(Z_Param_CarIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestTrackData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestTrackData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestEntryList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestEntryList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestDisconnection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestDisconnection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestConnection) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ConnectionPsw); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RTUpdateInterval); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CommandPsw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestConnection(Z_Param_IP,Z_Param_Port,Z_Param_DisplayName,Z_Param_ConnectionPsw,Z_Param_RTUpdateInterval,Z_Param_CommandPsw); \
		P_NATIVE_END; \
	}


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACCDProtocol(); \
	friend struct Z_Construct_UClass_AACCDProtocol_Statics; \
public: \
	DECLARE_CLASS(AACCDProtocol, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ACCDirector"), NO_API) \
	DECLARE_SERIALIZER(AACCDProtocol)


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAACCDProtocol(); \
	friend struct Z_Construct_UClass_AACCDProtocol_Statics; \
public: \
	DECLARE_CLASS(AACCDProtocol, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ACCDirector"), NO_API) \
	DECLARE_SERIALIZER(AACCDProtocol)


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AACCDProtocol(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AACCDProtocol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACCDProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACCDProtocol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACCDProtocol(AACCDProtocol&&); \
	NO_API AACCDProtocol(const AACCDProtocol&); \
public:


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACCDProtocol(AACCDProtocol&&); \
	NO_API AACCDProtocol(const AACCDProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACCDProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACCDProtocol); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACCDProtocol)


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_PRIVATE_PROPERTY_OFFSET
#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_21_PROLOG
#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_PRIVATE_PROPERTY_OFFSET \
	ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_RPC_WRAPPERS \
	ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_INCLASS \
	ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_PRIVATE_PROPERTY_OFFSET \
	ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_INCLASS_NO_PURE_DECLS \
	ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCDIRECTOR_API UClass* StaticClass<class AACCDProtocol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ACCDirector_Source_ACCDirector_Private_ACCD_ACCDProtocol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
