// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/Public/Pickup_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup_Base() {}
// Cross Module References
	GGJ2019_API UClass* Z_Construct_UClass_APickup_Base_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_APickup_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void APickup_Base::StaticRegisterNativesAPickup_Base()
	{
	}
	UClass* Z_Construct_UClass_APickup_Base_NoRegister()
	{
		return APickup_Base::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupActive_MetaData[];
#endif
		static void NewProp_pickupActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pickupActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_baseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickupCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup_Base.h" },
		{ "ModuleRelativePath", "Public/Pickup_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupActive_MetaData[] = {
		{ "Category", "Pickup_Base" },
		{ "ModuleRelativePath", "Public/Pickup_Base.h" },
	};
#endif
	void Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupActive_SetBit(void* Obj)
	{
		((APickup_Base*)Obj)->pickupActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupActive = { UE4CodeGen_Private::EPropertyClass::Bool, "pickupActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APickup_Base), &Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Base_Statics::NewProp_baseMesh_MetaData[] = {
		{ "Category", "Pickup_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Base_Statics::NewProp_baseMesh = { UE4CodeGen_Private::EPropertyClass::Object, "baseMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APickup_Base, baseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Base_Statics::NewProp_baseMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Base_Statics::NewProp_baseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupCollider_MetaData[] = {
		{ "Category", "Pickup_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupCollider = { UE4CodeGen_Private::EPropertyClass::Object, "pickupCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APickup_Base, pickupCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Base_Statics::NewProp_baseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Base_Statics::NewProp_pickupCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickup_Base_Statics::ClassParams = {
		&APickup_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APickup_Base_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APickup_Base_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APickup_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickup_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickup_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup_Base, 218853404);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup_Base(Z_Construct_UClass_APickup_Base, &APickup_Base::StaticClass, TEXT("/Script/GGJ2019"), TEXT("APickup_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
