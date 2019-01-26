// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/Player_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Base() {}
// Cross Module References
	GGJ2019_API UClass* Z_Construct_UClass_APlayer_Base_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_APlayer_Base();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
	GGJ2019_API UFunction* Z_Construct_UFunction_APlayer_Base_dropCurrentItem();
	GGJ2019_API UFunction* Z_Construct_UFunction_APlayer_Base_getFoodType();
	GGJ2019_API UEnum* Z_Construct_UEnum_GGJ2019_FoodTypes();
	GGJ2019_API UFunction* Z_Construct_UFunction_APlayer_Base_pickUpFood();
	GGJ2019_API UClass* Z_Construct_UClass_APickup_Food_NoRegister();
	GGJ2019_API UFunction* Z_Construct_UFunction_APlayer_Base_pickUpWeapon();
	GGJ2019_API UClass* Z_Construct_UClass_APickup_Weapon_NoRegister();
	GGJ2019_API UFunction* Z_Construct_UFunction_APlayer_Base_putFoodInFridge();
	GGJ2019_API UClass* Z_Construct_UClass_AFridge_Base_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_APickup_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void APlayer_Base::StaticRegisterNativesAPlayer_Base()
	{
		UClass* Class = APlayer_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "dropCurrentItem", &APlayer_Base::execdropCurrentItem },
			{ "getFoodType", &APlayer_Base::execgetFoodType },
			{ "pickUpFood", &APlayer_Base::execpickUpFood },
			{ "pickUpWeapon", &APlayer_Base::execpickUpWeapon },
			{ "putFoodInFridge", &APlayer_Base::execputFoodInFridge },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayer_Base_dropCurrentItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Base_dropCurrentItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Base_dropCurrentItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Base, "dropCurrentItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Base_dropCurrentItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_dropCurrentItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Base_dropCurrentItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Base_dropCurrentItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Base_getFoodType_Statics
	{
		struct Player_Base_eventgetFoodType_Parms
		{
			TEnumAsByte<FoodTypes> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayer_Base_getFoodType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Player_Base_eventgetFoodType_Parms, ReturnValue), Z_Construct_UEnum_GGJ2019_FoodTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Base_getFoodType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Base_getFoodType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Base_getFoodType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Base_getFoodType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Base, "getFoodType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Player_Base_eventgetFoodType_Parms), Z_Construct_UFunction_APlayer_Base_getFoodType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_getFoodType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Base_getFoodType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_getFoodType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Base_getFoodType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Base_getFoodType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics
	{
		struct Player_Base_eventpickUpFood_Parms
		{
			TEnumAsByte<FoodTypes> food;
			APickup_Food* foodRef;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_foodRef;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_food;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::NewProp_foodRef = { UE4CodeGen_Private::EPropertyClass::Object, "foodRef", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Player_Base_eventpickUpFood_Parms, foodRef), Z_Construct_UClass_APickup_Food_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::NewProp_food = { UE4CodeGen_Private::EPropertyClass::Byte, "food", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Player_Base_eventpickUpFood_Parms, food), Z_Construct_UEnum_GGJ2019_FoodTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::NewProp_foodRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::NewProp_food,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Base, "pickUpFood", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Player_Base_eventpickUpFood_Parms), Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Base_pickUpFood()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Base_pickUpFood_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Base_pickUpWeapon_Statics
	{
		struct Player_Base_eventpickUpWeapon_Parms
		{
			APickup_Weapon* weaponRef;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weaponRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_Base_pickUpWeapon_Statics::NewProp_weaponRef = { UE4CodeGen_Private::EPropertyClass::Object, "weaponRef", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Player_Base_eventpickUpWeapon_Parms, weaponRef), Z_Construct_UClass_APickup_Weapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Base_pickUpWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Base_pickUpWeapon_Statics::NewProp_weaponRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Base_pickUpWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Base_pickUpWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Base, "pickUpWeapon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Player_Base_eventpickUpWeapon_Parms), Z_Construct_UFunction_APlayer_Base_pickUpWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_pickUpWeapon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Base_pickUpWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_pickUpWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Base_pickUpWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Base_pickUpWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics
	{
		struct Player_Base_eventputFoodInFridge_Parms
		{
			AFridge_Base* fridge;
			TEnumAsByte<FoodTypes> food;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_food;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fridge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::NewProp_food = { UE4CodeGen_Private::EPropertyClass::Byte, "food", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Player_Base_eventputFoodInFridge_Parms, food), Z_Construct_UEnum_GGJ2019_FoodTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::NewProp_fridge = { UE4CodeGen_Private::EPropertyClass::Object, "fridge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Player_Base_eventputFoodInFridge_Parms, fridge), Z_Construct_UClass_AFridge_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::NewProp_food,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::NewProp_fridge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Base, "putFoodInFridge", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Player_Base_eventputFoodInFridge_Parms), Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Base_putFoodInFridge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Base_putFoodInFridge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayer_Base_NoRegister()
	{
		return APlayer_Base::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_holdingFood_MetaData[];
#endif
		static void NewProp_holdingFood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_holdingFood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentItemHeld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentItemHeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerBaseComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerBaseComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_movementVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2019,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayer_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayer_Base_dropCurrentItem, "dropCurrentItem" }, // 4160507656
		{ &Z_Construct_UFunction_APlayer_Base_getFoodType, "getFoodType" }, // 2171921492
		{ &Z_Construct_UFunction_APlayer_Base_pickUpFood, "pickUpFood" }, // 4116875563
		{ &Z_Construct_UFunction_APlayer_Base_pickUpWeapon, "pickUpWeapon" }, // 437977323
		{ &Z_Construct_UFunction_APlayer_Base_putFoodInFridge, "putFoodInFridge" }, // 1102333734
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_Base.h" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_holdingFood_MetaData[] = {
		{ "Category", "Player_Base" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	void Z_Construct_UClass_APlayer_Base_Statics::NewProp_holdingFood_SetBit(void* Obj)
	{
		((APlayer_Base*)Obj)->holdingFood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_holdingFood = { UE4CodeGen_Private::EPropertyClass::Bool, "holdingFood", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayer_Base), &Z_Construct_UClass_APlayer_Base_Statics::NewProp_holdingFood_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_holdingFood_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_holdingFood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_currentItemHeld_MetaData[] = {
		{ "Category", "Player_Base" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_currentItemHeld = { UE4CodeGen_Private::EPropertyClass::Object, "currentItemHeld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(APlayer_Base, currentItemHeld), Z_Construct_UClass_APickup_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_currentItemHeld_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_currentItemHeld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerCamera_MetaData[] = {
		{ "Category", "Player_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player_Base.h" },
		{ "ToolTip", "CAMERA" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerCamera = { UE4CodeGen_Private::EPropertyClass::Object, "playerCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APlayer_Base, playerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Player_Base.h" },
		{ "ToolTip", "Stats" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_maxHealth = { UE4CodeGen_Private::EPropertyClass::Int, "maxHealth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, maxHealth), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_maxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerBaseComponent_MetaData[] = {
		{ "Category", "Player_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player_Base.h" },
		{ "ToolTip", "Player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerBaseComponent = { UE4CodeGen_Private::EPropertyClass::Object, "playerBaseComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APlayer_Base, playerBaseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerBaseComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerBaseComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "movementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, movementSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementVelocity_MetaData[] = {
		{ "Category", "Player_Base" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "movementVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, movementVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_holdingFood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_currentItemHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_maxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerBaseComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Base_Statics::ClassParams = {
		&APlayer_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APlayer_Base_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Base, 560601461);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Base(Z_Construct_UClass_APlayer_Base, &APlayer_Base::StaticClass, TEXT("/Script/GGJ2019"), TEXT("APlayer_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
