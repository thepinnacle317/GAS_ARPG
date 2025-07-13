// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/CombatDamageableBox.h"

#ifdef PGS_ALPHA_CombatDamageableBox_generated_h
#error "CombatDamageableBox.generated.h already included, missing '#pragma once' in CombatDamageableBox.h"
#endif
#define PGS_ALPHA_CombatDamageableBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACombatDamageableBox *****************************************************
#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatDamageableBox_h_16_CALLBACK_WRAPPERS
PGS_ALPHA_API UClass* Z_Construct_UClass_ACombatDamageableBox_NoRegister();

#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatDamageableBox_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatDamageableBox(); \
	friend struct Z_Construct_UClass_ACombatDamageableBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PGS_ALPHA_API UClass* Z_Construct_UClass_ACombatDamageableBox_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombatDamageableBox, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PGS_Alpha"), Z_Construct_UClass_ACombatDamageableBox_NoRegister) \
	DECLARE_SERIALIZER(ACombatDamageableBox) \
	virtual UObject* _getUObject() const override { return const_cast<ACombatDamageableBox*>(this); }


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatDamageableBox_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatDamageableBox(ACombatDamageableBox&&) = delete; \
	ACombatDamageableBox(const ACombatDamageableBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatDamageableBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatDamageableBox); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACombatDamageableBox) \
	NO_API virtual ~ACombatDamageableBox();


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatDamageableBox_h_13_PROLOG
#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatDamageableBox_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatDamageableBox_h_16_CALLBACK_WRAPPERS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatDamageableBox_h_16_INCLASS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatDamageableBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatDamageableBox;

// ********** End Class ACombatDamageableBox *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatDamageableBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
