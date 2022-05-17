// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TanksMiniGame/TanksMiniGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTanksMiniGameGameMode() {}
// Cross Module References
	TANKSMINIGAME_API UClass* Z_Construct_UClass_ATanksMiniGameGameMode_NoRegister();
	TANKSMINIGAME_API UClass* Z_Construct_UClass_ATanksMiniGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TanksMiniGame();
// End Cross Module References
	void ATanksMiniGameGameMode::StaticRegisterNativesATanksMiniGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATanksMiniGameGameMode_NoRegister()
	{
		return ATanksMiniGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATanksMiniGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATanksMiniGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TanksMiniGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATanksMiniGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TanksMiniGameGameMode.h" },
		{ "ModuleRelativePath", "TanksMiniGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATanksMiniGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATanksMiniGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATanksMiniGameGameMode_Statics::ClassParams = {
		&ATanksMiniGameGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATanksMiniGameGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATanksMiniGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATanksMiniGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATanksMiniGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATanksMiniGameGameMode, 103469796);
	template<> TANKSMINIGAME_API UClass* StaticClass<ATanksMiniGameGameMode>()
	{
		return ATanksMiniGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATanksMiniGameGameMode(Z_Construct_UClass_ATanksMiniGameGameMode, &ATanksMiniGameGameMode::StaticClass, TEXT("/Script/TanksMiniGame"), TEXT("ATanksMiniGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATanksMiniGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
