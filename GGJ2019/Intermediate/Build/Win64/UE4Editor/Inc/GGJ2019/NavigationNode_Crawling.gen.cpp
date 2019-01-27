// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/Public/NavigationNode_Crawling.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationNode_Crawling() {}
// Cross Module References
	GGJ2019_API UClass* Z_Construct_UClass_ANavigationNode_Crawling_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_ANavigationNode_Crawling();
	GGJ2019_API UClass* Z_Construct_UClass_ANavigationNode_Base();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
// End Cross Module References
	void ANavigationNode_Crawling::StaticRegisterNativesANavigationNode_Crawling()
	{
	}
	UClass* Z_Construct_UClass_ANavigationNode_Crawling_NoRegister()
	{
		return ANavigationNode_Crawling::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationNode_Crawling_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationNode_Crawling_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavigationNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationNode_Crawling_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationNode_Crawling.h" },
		{ "ModuleRelativePath", "Public/NavigationNode_Crawling.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationNode_Crawling_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationNode_Crawling>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavigationNode_Crawling_Statics::ClassParams = {
		&ANavigationNode_Crawling::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ANavigationNode_Crawling_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANavigationNode_Crawling_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationNode_Crawling()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavigationNode_Crawling_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavigationNode_Crawling, 1955544981);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavigationNode_Crawling(Z_Construct_UClass_ANavigationNode_Crawling, &ANavigationNode_Crawling::StaticClass, TEXT("/Script/GGJ2019"), TEXT("ANavigationNode_Crawling"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationNode_Crawling);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
