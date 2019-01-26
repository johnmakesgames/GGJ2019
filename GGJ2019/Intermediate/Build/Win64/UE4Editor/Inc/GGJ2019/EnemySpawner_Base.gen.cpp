// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/EnemySpawner_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawner_Base() {}
// Cross Module References
	GGJ2019_API UClass* Z_Construct_UClass_AEnemySpawner_Base_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_AEnemySpawner_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
	GGJ2019_API UFunction* Z_Construct_UFunction_AEnemySpawner_Base_SpawnDimples();
// End Cross Module References
	static FName NAME_AEnemySpawner_Base_SpawnDimples = FName(TEXT("SpawnDimples"));
	void AEnemySpawner_Base::SpawnDimples()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemySpawner_Base_SpawnDimples),NULL);
	}
	void AEnemySpawner_Base::StaticRegisterNativesAEnemySpawner_Base()
	{
	}
	struct Z_Construct_UFunction_AEnemySpawner_Base_SpawnDimples_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemySpawner_Base_SpawnDimples_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "EnemySpawner_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawner_Base_SpawnDimples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemySpawner_Base, "SpawnDimples", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemySpawner_Base_SpawnDimples_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_Base_SpawnDimples_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemySpawner_Base_SpawnDimples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemySpawner_Base_SpawnDimples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemySpawner_Base_NoRegister()
	{
		return AEnemySpawner_Base::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawner_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawner_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2019,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemySpawner_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemySpawner_Base_SpawnDimples, "SpawnDimples" }, // 1577994844
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawner_Base.h" },
		{ "ModuleRelativePath", "EnemySpawner_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawner_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawner_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawner_Base_Statics::ClassParams = {
		&AEnemySpawner_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AEnemySpawner_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemySpawner_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemySpawner_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemySpawner_Base, 2318565527);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemySpawner_Base(Z_Construct_UClass_AEnemySpawner_Base, &AEnemySpawner_Base::StaticClass, TEXT("/Script/GGJ2019"), TEXT("AEnemySpawner_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawner_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
