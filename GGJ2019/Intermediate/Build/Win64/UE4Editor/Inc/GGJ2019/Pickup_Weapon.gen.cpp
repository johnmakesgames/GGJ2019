// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/Public/Pickup_Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup_Weapon() {}
// Cross Module References
	GGJ2019_API UClass* Z_Construct_UClass_APickup_Weapon_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_APickup_Weapon();
	GGJ2019_API UClass* Z_Construct_UClass_APickup_Base();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
	GGJ2019_API UFunction* Z_Construct_UFunction_APickup_Weapon_getWeaponType();
	GGJ2019_API UEnum* Z_Construct_UEnum_GGJ2019_WeaponType();
	GGJ2019_API UFunction* Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void APickup_Weapon::StaticRegisterNativesAPickup_Weapon()
	{
		UClass* Class = APickup_Weapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getWeaponType", &APickup_Weapon::execgetWeaponType },
			{ "OnWeaponBeginOverlap", &APickup_Weapon::execOnWeaponBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickup_Weapon_getWeaponType_Statics
	{
		struct Pickup_Weapon_eventgetWeaponType_Parms
		{
			TEnumAsByte<WeaponType> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APickup_Weapon_getWeaponType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pickup_Weapon_eventgetWeaponType_Parms, ReturnValue), Z_Construct_UEnum_GGJ2019_WeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_Weapon_getWeaponType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_Weapon_getWeaponType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_Weapon_getWeaponType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pickup_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_Weapon_getWeaponType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup_Weapon, "getWeaponType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Pickup_Weapon_eventgetWeaponType_Parms), Z_Construct_UFunction_APickup_Weapon_getWeaponType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickup_Weapon_getWeaponType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_Weapon_getWeaponType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_Weapon_getWeaponType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_Weapon_getWeaponType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_Weapon_getWeaponType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics
	{
		struct Pickup_Weapon_eventOnWeaponBeginOverlap_Parms
		{
			TArray<AActor*> actor;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::NewProp_actor = { UE4CodeGen_Private::EPropertyClass::Array, "actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pickup_Weapon_eventOnWeaponBeginOverlap_Parms, actor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::NewProp_actor_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::NewProp_actor_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pickup_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup_Weapon, "OnWeaponBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Pickup_Weapon_eventOnWeaponBeginOverlap_Parms), Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickup_Weapon_NoRegister()
	{
		return APickup_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageActive_MetaData[];
#endif
		static void NewProp_damageActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_damageActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2019,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickup_Weapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickup_Weapon_getWeaponType, "getWeaponType" }, // 1335278084
		{ &Z_Construct_UFunction_APickup_Weapon_OnWeaponBeginOverlap, "OnWeaponBeginOverlap" }, // 1861550002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup_Weapon.h" },
		{ "ModuleRelativePath", "Public/Pickup_Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Pickup_Weapon" },
		{ "ModuleRelativePath", "Public/Pickup_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damage = { UE4CodeGen_Private::EPropertyClass::Float, "damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APickup_Weapon, damage), METADATA_PARAMS(Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageActive_MetaData[] = {
		{ "Category", "Pickup_Weapon" },
		{ "ModuleRelativePath", "Public/Pickup_Weapon.h" },
	};
#endif
	void Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageActive_SetBit(void* Obj)
	{
		((APickup_Weapon*)Obj)->damageActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageActive = { UE4CodeGen_Private::EPropertyClass::Bool, "damageActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APickup_Weapon), &Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageCollider_MetaData[] = {
		{ "Category", "Pickup_Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageCollider = { UE4CodeGen_Private::EPropertyClass::Object, "damageCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APickup_Weapon, damageCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Weapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Weapon_Statics::NewProp_damageCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup_Weapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickup_Weapon_Statics::ClassParams = {
		&APickup_Weapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APickup_Weapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APickup_Weapon_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APickup_Weapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickup_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup_Weapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickup_Weapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup_Weapon, 1177339645);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup_Weapon(Z_Construct_UClass_APickup_Weapon, &APickup_Weapon::StaticClass, TEXT("/Script/GGJ2019"), TEXT("APickup_Weapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup_Weapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
