// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePGS_Alpha_init() {}
	PGS_ALPHA_API UFunction* Z_Construct_UDelegateFunction_PGS_Alpha_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PGS_Alpha;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PGS_Alpha()
	{
		if (!Z_Registration_Info_UPackage__Script_PGS_Alpha.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PGS_Alpha_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PGS_Alpha",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD5A83CAE,
				0xA1A98AD5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PGS_Alpha.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PGS_Alpha.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PGS_Alpha(Z_Construct_UPackage__Script_PGS_Alpha, TEXT("/Script/PGS_Alpha"), Z_Registration_Info_UPackage__Script_PGS_Alpha, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD5A83CAE, 0xA1A98AD5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
