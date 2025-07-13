// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PGS_Alpha/PGS_AlphaGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePGS_AlphaGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PGS_ALPHA_API UClass* Z_Construct_UClass_APGS_AlphaGameMode();
PGS_ALPHA_API UClass* Z_Construct_UClass_APGS_AlphaGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PGS_Alpha();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APGS_AlphaGameMode *******************************************************
void APGS_AlphaGameMode::StaticRegisterNativesAPGS_AlphaGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APGS_AlphaGameMode;
UClass* APGS_AlphaGameMode::GetPrivateStaticClass()
{
	using TClass = APGS_AlphaGameMode;
	if (!Z_Registration_Info_UClass_APGS_AlphaGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PGS_AlphaGameMode"),
			Z_Registration_Info_UClass_APGS_AlphaGameMode.InnerSingleton,
			StaticRegisterNativesAPGS_AlphaGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APGS_AlphaGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_APGS_AlphaGameMode_NoRegister()
{
	return APGS_AlphaGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APGS_AlphaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PGS_AlphaGameMode.h" },
		{ "ModuleRelativePath", "PGS_AlphaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APGS_AlphaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APGS_AlphaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PGS_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APGS_AlphaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APGS_AlphaGameMode_Statics::ClassParams = {
	&APGS_AlphaGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APGS_AlphaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APGS_AlphaGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APGS_AlphaGameMode()
{
	if (!Z_Registration_Info_UClass_APGS_AlphaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APGS_AlphaGameMode.OuterSingleton, Z_Construct_UClass_APGS_AlphaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APGS_AlphaGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APGS_AlphaGameMode);
APGS_AlphaGameMode::~APGS_AlphaGameMode() {}
// ********** End Class APGS_AlphaGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaGameMode_h__Script_PGS_Alpha_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APGS_AlphaGameMode, APGS_AlphaGameMode::StaticClass, TEXT("APGS_AlphaGameMode"), &Z_Registration_Info_UClass_APGS_AlphaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APGS_AlphaGameMode), 4022586293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaGameMode_h__Script_PGS_Alpha_557364679(TEXT("/Script/PGS_Alpha"),
	Z_CompiledInDeferFile_FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaGameMode_h__Script_PGS_Alpha_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PGS_Alpha_Source_PGS_Alpha_PGS_AlphaGameMode_h__Script_PGS_Alpha_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
