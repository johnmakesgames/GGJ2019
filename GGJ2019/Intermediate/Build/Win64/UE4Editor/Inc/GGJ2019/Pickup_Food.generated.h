// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ2019_Pickup_Food_generated_h
#error "Pickup_Food.generated.h already included, missing '#pragma once' in Pickup_Food.h"
#endif
#define GGJ2019_Pickup_Food_generated_h

#define GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetFoodTypes) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_food); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setFoodTypes(FoodTypes(Z_Param_food)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetFoodType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<FoodTypes>*)Z_Param__Result=P_THIS->getFoodType(); \
		P_NATIVE_END; \
	}


#define GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetFoodTypes) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_food); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setFoodTypes(FoodTypes(Z_Param_food)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetFoodType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<FoodTypes>*)Z_Param__Result=P_THIS->getFoodType(); \
		P_NATIVE_END; \
	}


#define GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup_Food(); \
	friend struct Z_Construct_UClass_APickup_Food_Statics; \
public: \
	DECLARE_CLASS(APickup_Food, APickup_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(APickup_Food)


#define GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPickup_Food(); \
	friend struct Z_Construct_UClass_APickup_Food_Statics; \
public: \
	DECLARE_CLASS(APickup_Food, APickup_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(APickup_Food)


#define GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup_Food(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup_Food) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup_Food); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup_Food); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup_Food(APickup_Food&&); \
	NO_API APickup_Food(const APickup_Food&); \
public:


#define GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup_Food() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup_Food(APickup_Food&&); \
	NO_API APickup_Food(const APickup_Food&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup_Food); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup_Food); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup_Food)


#define GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_PRIVATE_PROPERTY_OFFSET
#define GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_13_PROLOG
#define GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_RPC_WRAPPERS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_INCLASS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_INCLASS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Food_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ2019_Source_GGJ2019_Public_Pickup_Food_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
