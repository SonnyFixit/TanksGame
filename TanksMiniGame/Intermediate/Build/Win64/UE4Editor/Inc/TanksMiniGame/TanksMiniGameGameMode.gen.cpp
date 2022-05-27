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
	TANKSMINIGAME_API UFunction* Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver();
	TANKSMINIGAME_API UFunction* Z_Construct_UFunction_ATanksMiniGameGameMode_StartGame();
// End Cross Module References
	static FName NAME_ATanksMiniGameGameMode_GameOver = FName(TEXT("GameOver"));
	void ATanksMiniGameGameMode::GameOver(bool bWonGame)
	{
		TanksMiniGameGameMode_eventGameOver_Parms Parms;
		Parms.bWonGame=bWonGame ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATanksMiniGameGameMode_GameOver),&Parms);
	}
	static FName NAME_ATanksMiniGameGameMode_StartGame = FName(TEXT("StartGame"));
	void ATanksMiniGameGameMode::StartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATanksMiniGameGameMode_StartGame),NULL);
	}
	void ATanksMiniGameGameMode::StaticRegisterNativesATanksMiniGameGameMode()
	{
	}
	struct Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics
	{
		static void NewProp_bWonGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWonGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::NewProp_bWonGame_SetBit(void* Obj)
	{
		((TanksMiniGameGameMode_eventGameOver_Parms*)Obj)->bWonGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::NewProp_bWonGame = { "bWonGame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TanksMiniGameGameMode_eventGameOver_Parms), &Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::NewProp_bWonGame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::NewProp_bWonGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TanksMiniGameGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATanksMiniGameGameMode, nullptr, "GameOver", sizeof(TanksMiniGameGameMode_eventGameOver_Parms), Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATanksMiniGameGameMode_StartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATanksMiniGameGameMode_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TanksMiniGameGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATanksMiniGameGameMode_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATanksMiniGameGameMode, nullptr, "StartGame", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATanksMiniGameGameMode_StartGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATanksMiniGameGameMode_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATanksMiniGameGameMode_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATanksMiniGameGameMode_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATanksMiniGameGameMode_NoRegister()
	{
		return ATanksMiniGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATanksMiniGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ATanksMiniGameGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATanksMiniGameGameMode_GameOver, "GameOver" }, // 2816589506
		{ &Z_Construct_UFunction_ATanksMiniGameGameMode_StartGame, "StartGame" }, // 987121820
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
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ATanksMiniGameGameMode, 411624163);
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
