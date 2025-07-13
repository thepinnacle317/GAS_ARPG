// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_SideScrolling/Gameplay/SideScrollingMovingPlatform.h"

#ifdef PGS_ALPHA_SideScrollingMovingPlatform_generated_h
#error "SideScrollingMovingPlatform.generated.h already included, missing '#pragma once' in SideScrollingMovingPlatform.h"
#endif
#define PGS_ALPHA_SideScrollingMovingPlatform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASideScrollingMovingPlatform *********************************************
#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingMovingPlatform_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetInteraction);


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingMovingPlatform_h_17_CALLBACK_WRAPPERS
PGS_ALPHA_API UClass* Z_Construct_UClass_ASideScrollingMovingPlatform_NoRegister();

#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingMovingPlatform_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASideScrollingMovingPlatform(); \
	friend struct Z_Construct_UClass_ASideScrollingMovingPlatform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PGS_ALPHA_API UClass* Z_Construct_UClass_ASideScrollingMovingPlatform_NoRegister(); \
public: \
	DECLARE_CLASS2(ASideScrollingMovingPlatform, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PGS_Alpha"), Z_Construct_UClass_ASideScrollingMovingPlatform_NoRegister) \
	DECLARE_SERIALIZER(ASideScrollingMovingPlatform) \
	virtual UObject* _getUObject() const override { return const_cast<ASideScrollingMovingPlatform*>(this); }


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingMovingPlatform_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASideScrollingMovingPlatform(ASideScrollingMovingPlatform&&) = delete; \
	ASideScrollingMovingPlatform(const ASideScrollingMovingPlatform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASideScrollingMovingPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASideScrollingMovingPlatform); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASideScrollingMovingPlatform) \
	NO_API virtual ~ASideScrollingMovingPlatform();


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingMovingPlatform_h_14_PROLOG
#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingMovingPlatform_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingMovingPlatform_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingMovingPlatform_h_17_CALLBACK_WRAPPERS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingMovingPlatform_h_17_INCLASS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingMovingPlatform_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASideScrollingMovingPlatform;

// ********** End Class ASideScrollingMovingPlatform ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingMovingPlatform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
