// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCDIRECTOR_ACCDGameMode_generated_h
#error "ACCDGameMode.generated.h already included, missing '#pragma once' in ACCDGameMode.h"
#endif
#define ACCDIRECTOR_ACCDGameMode_generated_h

#define ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_RPC_WRAPPERS
#define ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACCDGameMode(); \
	friend struct Z_Construct_UClass_AACCDGameMode_Statics; \
public: \
	DECLARE_CLASS(AACCDGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ACCDirector"), NO_API) \
	DECLARE_SERIALIZER(AACCDGameMode)


#define ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAACCDGameMode(); \
	friend struct Z_Construct_UClass_AACCDGameMode_Statics; \
public: \
	DECLARE_CLASS(AACCDGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ACCDirector"), NO_API) \
	DECLARE_SERIALIZER(AACCDGameMode)


#define ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AACCDGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AACCDGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACCDGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACCDGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACCDGameMode(AACCDGameMode&&); \
	NO_API AACCDGameMode(const AACCDGameMode&); \
public:


#define ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AACCDGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACCDGameMode(AACCDGameMode&&); \
	NO_API AACCDGameMode(const AACCDGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACCDGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACCDGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AACCDGameMode)


#define ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_12_PROLOG
#define ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_RPC_WRAPPERS \
	ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_INCLASS \
	ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_INCLASS_NO_PURE_DECLS \
	ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCDIRECTOR_API UClass* StaticClass<class AACCDGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ACCDirector_Source_ACCDirector_Public_Framework_ACCDGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
