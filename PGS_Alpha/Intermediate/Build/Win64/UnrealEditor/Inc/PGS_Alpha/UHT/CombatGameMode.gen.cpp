// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PGS_Alpha/Variant_Combat/CombatGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PGS_ALPHA_API UClass* Z_Construct_UClass_ACombatGameMode();
PGS_ALPHA_API UClass* Z_Construct_UClass_ACombatGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PGS_Alpha();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACombatGameMode **********************************************************
void ACombatGameMode::StaticRegisterNativesACombatGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACombatGameMode;
UClass* ACombatGameMode::GetPrivateStaticClass()
{
	using TClass = ACombatGameMode;
	if (!Z_Registration_Info_UClass_ACombatGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CombatGameMode"),
			Z_Registration_Info_UClass_ACombatGameMode.InnerSingleton,
			StaticRegisterNativesACombatGameMode,
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
	return Z_Registration_Info_UClass_ACombatGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACombatGameMode_NoRegister()
{
	return ACombatGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACombatGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person combat game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Variant_Combat/CombatGameMode.h" },
		{ "ModuleRelativePath", "Variant_Combat/CombatGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person combat game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACombatGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PGS_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatGameMode_Statics::ClassParams = {
	&ACombatGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombatGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACombatGameMode()
{
	if (!Z_Registration_Info_UClass_ACombatGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatGameMode.OuterSingleton, Z_Construct_UClass_ACombatGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACombatGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatGameMode);
ACombatGameMode::~ACombatGameMode() {}
// ********** End Class ACombatGameMode ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatGameMode_h__Script_PGS_Alpha_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACombatGameMode, ACombatGameMode::StaticClass, TEXT("ACombatGameMode"), &Z_Registration_Info_UClass_ACombatGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatGameMode), 3601039567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatGameMode_h__Script_PGS_Alpha_3769366137(TEXT("/Script/PGS_Alpha"),
	Z_CompiledInDeferFile_FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatGameMode_h__Script_PGS_Alpha_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PGS_Alpha_Source_PGS_Alpha_Variant_Combat_CombatGameMode_h__Script_PGS_Alpha_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
