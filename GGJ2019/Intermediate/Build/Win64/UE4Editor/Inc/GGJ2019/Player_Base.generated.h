// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFridge_Base;
#ifdef GGJ2019_Player_Base_generated_h
#error "Player_Base.generated.h already included, missing '#pragma once' in Player_Base.h"
#endif
#define GGJ2019_Player_Base_generated_h

#define GGJ2019_Source_GGJ2019_Player_Base_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execputFoodInFridge) \
	{ \
		P_GET_OBJECT(AFridge_Base,Z_Param_fridge); \
		P_GET_PROPERTY(UByteProperty,Z_Param_food); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->putFoodInFridge(Z_Param_fridge,FoodTypes(Z_Param_food)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execpickUpFood) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_food); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->pickUpFood(FoodTypes(Z_Param_food)); \
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


#define GGJ2019_Source_GGJ2019_Player_Base_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execputFoodInFridge) \
	{ \
		P_GET_OBJECT(AFridge_Base,Z_Param_fridge); \
		P_GET_PROPERTY(UByteProperty,Z_Param_food); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->putFoodInFridge(Z_Param_fridge,FoodTypes(Z_Param_food)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execpickUpFood) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_food); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->pickUpFood(FoodTypes(Z_Param_food)); \
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


#define GGJ2019_Source_GGJ2019_Player_Base_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Base(); \
	friend struct Z_Construct_UClass_APlayer_Base_Statics; \
public: \
	DECLARE_CLASS(APlayer_Base, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Base)


#define GGJ2019_Source_GGJ2019_Player_Base_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_Base(); \
	friend struct Z_Construct_UClass_APlayer_Base_Statics; \
public: \
	DECLARE_CLASS(APlayer_Base, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Base)


#define GGJ2019_Source_GGJ2019_Player_Base_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Base(APlayer_Base&&); \
	NO_API APlayer_Base(const APlayer_Base&); \
public:


#define GGJ2019_Source_GGJ2019_Player_Base_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Base(APlayer_Base&&); \
	NO_API APlayer_Base(const APlayer_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_Base)


#define GGJ2019_Source_GGJ2019_Player_Base_h_19_PRIVATE_PROPERTY_OFFSET
#define GGJ2019_Source_GGJ2019_Player_Base_h_16_PROLOG
#define GGJ2019_Source_GGJ2019_Player_Base_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Player_Base_h_19_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Player_Base_h_19_RPC_WRAPPERS \
	GGJ2019_Source_GGJ2019_Player_Base_h_19_INCLASS \
	GGJ2019_Source_GGJ2019_Player_Base_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ2019_Source_GGJ2019_Player_Base_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Player_Base_h_19_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Player_Base_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Player_Base_h_19_INCLASS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Player_Base_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ2019_Source_GGJ2019_Player_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
