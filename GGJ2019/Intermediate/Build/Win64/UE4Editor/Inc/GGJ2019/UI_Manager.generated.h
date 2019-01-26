// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayer_Base;
class AFridge_Base;
#ifdef GGJ2019_UI_Manager_generated_h
#error "UI_Manager.generated.h already included, missing '#pragma once' in UI_Manager.h"
#endif
#define GGJ2019_UI_Manager_generated_h

#define GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPlayerRef) \
	{ \
		P_GET_OBJECT(APlayer_Base,Z_Param_pPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayerRef(Z_Param_pPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFridgerRef) \
	{ \
		P_GET_OBJECT(AFridge_Base,Z_Param_pfridge); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFridgerRef(Z_Param_pfridge); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReturnEquippedWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ReturnEquippedWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReturnKillCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ReturnKillCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReturnFood) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ReturnFood(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFoodRemaining) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFoodRemaining(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquippedWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEquippedWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKillCount) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KillCount(Z_Param_value); \
		P_NATIVE_END; \
	}


#define GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPlayerRef) \
	{ \
		P_GET_OBJECT(APlayer_Base,Z_Param_pPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayerRef(Z_Param_pPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFridgerRef) \
	{ \
		P_GET_OBJECT(AFridge_Base,Z_Param_pfridge); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFridgerRef(Z_Param_pfridge); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReturnEquippedWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ReturnEquippedWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReturnKillCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ReturnKillCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReturnFood) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ReturnFood(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFoodRemaining) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFoodRemaining(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquippedWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEquippedWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKillCount) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KillCount(Z_Param_value); \
		P_NATIVE_END; \
	}


#define GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUI_Manager(); \
	friend struct Z_Construct_UClass_AUI_Manager_Statics; \
public: \
	DECLARE_CLASS(AUI_Manager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(AUI_Manager)


#define GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAUI_Manager(); \
	friend struct Z_Construct_UClass_AUI_Manager_Statics; \
public: \
	DECLARE_CLASS(AUI_Manager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(AUI_Manager)


#define GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUI_Manager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUI_Manager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI_Manager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_Manager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUI_Manager(AUI_Manager&&); \
	NO_API AUI_Manager(const AUI_Manager&); \
public:


#define GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUI_Manager(AUI_Manager&&); \
	NO_API AUI_Manager(const AUI_Manager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI_Manager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_Manager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUI_Manager)


#define GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__player() { return STRUCT_OFFSET(AUI_Manager, player); } \
	FORCEINLINE static uint32 __PPO__fridge() { return STRUCT_OFFSET(AUI_Manager, fridge); }


#define GGJ2019_Source_GGJ2019_Public_UI_Manager_h_13_PROLOG
#define GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_RPC_WRAPPERS \
	GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_INCLASS \
	GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_INCLASS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Public_UI_Manager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ2019_Source_GGJ2019_Public_UI_Manager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
