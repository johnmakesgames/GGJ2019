// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/GGJ2019GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGJ2019GameModeBase() {}
// Cross Module References
	GGJ2019_API UClass* Z_Construct_UClass_AGGJ2019GameModeBase_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_AGGJ2019GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
// End Cross Module References
	void AGGJ2019GameModeBase::StaticRegisterNativesAGGJ2019GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGGJ2019GameModeBase_NoRegister()
	{
		return AGGJ2019GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGGJ2019GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGGJ2019GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGJ2019GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GGJ2019GameModeBase.h" },
		{ "ModuleRelativePath", "GGJ2019GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGGJ2019GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGJ2019GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGGJ2019GameModeBase_Statics::ClassParams = {
		&AGGJ2019GameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGGJ2019GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGGJ2019GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGGJ2019GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGGJ2019GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGGJ2019GameModeBase, 4071940624);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGGJ2019GameModeBase(Z_Construct_UClass_AGGJ2019GameModeBase, &AGGJ2019GameModeBase::StaticClass, TEXT("/Script/GGJ2019"), TEXT("AGGJ2019GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGGJ2019GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
