// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PGS_AlphaGameMode.h"

#ifdef PGS_ALPHA_PGS_AlphaGameMode_generated_h
#error "PGS_AlphaGameMode.generated.h already included, missing '#pragma once' in PGS_AlphaGameMode.h"
#endif
#define PGS_ALPHA_PGS_AlphaGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APGS_AlphaGameMode *******************************************************
PGS_ALPHA_API UClass* Z_Construct_UClass_APGS_AlphaGameMode_NoRegister();

#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPGS_AlphaGameMode(); \
	friend struct Z_Construct_UClass_APGS_AlphaGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PGS_ALPHA_API UClass* Z_Construct_UClass_APGS_AlphaGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(APGS_AlphaGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PGS_Alpha"), Z_Construct_UClass_APGS_AlphaGameMode_NoRegister) \
	DECLARE_SERIALIZER(APGS_AlphaGameMode)


#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APGS_AlphaGameMode(APGS_AlphaGameMode&&) = delete; \
	APGS_AlphaGameMode(const APGS_AlphaGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APGS_AlphaGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APGS_AlphaGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APGS_AlphaGameMode) \
	NO_API virtual ~APGS_AlphaGameMode();


#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaGameMode_h_12_PROLOG
#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APGS_AlphaGameMode;

// ********** End Class APGS_AlphaGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
