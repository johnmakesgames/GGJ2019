// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyNavigationNode_Exit;
class ANavigationNode_Base;
#ifdef GGJ2019_Enemy_Base_generated_h
#error "Enemy_Base.generated.h already included, missing '#pragma once' in Enemy_Base.h"
#endif
#define GGJ2019_Enemy_Base_generated_h

#define GGJ2019_Source_GGJ2019_Enemy_Base_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetExitPositions) \
	{ \
		P_GET_TARRAY(AMyNavigationNode_Exit*,Z_Param_nodes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetExitPositions(Z_Param_nodes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPathUsingNodes) \
	{ \
		P_GET_TARRAY(ANavigationNode_Base*,Z_Param_nodes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PathUsingNodes(Z_Param_nodes); \
		P_NATIVE_END; \
	}


#define GGJ2019_Source_GGJ2019_Enemy_Base_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetExitPositions) \
	{ \
		P_GET_TARRAY(AMyNavigationNode_Exit*,Z_Param_nodes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetExitPositions(Z_Param_nodes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPathUsingNodes) \
	{ \
		P_GET_TARRAY(ANavigationNode_Base*,Z_Param_nodes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PathUsingNodes(Z_Param_nodes); \
		P_NATIVE_END; \
	}


#define GGJ2019_Source_GGJ2019_Enemy_Base_h_16_EVENT_PARMS
#define GGJ2019_Source_GGJ2019_Enemy_Base_h_16_CALLBACK_WRAPPERS
#define GGJ2019_Source_GGJ2019_Enemy_Base_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_Base(); \
	friend struct Z_Construct_UClass_AEnemy_Base_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Base, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Base)


#define GGJ2019_Source_GGJ2019_Enemy_Base_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy_Base(); \
	friend struct Z_Construct_UClass_AEnemy_Base_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Base, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Base)


#define GGJ2019_Source_GGJ2019_Enemy_Base_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Base(AEnemy_Base&&); \
	NO_API AEnemy_Base(const AEnemy_Base&); \
public:


#define GGJ2019_Source_GGJ2019_Enemy_Base_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Base(AEnemy_Base&&); \
	NO_API AEnemy_Base(const AEnemy_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_Base)


#define GGJ2019_Source_GGJ2019_Enemy_Base_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___body() { return STRUCT_OFFSET(AEnemy_Base, _body); }


#define GGJ2019_Source_GGJ2019_Enemy_Base_h_13_PROLOG \
	GGJ2019_Source_GGJ2019_Enemy_Base_h_16_EVENT_PARMS


#define GGJ2019_Source_GGJ2019_Enemy_Base_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Enemy_Base_h_16_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Enemy_Base_h_16_RPC_WRAPPERS \
	GGJ2019_Source_GGJ2019_Enemy_Base_h_16_CALLBACK_WRAPPERS \
	GGJ2019_Source_GGJ2019_Enemy_Base_h_16_INCLASS \
	GGJ2019_Source_GGJ2019_Enemy_Base_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ2019_Source_GGJ2019_Enemy_Base_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Enemy_Base_h_16_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Enemy_Base_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Enemy_Base_h_16_CALLBACK_WRAPPERS \
	GGJ2019_Source_GGJ2019_Enemy_Base_h_16_INCLASS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Enemy_Base_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ2019_Source_GGJ2019_Enemy_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
