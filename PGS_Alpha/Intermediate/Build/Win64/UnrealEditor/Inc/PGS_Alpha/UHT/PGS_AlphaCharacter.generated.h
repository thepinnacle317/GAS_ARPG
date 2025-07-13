// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PGS_AlphaCharacter.h"

#ifdef PGS_ALPHA_PGS_AlphaCharacter_generated_h
#error "PGS_AlphaCharacter.generated.h already included, missing '#pragma once' in PGS_AlphaCharacter.h"
#endif
#define PGS_ALPHA_PGS_AlphaCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APGS_AlphaCharacter ******************************************************
#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


PGS_ALPHA_API UClass* Z_Construct_UClass_APGS_AlphaCharacter_NoRegister();

#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPGS_AlphaCharacter(); \
	friend struct Z_Construct_UClass_APGS_AlphaCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PGS_ALPHA_API UClass* Z_Construct_UClass_APGS_AlphaCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APGS_AlphaCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PGS_Alpha"), Z_Construct_UClass_APGS_AlphaCharacter_NoRegister) \
	DECLARE_SERIALIZER(APGS_AlphaCharacter)


#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APGS_AlphaCharacter(APGS_AlphaCharacter&&) = delete; \
	APGS_AlphaCharacter(const APGS_AlphaCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APGS_AlphaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APGS_AlphaCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APGS_AlphaCharacter) \
	NO_API virtual ~APGS_AlphaCharacter();


#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaCharacter_h_21_PROLOG
#define FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APGS_AlphaCharacter;

// ********** End Class APGS_AlphaCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
