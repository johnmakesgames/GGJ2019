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
// End Cross Module References
	void APickup_Food::StaticRegisterNativesAPickup_Food()
	{
	}
	UClass* Z_Construct_UClass_APickup_Food_NoRegister()
	{
		return APickup_Food::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Food_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr, 0,
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
	IMPLEMENT_CLASS(APickup_Food, 463647615);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup_Food(Z_Construct_UClass_APickup_Food, &APickup_Food::StaticClass, TEXT("/Script/GGJ2019"), TEXT("APickup_Food"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup_Food);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
