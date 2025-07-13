// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PGS_AlphaPlayerController.h"

#ifdef PGS_ALPHA_PGS_AlphaPlayerController_generated_h
#error "PGS_AlphaPlayerController.generated.h already included, missing '#pragma once' in PGS_AlphaPlayerController.h"
#endif
#define PGS_ALPHA_PGS_AlphaPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APGS_AlphaPlayerController ***********************************************
PGS_ALPHA_API UClass* Z_Construct_UClass_APGS_AlphaPlayerController_NoRegister();

#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPGS_AlphaPlayerController(); \
	friend struct Z_Construct_UClass_APGS_AlphaPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PGS_ALPHA_API UClass* Z_Construct_UClass_APGS_AlphaPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(APGS_AlphaPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PGS_Alpha"), Z_Construct_UClass_APGS_AlphaPlayerController_NoRegister) \
	DECLARE_SERIALIZER(APGS_AlphaPlayerController)


#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APGS_AlphaPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APGS_AlphaPlayerController(APGS_AlphaPlayerController&&) = delete; \
	APGS_AlphaPlayerController(const APGS_AlphaPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APGS_AlphaPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APGS_AlphaPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APGS_AlphaPlayerController) \
	NO_API virtual ~APGS_AlphaPlayerController();


#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaPlayerController_h_15_PROLOG
#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APGS_AlphaPlayerController;

// ********** End Class APGS_AlphaPlayerController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
