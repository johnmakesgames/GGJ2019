// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/Public/Pickup_Food.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup_Food() {}
// Cross Module References
	GGJ2019_API UClass* Z_Construct_UClass_APickup_Food_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_APickup_Food();
	GGJ2019_API UClass* Z_Construct_UClass_APickup_Base();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
	GGJ2019_API UFunction* Z_Construct_UFunction_APickup_Food_getFoodType();
	GGJ2019_API UEnum* Z_Construct_UEnum_GGJ2019_FoodTypes();
	GGJ2019_API UFunction* Z_Construct_UFunction_APickup_Food_setFoodTypes();
// End Cross Module References
	void APickup_Food::StaticRegisterNativesAPickup_Food()
	{
		UClass* Class = APickup_Food::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getFoodType", &APickup_Food::execgetFoodType },
			{ "setFoodTypes", &APickup_Food::execsetFoodTypes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickup_Food_getFoodType_Statics
	{
		struct Pickup_Food_eventgetFoodType_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APickup_Food_getFoodType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pickup_Food_eventgetFoodType_Parms, ReturnValue), Z_Construct_UEnum_GGJ2019_FoodTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_Food_getFoodType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_Food_getFoodType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_Food_getFoodType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pickup_Food.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_Food_getFoodType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup_Food, "getFoodType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(Pickup_Food_eventgetFoodType_Parms), Z_Construct_UFunction_APickup_Food_getFoodType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickup_Food_getFoodType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_Food_getFoodType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_Food_getFoodType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_Food_getFoodType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_Food_getFoodType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_Food_setFoodTypes_Statics
	{
		struct Pickup_Food_eventsetFoodTypes_Parms
		{
			TEnumAsByte<FoodTypes> food;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_food;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APickup_Food_setFoodTypes_Statics::NewProp_food = { UE4CodeGen_Private::EPropertyClass::Byte, "food", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pickup_Food_eventsetFoodTypes_Parms, food), Z_Construct_UEnum_GGJ2019_FoodTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_Food_setFoodTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_Food_setFoodTypes_Statics::NewProp_food,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_Food_setFoodTypes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pickup_Food.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_Food_setFoodTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup_Food, "setFoodTypes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(Pickup_Food_eventsetFoodTypes_Parms), Z_Construct_UFunction_APickup_Food_setFoodTypes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickup_Food_setFoodTypes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_Food_setFoodTypes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_Food_setFoodTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_Food_setFoodTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_Food_setFoodTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickup_Food_NoRegister()
	{
		return APickup_Food::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Food_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Food_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2019,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickup_Food_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickup_Food_getFoodType, "getFoodType" }, // 1219200081
		{ &Z_Construct_UFunction_APickup_Food_setFoodTypes, "setFoodTypes" }, // 2642369778
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Food_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup_Food.h" },
		{ "ModuleRelativePath", "Public/Pickup_Food.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Food_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup_Food>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickup_Food_Statics::ClassParams = {
		&APickup_Food::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APickup_Food_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickup_Food_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup_Food()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickup_Food_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup_Food, 2273128767);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup_Food(Z_Construct_UClass_APickup_Food, &APickup_Food::StaticClass, TEXT("/Script/GGJ2019"), TEXT("APickup_Food"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup_Food);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
