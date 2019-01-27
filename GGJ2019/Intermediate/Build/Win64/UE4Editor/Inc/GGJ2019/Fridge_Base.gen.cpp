// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/Public/Fridge_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFridge_Base() {}
// Cross Module References
	GGJ2019_API UClass* Z_Construct_UClass_AFridge_Base_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_AFridge_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFridge_Base::StaticRegisterNativesAFridge_Base()
	{
	}
	UClass* Z_Construct_UClass_AFridge_Base_NoRegister()
	{
		return AFridge_Base::StaticClass();
	}
	struct Z_Construct_UClass_AFridge_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fridgeCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fridgeCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fridgeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fridgeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_opened_MetaData[];
#endif
		static void NewProp_opened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_opened;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFridge_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFridge_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fridge_Base.h" },
		{ "ModuleRelativePath", "Public/Fridge_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFridge_Base_Statics::NewProp_fridgeCollider_MetaData[] = {
		{ "Category", "Fridge_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fridge_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFridge_Base_Statics::NewProp_fridgeCollider = { UE4CodeGen_Private::EPropertyClass::Object, "fridgeCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AFridge_Base, fridgeCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFridge_Base_Statics::NewProp_fridgeCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFridge_Base_Statics::NewProp_fridgeCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFridge_Base_Statics::NewProp_fridgeMesh_MetaData[] = {
		{ "Category", "Fridge_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fridge_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFridge_Base_Statics::NewProp_fridgeMesh = { UE4CodeGen_Private::EPropertyClass::Object, "fridgeMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AFridge_Base, fridgeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFridge_Base_Statics::NewProp_fridgeMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFridge_Base_Statics::NewProp_fridgeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFridge_Base_Statics::NewProp_opened_MetaData[] = {
		{ "Category", "Fridge_Base" },
		{ "ModuleRelativePath", "Public/Fridge_Base.h" },
	};
#endif
	void Z_Construct_UClass_AFridge_Base_Statics::NewProp_opened_SetBit(void* Obj)
	{
		((AFridge_Base*)Obj)->opened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFridge_Base_Statics::NewProp_opened = { UE4CodeGen_Private::EPropertyClass::Bool, "opened", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFridge_Base), &Z_Construct_UClass_AFridge_Base_Statics::NewProp_opened_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFridge_Base_Statics::NewProp_opened_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFridge_Base_Statics::NewProp_opened_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFridge_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFridge_Base_Statics::NewProp_fridgeCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFridge_Base_Statics::NewProp_fridgeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFridge_Base_Statics::NewProp_opened,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFridge_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFridge_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFridge_Base_Statics::ClassParams = {
		&AFridge_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFridge_Base_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFridge_Base_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFridge_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFridge_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFridge_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFridge_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFridge_Base, 3543776343);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFridge_Base(Z_Construct_UClass_AFridge_Base, &AFridge_Base::StaticClass, TEXT("/Script/GGJ2019"), TEXT("AFridge_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFridge_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
