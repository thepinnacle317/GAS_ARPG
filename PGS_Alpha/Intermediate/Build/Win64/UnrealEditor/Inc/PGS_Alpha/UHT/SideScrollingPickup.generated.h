// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_SideScrolling/Gameplay/SideScrollingPickup.h"

#ifdef PGS_ALPHA_SideScrollingPickup_generated_h
#error "SideScrollingPickup.generated.h already included, missing '#pragma once' in SideScrollingPickup.h"
#endif
#define PGS_ALPHA_SideScrollingPickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ASideScrollingPickup *****************************************************
#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingPickup_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBeginOverlap);


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingPickup_h_18_CALLBACK_WRAPPERS
PGS_ALPHA_API UClass* Z_Construct_UClass_ASideScrollingPickup_NoRegister();

#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingPickup_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASideScrollingPickup(); \
	friend struct Z_Construct_UClass_ASideScrollingPickup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PGS_ALPHA_API UClass* Z_Construct_UClass_ASideScrollingPickup_NoRegister(); \
public: \
	DECLARE_CLASS2(ASideScrollingPickup, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PGS_Alpha"), Z_Construct_UClass_ASideScrollingPickup_NoRegister) \
	DECLARE_SERIALIZER(ASideScrollingPickup)


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingPickup_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASideScrollingPickup(ASideScrollingPickup&&) = delete; \
	ASideScrollingPickup(const ASideScrollingPickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASideScrollingPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASideScrollingPickup); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASideScrollingPickup) \
	NO_API virtual ~ASideScrollingPickup();


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingPickup_h_15_PROLOG
#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingPickup_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingPickup_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingPickup_h_18_CALLBACK_WRAPPERS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingPickup_h_18_INCLASS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingPickup_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASideScrollingPickup;

// ********** End Class ASideScrollingPickup *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_Gameplay_SideScrollingPickup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
