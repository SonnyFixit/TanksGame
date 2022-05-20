// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TanksMiniGame/MiniTanksPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniTanksPlayerController() {}
// Cross Module References
	TANKSMINIGAME_API UClass* Z_Construct_UClass_AMiniTanksPlayerController_NoRegister();
	TANKSMINIGAME_API UClass* Z_Construct_UClass_AMiniTanksPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TanksMiniGame();
// End Cross Module References
	void AMiniTanksPlayerController::StaticRegisterNativesAMiniTanksPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMiniTanksPlayerController_NoRegister()
	{
		return AMiniTanksPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMiniTanksPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMiniTanksPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TanksMiniGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniTanksPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MiniTanksPlayerController.h" },
		{ "ModuleRelativePath", "MiniTanksPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMiniTanksPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiniTanksPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMiniTanksPlayerController_Statics::ClassParams = {
		&AMiniTanksPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMiniTanksPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMiniTanksPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMiniTanksPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMiniTanksPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMiniTanksPlayerController, 4254722246);
	template<> TANKSMINIGAME_API UClass* StaticClass<AMiniTanksPlayerController>()
	{
		return AMiniTanksPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMiniTanksPlayerController(Z_Construct_UClass_AMiniTanksPlayerController, &AMiniTanksPlayerController::StaticClass, TEXT("/Script/TanksMiniGame"), TEXT("AMiniTanksPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiniTanksPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
