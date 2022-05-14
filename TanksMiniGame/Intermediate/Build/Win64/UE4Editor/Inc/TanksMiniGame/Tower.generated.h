// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKSMINIGAME_Tower_generated_h
#error "Tower.generated.h already included, missing '#pragma once' in Tower.h"
#endif
#define TANKSMINIGAME_Tower_generated_h

#define TanksMiniGame_Source_TanksMiniGame_Tower_h_15_RPC_WRAPPERS
#define TanksMiniGame_Source_TanksMiniGame_Tower_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TanksMiniGame_Source_TanksMiniGame_Tower_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATower(); \
	friend struct Z_Construct_UClass_ATower_Statics; \
public: \
	DECLARE_CLASS(ATower, ABasePawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TanksMiniGame"), NO_API) \
	DECLARE_SERIALIZER(ATower)


#define TanksMiniGame_Source_TanksMiniGame_Tower_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATower(); \
	friend struct Z_Construct_UClass_ATower_Statics; \
public: \
	DECLARE_CLASS(ATower, ABasePawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TanksMiniGame"), NO_API) \
	DECLARE_SERIALIZER(ATower)


#define TanksMiniGame_Source_TanksMiniGame_Tower_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower(ATower&&); \
	NO_API ATower(const ATower&); \
public:


#define TanksMiniGame_Source_TanksMiniGame_Tower_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower(ATower&&); \
	NO_API ATower(const ATower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATower)


#define TanksMiniGame_Source_TanksMiniGame_Tower_h_15_PRIVATE_PROPERTY_OFFSET
#define TanksMiniGame_Source_TanksMiniGame_Tower_h_12_PROLOG
#define TanksMiniGame_Source_TanksMiniGame_Tower_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksMiniGame_Source_TanksMiniGame_Tower_h_15_PRIVATE_PROPERTY_OFFSET \
	TanksMiniGame_Source_TanksMiniGame_Tower_h_15_RPC_WRAPPERS \
	TanksMiniGame_Source_TanksMiniGame_Tower_h_15_INCLASS \
	TanksMiniGame_Source_TanksMiniGame_Tower_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TanksMiniGame_Source_TanksMiniGame_Tower_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksMiniGame_Source_TanksMiniGame_Tower_h_15_PRIVATE_PROPERTY_OFFSET \
	TanksMiniGame_Source_TanksMiniGame_Tower_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TanksMiniGame_Source_TanksMiniGame_Tower_h_15_INCLASS_NO_PURE_DECLS \
	TanksMiniGame_Source_TanksMiniGame_Tower_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKSMINIGAME_API UClass* StaticClass<class ATower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TanksMiniGame_Source_TanksMiniGame_Tower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
