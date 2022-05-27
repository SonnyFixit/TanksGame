// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKSMINIGAME_TanksMiniGameGameMode_generated_h
#error "TanksMiniGameGameMode.generated.h already included, missing '#pragma once' in TanksMiniGameGameMode.h"
#endif
#define TANKSMINIGAME_TanksMiniGameGameMode_generated_h

#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_RPC_WRAPPERS
#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_EVENT_PARMS \
	struct TanksMiniGameGameMode_eventGameOver_Parms \
	{ \
		bool bWonGame; \
	};


#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_CALLBACK_WRAPPERS
#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATanksMiniGameGameMode(); \
	friend struct Z_Construct_UClass_ATanksMiniGameGameMode_Statics; \
public: \
	DECLARE_CLASS(ATanksMiniGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TanksMiniGame"), NO_API) \
	DECLARE_SERIALIZER(ATanksMiniGameGameMode)


#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATanksMiniGameGameMode(); \
	friend struct Z_Construct_UClass_ATanksMiniGameGameMode_Statics; \
public: \
	DECLARE_CLASS(ATanksMiniGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TanksMiniGame"), NO_API) \
	DECLARE_SERIALIZER(ATanksMiniGameGameMode)


#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATanksMiniGameGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATanksMiniGameGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATanksMiniGameGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATanksMiniGameGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATanksMiniGameGameMode(ATanksMiniGameGameMode&&); \
	NO_API ATanksMiniGameGameMode(const ATanksMiniGameGameMode&); \
public:


#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATanksMiniGameGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATanksMiniGameGameMode(ATanksMiniGameGameMode&&); \
	NO_API ATanksMiniGameGameMode(const ATanksMiniGameGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATanksMiniGameGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATanksMiniGameGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATanksMiniGameGameMode)


#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_12_PROLOG \
	TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_EVENT_PARMS


#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_RPC_WRAPPERS \
	TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_CALLBACK_WRAPPERS \
	TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_INCLASS \
	TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_CALLBACK_WRAPPERS \
	TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_INCLASS_NO_PURE_DECLS \
	TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKSMINIGAME_API UClass* StaticClass<class ATanksMiniGameGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TanksMiniGame_Source_TanksMiniGame_TanksMiniGameGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
