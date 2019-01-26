// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/MyNavigationNode_Exit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNavigationNode_Exit() {}
// Cross Module References
	GGJ2019_API UClass* Z_Construct_UClass_AMyNavigationNode_Exit_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_AMyNavigationNode_Exit();
	GGJ2019_API UClass* Z_Construct_UClass_ANavigationNode_Base();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
// End Cross Module References
	void AMyNavigationNode_Exit::StaticRegisterNativesAMyNavigationNode_Exit()
	{
	}
	UClass* Z_Construct_UClass_AMyNavigationNode_Exit_NoRegister()
	{
		return AMyNavigationNode_Exit::StaticClass();
	}
	struct Z_Construct_UClass_AMyNavigationNode_Exit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyNavigationNode_Exit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavigationNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNavigationNode_Exit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyNavigationNode_Exit.h" },
		{ "ModuleRelativePath", "MyNavigationNode_Exit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNavigationNode_Exit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNavigationNode_Exit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNavigationNode_Exit_Statics::ClassParams = {
		&AMyNavigationNode_Exit::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyNavigationNode_Exit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyNavigationNode_Exit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyNavigationNode_Exit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyNavigationNode_Exit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNavigationNode_Exit, 2692461087);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNavigationNode_Exit(Z_Construct_UClass_AMyNavigationNode_Exit, &AMyNavigationNode_Exit::StaticClass, TEXT("/Script/GGJ2019"), TEXT("AMyNavigationNode_Exit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNavigationNode_Exit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
