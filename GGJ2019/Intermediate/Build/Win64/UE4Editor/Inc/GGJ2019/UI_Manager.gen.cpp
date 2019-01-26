// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/Public/UI_Manager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_Manager() {}
// Cross Module References
	GGJ2019_API UClass* Z_Construct_UClass_AUI_Manager_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_AUI_Manager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
	GGJ2019_API UFunction* Z_Construct_UFunction_AUI_Manager_GetEquippedWeapon();
	GGJ2019_API UFunction* Z_Construct_UFunction_AUI_Manager_GetFoodRemaining();
	GGJ2019_API UFunction* Z_Construct_UFunction_AUI_Manager_KillCount();
	GGJ2019_API UFunction* Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon();
	GGJ2019_API UFunction* Z_Construct_UFunction_AUI_Manager_ReturnFood();
	GGJ2019_API UFunction* Z_Construct_UFunction_AUI_Manager_ReturnKillCount();
	GGJ2019_API UFunction* Z_Construct_UFunction_AUI_Manager_SetFridgerRef();
	GGJ2019_API UClass* Z_Construct_UClass_AFridge_Base_NoRegister();
	GGJ2019_API UFunction* Z_Construct_UFunction_AUI_Manager_SetPlayerRef();
	GGJ2019_API UClass* Z_Construct_UClass_APlayer_Base_NoRegister();
// End Cross Module References
	void AUI_Manager::StaticRegisterNativesAUI_Manager()
	{
		UClass* Class = AUI_Manager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEquippedWeapon", &AUI_Manager::execGetEquippedWeapon },
			{ "GetFoodRemaining", &AUI_Manager::execGetFoodRemaining },
			{ "KillCount", &AUI_Manager::execKillCount },
			{ "ReturnEquippedWeapon", &AUI_Manager::execReturnEquippedWeapon },
			{ "ReturnFood", &AUI_Manager::execReturnFood },
			{ "ReturnKillCount", &AUI_Manager::execReturnKillCount },
			{ "SetFridgerRef", &AUI_Manager::execSetFridgerRef },
			{ "SetPlayerRef", &AUI_Manager::execSetPlayerRef },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUI_Manager_GetEquippedWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Manager_GetEquippedWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/UI_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Manager_GetEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Manager, "GetEquippedWeapon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Manager_GetEquippedWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_GetEquippedWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Manager_GetEquippedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Manager_GetEquippedWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUI_Manager_GetFoodRemaining_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Manager_GetFoodRemaining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fridge" },
		{ "ModuleRelativePath", "Public/UI_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Manager_GetFoodRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Manager, "GetFoodRemaining", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Manager_GetFoodRemaining_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_GetFoodRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Manager_GetFoodRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Manager_GetFoodRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUI_Manager_KillCount_Statics
	{
		struct UI_Manager_eventKillCount_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUI_Manager_KillCount_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UI_Manager_eventKillCount_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUI_Manager_KillCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUI_Manager_KillCount_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Manager_KillCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/UI_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Manager_KillCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Manager, "KillCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UI_Manager_eventKillCount_Parms), Z_Construct_UFunction_AUI_Manager_KillCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_KillCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Manager_KillCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_KillCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Manager_KillCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Manager_KillCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon_Statics
	{
		struct UI_Manager_eventReturnEquippedWeapon_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UI_Manager_eventReturnEquippedWeapon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/UI_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Manager, "ReturnEquippedWeapon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UI_Manager_eventReturnEquippedWeapon_Parms), Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUI_Manager_ReturnFood_Statics
	{
		struct UI_Manager_eventReturnFood_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUI_Manager_ReturnFood_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UI_Manager_eventReturnFood_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUI_Manager_ReturnFood_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUI_Manager_ReturnFood_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Manager_ReturnFood_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fridge" },
		{ "ModuleRelativePath", "Public/UI_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Manager_ReturnFood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Manager, "ReturnFood", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UI_Manager_eventReturnFood_Parms), Z_Construct_UFunction_AUI_Manager_ReturnFood_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_ReturnFood_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Manager_ReturnFood_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_ReturnFood_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Manager_ReturnFood()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Manager_ReturnFood_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUI_Manager_ReturnKillCount_Statics
	{
		struct UI_Manager_eventReturnKillCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUI_Manager_ReturnKillCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UI_Manager_eventReturnKillCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUI_Manager_ReturnKillCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUI_Manager_ReturnKillCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Manager_ReturnKillCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/UI_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Manager_ReturnKillCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Manager, "ReturnKillCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UI_Manager_eventReturnKillCount_Parms), Z_Construct_UFunction_AUI_Manager_ReturnKillCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_ReturnKillCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Manager_ReturnKillCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_ReturnKillCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Manager_ReturnKillCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Manager_ReturnKillCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUI_Manager_SetFridgerRef_Statics
	{
		struct UI_Manager_eventSetFridgerRef_Parms
		{
			AFridge_Base* pfridge;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pfridge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUI_Manager_SetFridgerRef_Statics::NewProp_pfridge = { UE4CodeGen_Private::EPropertyClass::Object, "pfridge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UI_Manager_eventSetFridgerRef_Parms, pfridge), Z_Construct_UClass_AFridge_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUI_Manager_SetFridgerRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUI_Manager_SetFridgerRef_Statics::NewProp_pfridge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Manager_SetFridgerRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Manager_SetFridgerRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Manager, "SetFridgerRef", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UI_Manager_eventSetFridgerRef_Parms), Z_Construct_UFunction_AUI_Manager_SetFridgerRef_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_SetFridgerRef_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Manager_SetFridgerRef_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_SetFridgerRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Manager_SetFridgerRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Manager_SetFridgerRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUI_Manager_SetPlayerRef_Statics
	{
		struct UI_Manager_eventSetPlayerRef_Parms
		{
			APlayer_Base* pPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUI_Manager_SetPlayerRef_Statics::NewProp_pPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "pPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UI_Manager_eventSetPlayerRef_Parms, pPlayer), Z_Construct_UClass_APlayer_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUI_Manager_SetPlayerRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUI_Manager_SetPlayerRef_Statics::NewProp_pPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Manager_SetPlayerRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Manager_SetPlayerRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Manager, "SetPlayerRef", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UI_Manager_eventSetPlayerRef_Parms), Z_Construct_UFunction_AUI_Manager_SetPlayerRef_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_SetPlayerRef_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Manager_SetPlayerRef_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Manager_SetPlayerRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Manager_SetPlayerRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Manager_SetPlayerRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUI_Manager_NoRegister()
	{
		return AUI_Manager::StaticClass();
	}
	struct Z_Construct_UClass_AUI_Manager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fridge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fridge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUI_Manager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2019,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUI_Manager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUI_Manager_GetEquippedWeapon, "GetEquippedWeapon" }, // 1799840032
		{ &Z_Construct_UFunction_AUI_Manager_GetFoodRemaining, "GetFoodRemaining" }, // 2698455894
		{ &Z_Construct_UFunction_AUI_Manager_KillCount, "KillCount" }, // 734570187
		{ &Z_Construct_UFunction_AUI_Manager_ReturnEquippedWeapon, "ReturnEquippedWeapon" }, // 1184653595
		{ &Z_Construct_UFunction_AUI_Manager_ReturnFood, "ReturnFood" }, // 186316777
		{ &Z_Construct_UFunction_AUI_Manager_ReturnKillCount, "ReturnKillCount" }, // 3411635752
		{ &Z_Construct_UFunction_AUI_Manager_SetFridgerRef, "SetFridgerRef" }, // 4103767300
		{ &Z_Construct_UFunction_AUI_Manager_SetPlayerRef, "SetPlayerRef" }, // 2160103311
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_Manager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI_Manager.h" },
		{ "ModuleRelativePath", "Public/UI_Manager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_Manager_Statics::NewProp_fridge_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUI_Manager_Statics::NewProp_fridge = { UE4CodeGen_Private::EPropertyClass::Object, "fridge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020005, 1, nullptr, STRUCT_OFFSET(AUI_Manager, fridge), Z_Construct_UClass_AFridge_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUI_Manager_Statics::NewProp_fridge_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUI_Manager_Statics::NewProp_fridge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_Manager_Statics::NewProp_player_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUI_Manager_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020005, 1, nullptr, STRUCT_OFFSET(AUI_Manager, player), Z_Construct_UClass_APlayer_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUI_Manager_Statics::NewProp_player_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUI_Manager_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUI_Manager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUI_Manager_Statics::NewProp_fridge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUI_Manager_Statics::NewProp_player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUI_Manager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUI_Manager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUI_Manager_Statics::ClassParams = {
		&AUI_Manager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AUI_Manager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AUI_Manager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUI_Manager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUI_Manager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUI_Manager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUI_Manager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUI_Manager, 3162982026);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUI_Manager(Z_Construct_UClass_AUI_Manager, &AUI_Manager::StaticClass, TEXT("/Script/GGJ2019"), TEXT("AUI_Manager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUI_Manager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
