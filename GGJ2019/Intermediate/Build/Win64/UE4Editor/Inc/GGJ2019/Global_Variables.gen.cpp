// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/Public/Global_Variables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobal_Variables() {}
// Cross Module References
	GGJ2019_API UEnum* Z_Construct_UEnum_GGJ2019_WeaponType();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
	GGJ2019_API UEnum* Z_Construct_UEnum_GGJ2019_FoodTypes();
// End Cross Module References
	static UEnum* WeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GGJ2019_WeaponType, Z_Construct_UPackage__Script_GGJ2019(), TEXT("WeaponType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_WeaponType(WeaponType_StaticEnum, TEXT("/Script/GGJ2019"), TEXT("WeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GGJ2019_WeaponType_CRC() { return 2022230495U; }
	UEnum* Z_Construct_UEnum_GGJ2019_WeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GGJ2019();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("WeaponType"), 0, Get_Z_Construct_UEnum_GGJ2019_WeaponType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NoneW", (int64)NoneW },
				{ "MeatCleaver", (int64)MeatCleaver },
				{ "FryingPan", (int64)FryingPan },
				{ "RollingPin", (int64)RollingPin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Global_Variables.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GGJ2019,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"WeaponType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"WeaponType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* FoodTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GGJ2019_FoodTypes, Z_Construct_UPackage__Script_GGJ2019(), TEXT("FoodTypes"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FoodTypes(FoodTypes_StaticEnum, TEXT("/Script/GGJ2019"), TEXT("FoodTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GGJ2019_FoodTypes_CRC() { return 2835295484U; }
	UEnum* Z_Construct_UEnum_GGJ2019_FoodTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GGJ2019();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FoodTypes"), 0, Get_Z_Construct_UEnum_GGJ2019_FoodTypes_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "Chicken", (int64)Chicken },
				{ "Pizza", (int64)Pizza },
				{ "Cheese", (int64)Cheese },
				{ "Ham", (int64)Ham },
				{ "Tomatos", (int64)Tomatos },
				{ "Sandwich", (int64)Sandwich },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Global_Variables.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GGJ2019,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"FoodTypes",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"FoodTypes",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
