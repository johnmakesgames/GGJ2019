// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef GGJ2019_Pickup_Weapon_generated_h
#error "Pickup_Weapon.generated.h already included, missing '#pragma once' in Pickup_Weapon.h"
#endif
#define GGJ2019_Pickup_Weapon_generated_h

#define GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnWeaponBeginOverlap) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponBeginOverlap(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetWeaponType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<WeaponType>*)Z_Param__Result=P_THIS->getWeaponType(); \
		P_NATIVE_END; \
	}


#define GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnWeaponBeginOverlap) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponBeginOverlap(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetWeaponType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<WeaponType>*)Z_Param__Result=P_THIS->getWeaponType(); \
		P_NATIVE_END; \
	}


#define GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup_Weapon(); \
	friend struct Z_Construct_UClass_APickup_Weapon_Statics; \
public: \
	DECLARE_CLASS(APickup_Weapon, APickup_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(APickup_Weapon)


#define GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPickup_Weapon(); \
	friend struct Z_Construct_UClass_APickup_Weapon_Statics; \
public: \
	DECLARE_CLASS(APickup_Weapon, APickup_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ2019"), NO_API) \
	DECLARE_SERIALIZER(APickup_Weapon)


#define GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup_Weapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup_Weapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup_Weapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup_Weapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup_Weapon(APickup_Weapon&&); \
	NO_API APickup_Weapon(const APickup_Weapon&); \
public:


#define GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup_Weapon(APickup_Weapon&&); \
	NO_API APickup_Weapon(const APickup_Weapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup_Weapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup_Weapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup_Weapon)


#define GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_PRIVATE_PROPERTY_OFFSET
#define GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_16_PROLOG
#define GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_RPC_WRAPPERS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_INCLASS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_PRIVATE_PROPERTY_OFFSET \
	GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_INCLASS_NO_PURE_DECLS \
	GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ2019_Source_GGJ2019_Public_Pickup_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
