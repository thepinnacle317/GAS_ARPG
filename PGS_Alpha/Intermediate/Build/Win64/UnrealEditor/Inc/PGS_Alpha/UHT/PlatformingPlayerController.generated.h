// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Platforming/PlatformingPlayerController.h"

#ifdef PGS_ALPHA_PlatformingPlayerController_generated_h
#error "PlatformingPlayerController.generated.h already included, missing '#pragma once' in PlatformingPlayerController.h"
#endif
#define PGS_ALPHA_PlatformingPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class APlatformingPlayerController *********************************************
#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_Platforming_PlatformingPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPawnDestroyed);


PGS_ALPHA_API UClass* Z_Construct_UClass_APlatformingPlayerController_NoRegister();

#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_Platforming_PlatformingPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformingPlayerController(); \
	friend struct Z_Construct_UClass_APlatformingPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PGS_ALPHA_API UClass* Z_Construct_UClass_APlatformingPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(APlatformingPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PGS_Alpha"), Z_Construct_UClass_APlatformingPlayerController_NoRegister) \
	DECLARE_SERIALIZER(APlatformingPlayerController)


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_Platforming_PlatformingPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformingPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlatformingPlayerController(APlatformingPlayerController&&) = delete; \
	APlatformingPlayerController(const APlatformingPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformingPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformingPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformingPlayerController) \
	NO_API virtual ~APlatformingPlayerController();


#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_Platforming_PlatformingPlayerController_h_17_PROLOG
#define FID_PGS_Alpha_Source_PGS_Alpha_Variant_Platforming_PlatformingPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_Platforming_PlatformingPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_Platforming_PlatformingPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_PGS_Alpha_Source_PGS_Alpha_Variant_Platforming_PlatformingPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlatformingPlayerController;

// ********** End Class APlatformingPlayerController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PGS_Alpha_Source_PGS_Alpha_Variant_Platforming_PlatformingPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
