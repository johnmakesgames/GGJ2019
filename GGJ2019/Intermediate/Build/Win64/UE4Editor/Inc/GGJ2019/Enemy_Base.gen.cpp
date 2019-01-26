// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2019/Enemy_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Base() {}
// Cross Module References
	GGJ2019_API UClass* Z_Construct_UClass_AEnemy_Base_NoRegister();
	GGJ2019_API UClass* Z_Construct_UClass_AEnemy_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ2019();
	GGJ2019_API UFunction* Z_Construct_UFunction_AEnemy_Base_FindExitNodes();
	GGJ2019_API UFunction* Z_Construct_UFunction_AEnemy_Base_FindNodes();
	GGJ2019_API UFunction* Z_Construct_UFunction_AEnemy_Base_GetFridge();
	GGJ2019_API UFunction* Z_Construct_UFunction_AEnemy_Base_GetHasFood();
	GGJ2019_API UFunction* Z_Construct_UFunction_AEnemy_Base_PathUsingNodes();
	GGJ2019_API UClass* Z_Construct_UClass_ANavigationNode_Base_NoRegister();
	GGJ2019_API UFunction* Z_Construct_UFunction_AEnemy_Base_RotateFromTheta();
	GGJ2019_API UFunction* Z_Construct_UFunction_AEnemy_Base_SetExitPositions();
	GGJ2019_API UClass* Z_Construct_UClass_AMyNavigationNode_Exit_NoRegister();
	GGJ2019_API UFunction* Z_Construct_UFunction_AEnemy_Base_TakeFood();
	GGJ2019_API UClass* Z_Construct_UClass_AFridge_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_AEnemy_Base_FindExitNodes = FName(TEXT("FindExitNodes"));
	void AEnemy_Base::FindExitNodes()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Base_FindExitNodes),NULL);
	}
	static FName NAME_AEnemy_Base_FindNodes = FName(TEXT("FindNodes"));
	void AEnemy_Base::FindNodes()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Base_FindNodes),NULL);
	}
	static FName NAME_AEnemy_Base_GetFridge = FName(TEXT("GetFridge"));
	void AEnemy_Base::GetFridge()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Base_GetFridge),NULL);
	}
	static FName NAME_AEnemy_Base_RotateFromTheta = FName(TEXT("RotateFromTheta"));
	void AEnemy_Base::RotateFromTheta(float theta)
	{
		Enemy_Base_eventRotateFromTheta_Parms Parms;
		Parms.theta=theta;
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Base_RotateFromTheta),&Parms);
	}
	void AEnemy_Base::StaticRegisterNativesAEnemy_Base()
	{
		UClass* Class = AEnemy_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasFood", &AEnemy_Base::execGetHasFood },
			{ "PathUsingNodes", &AEnemy_Base::execPathUsingNodes },
			{ "SetExitPositions", &AEnemy_Base::execSetExitPositions },
			{ "TakeFood", &AEnemy_Base::execTakeFood },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_Base_FindExitNodes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_FindExitNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_FindExitNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, "FindExitNodes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_FindExitNodes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_FindExitNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_FindExitNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_FindExitNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Base_FindNodes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_FindNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_FindNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, "FindNodes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_FindNodes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_FindNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_FindNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_FindNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Base_GetFridge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_GetFridge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Food Theft" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_GetFridge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, "GetFridge", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_GetFridge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_GetFridge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_GetFridge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_GetFridge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics
	{
		struct Enemy_Base_eventGetHasFood_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Enemy_Base_eventGetHasFood_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Enemy_Base_eventGetHasFood_Parms), &Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::Function_MetaDataParams[] = {
		{ "Category", "Food Theft" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, "GetHasFood", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(Enemy_Base_eventGetHasFood_Parms), Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_GetHasFood()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_GetHasFood_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics
	{
		struct Enemy_Base_eventPathUsingNodes_Parms
		{
			TArray<ANavigationNode_Base*> nodes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_nodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::NewProp_nodes = { UE4CodeGen_Private::EPropertyClass::Array, "nodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Enemy_Base_eventPathUsingNodes_Parms, nodes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::NewProp_nodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "nodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ANavigationNode_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::NewProp_nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::NewProp_nodes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, "PathUsingNodes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(Enemy_Base_eventPathUsingNodes_Parms), Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_PathUsingNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_PathUsingNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Base_RotateFromTheta_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_theta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemy_Base_RotateFromTheta_Statics::NewProp_theta = { UE4CodeGen_Private::EPropertyClass::Float, "theta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Enemy_Base_eventRotateFromTheta_Parms, theta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_Base_RotateFromTheta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Base_RotateFromTheta_Statics::NewProp_theta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_RotateFromTheta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_RotateFromTheta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, "RotateFromTheta", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, sizeof(Enemy_Base_eventRotateFromTheta_Parms), Z_Construct_UFunction_AEnemy_Base_RotateFromTheta_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_RotateFromTheta_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_RotateFromTheta_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_RotateFromTheta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_RotateFromTheta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_RotateFromTheta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics
	{
		struct Enemy_Base_eventSetExitPositions_Parms
		{
			TArray<AMyNavigationNode_Exit*> nodes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_nodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::NewProp_nodes = { UE4CodeGen_Private::EPropertyClass::Array, "nodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Enemy_Base_eventSetExitPositions_Parms, nodes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::NewProp_nodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "nodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMyNavigationNode_Exit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::NewProp_nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::NewProp_nodes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, "SetExitPositions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(Enemy_Base_eventSetExitPositions_Parms), Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_SetExitPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_SetExitPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Base_TakeFood_Statics
	{
		struct Enemy_Base_eventTakeFood_Parms
		{
			AFridge_Base* fridge;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fridge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_Base_TakeFood_Statics::NewProp_fridge = { UE4CodeGen_Private::EPropertyClass::Object, "fridge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Enemy_Base_eventTakeFood_Parms, fridge), Z_Construct_UClass_AFridge_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_Base_TakeFood_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Base_TakeFood_Statics::NewProp_fridge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_TakeFood_Statics::Function_MetaDataParams[] = {
		{ "Category", "Food Theft" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_TakeFood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, "TakeFood", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(Enemy_Base_eventTakeFood_Parms), Z_Construct_UFunction_AEnemy_Base_TakeFood_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_TakeFood_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_TakeFood_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_TakeFood_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_TakeFood()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_TakeFood_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemy_Base_NoRegister()
	{
		return AEnemy_Base::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rotationAmountZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rotationAmountZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__carriedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__carriedObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2019,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_Base_FindExitNodes, "FindExitNodes" }, // 2258427761
		{ &Z_Construct_UFunction_AEnemy_Base_FindNodes, "FindNodes" }, // 1129213385
		{ &Z_Construct_UFunction_AEnemy_Base_GetFridge, "GetFridge" }, // 4138507860
		{ &Z_Construct_UFunction_AEnemy_Base_GetHasFood, "GetHasFood" }, // 1965677961
		{ &Z_Construct_UFunction_AEnemy_Base_PathUsingNodes, "PathUsingNodes" }, // 3170798506
		{ &Z_Construct_UFunction_AEnemy_Base_RotateFromTheta, "RotateFromTheta" }, // 4014688813
		{ &Z_Construct_UFunction_AEnemy_Base_SetExitPositions, "SetExitPositions" }, // 1410972294
		{ &Z_Construct_UFunction_AEnemy_Base_TakeFood, "TakeFood" }, // 2410648492
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy_Base.h" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp__rotationAmountZ_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp__rotationAmountZ = { UE4CodeGen_Private::EPropertyClass::Float, "_rotationAmountZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AEnemy_Base, _rotationAmountZ), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp__rotationAmountZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp__rotationAmountZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp__carriedObject_MetaData[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp__carriedObject = { UE4CodeGen_Private::EPropertyClass::Object, "_carriedObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AEnemy_Base, _carriedObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp__carriedObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp__carriedObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp__rotationAmountZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp__carriedObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Base_Statics::ClassParams = {
		&AEnemy_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AEnemy_Base_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_Base, 929359405);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_Base(Z_Construct_UClass_AEnemy_Base, &AEnemy_Base::StaticClass, TEXT("/Script/GGJ2019"), TEXT("AEnemy_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
