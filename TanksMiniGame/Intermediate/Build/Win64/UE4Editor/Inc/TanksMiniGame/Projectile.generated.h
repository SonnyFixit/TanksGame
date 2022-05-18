// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TANKSMINIGAME_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define TANKSMINIGAME_Projectile_generated_h

#define TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TanksMiniGame"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TanksMiniGame"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(AProjectile, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AProjectile, Damage); } \
	FORCEINLINE static uint32 __PPO__HitParticles() { return STRUCT_OFFSET(AProjectile, HitParticles); } \
	FORCEINLINE static uint32 __PPO__TrailParticles() { return STRUCT_OFFSET(AProjectile, TrailParticles); }


#define TanksMiniGame_Source_TanksMiniGame_Projectile_h_9_PROLOG
#define TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_RPC_WRAPPERS \
	TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_INCLASS \
	TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_INCLASS_NO_PURE_DECLS \
	TanksMiniGame_Source_TanksMiniGame_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKSMINIGAME_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TanksMiniGame_Source_TanksMiniGame_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
