// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_SideScrolling/SideScrollingUI.h"

#ifdef PGS_ALPHA_SideScrollingUI_generated_h
#error "SideScrollingUI.generated.h already included, missing '#pragma once' in SideScrollingUI.h"
#endif
#define PGS_ALPHA_SideScrollingUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USideScrollingUI *********************************************************
#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_SideScrollingUI_h_16_CALLBACK_WRAPPERS
PGS_ALPHA_API UClass* Z_Construct_UClass_USideScrollingUI_NoRegister();

#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_SideScrollingUI_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSideScrollingUI(); \
	friend struct Z_Construct_UClass_USideScrollingUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PGS_ALPHA_API UClass* Z_Construct_UClass_USideScrollingUI_NoRegister(); \
public: \
	DECLARE_CLASS2(USideScrollingUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PGS_Alpha"), Z_Construct_UClass_USideScrollingUI_NoRegister) \
	DECLARE_SERIALIZER(USideScrollingUI)


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_SideScrollingUI_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USideScrollingUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USideScrollingUI(USideScrollingUI&&) = delete; \
	USideScrollingUI(const USideScrollingUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USideScrollingUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USideScrollingUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USideScrollingUI) \
	NO_API virtual ~USideScrollingUI();


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_SideScrollingUI_h_13_PROLOG
#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_SideScrollingUI_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_SideScrollingUI_h_16_CALLBACK_WRAPPERS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_SideScrollingUI_h_16_INCLASS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_SideScrollingUI_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USideScrollingUI;

// ********** End Class USideScrollingUI ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PGS_Alpha_Source_PGS_Alpha_Variant_SideScrolling_SideScrollingUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
