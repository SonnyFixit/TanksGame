// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKSMINIGAME_BasePawn_generated_h
#error "BasePawn.generated.h already included, missing '#pragma once' in BasePawn.h"
#endif
#define TANKSMINIGAME_BasePawn_generated_h

#define TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_RPC_WRAPPERS
#define TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePawn(); \
	friend struct Z_Construct_UClass_ABasePawn_Statics; \
public: \
	DECLARE_CLASS(ABasePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TanksMiniGame"), NO_API) \
	DECLARE_SERIALIZER(ABasePawn)


#define TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABasePawn(); \
	friend struct Z_Construct_UClass_ABasePawn_Statics; \
public: \
	DECLARE_CLASS(ABasePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TanksMiniGame"), NO_API) \
	DECLARE_SERIALIZER(ABasePawn)


#define TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePawn(ABasePawn&&); \
	NO_API ABasePawn(const ABasePawn&); \
public:


#define TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePawn(ABasePawn&&); \
	NO_API ABasePawn(const ABasePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePawn)


#define TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleComp() { return STRUCT_OFFSET(ABasePawn, CapsuleComp); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ABasePawn, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__TurretMesh() { return STRUCT_OFFSET(ABasePawn, TurretMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnPoint() { return STRUCT_OFFSET(ABasePawn, ProjectileSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ABasePawn, ProjectileClass); }


#define TanksMiniGame_Source_TanksMiniGame_BasePawn_h_9_PROLOG
#define TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_RPC_WRAPPERS \
	TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_INCLASS \
	TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_INCLASS_NO_PURE_DECLS \
	TanksMiniGame_Source_TanksMiniGame_BasePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKSMINIGAME_API UClass* StaticClass<class ABasePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TanksMiniGame_Source_TanksMiniGame_BasePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
