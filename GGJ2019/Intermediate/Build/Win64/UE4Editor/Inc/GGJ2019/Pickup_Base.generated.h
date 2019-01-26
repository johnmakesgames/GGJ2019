// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ2019_Pickup_Base_generated_h
#error "Pickup_Base.generated.h already included, missing '#pragma once' in Pickup_Base.h"
#endif
#define GGJ2019_Pickup_Base_generated_h

#define GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetActive) \
	{ \
		P_GET_UBOOL(Z_Param_active); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setActive(Z_Param_active); \
		P_NATIVE_END; \
	}


#define GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetActive) \
	{ \
		P_GET_UBOOL(Z_Param_active); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setActive(Z_Param_active); \
		P_NATIVE_END; \
	}


#define GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup_Base(); \
	friend struct Z_Construct_UClass_APickup_Base_Statics; \
public: \
	DECLARE_CLASS(APickup_Base, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(APickup_Base)


#define GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickup_Base(); \
	friend struct Z_Construct_UClass_APickup_Base_Statics; \
public: \
	DECLARE_CLASS(APickup_Base, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(APickup_Base)


#define GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup_Base(APickup_Base&&); \
	NO_API APickup_Base(const APickup_Base&); \
public:


#define GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup_Base(APickup_Base&&); \
	NO_API APickup_Base(const APickup_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup_Base)


#define GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_PRIVATE_PROPERTY_OFFSET
#define GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_12_PROLOG
#define GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_RPC_WRAPPERS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_INCLASS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_INCLASS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ2019_Source_GGJ2019_Public_Pickup_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
