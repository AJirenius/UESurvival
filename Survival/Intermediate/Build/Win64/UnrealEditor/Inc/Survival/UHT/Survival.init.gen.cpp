// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvival_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Survival;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Survival()
	{
		if (!Z_Registration_Info_UPackage__Script_Survival.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Survival",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x70C03703,
				0xF11DC453,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Survival.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Survival.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Survival(Z_Construct_UPackage__Script_Survival, TEXT("/Script/Survival"), Z_Registration_Info_UPackage__Script_Survival, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x70C03703, 0xF11DC453));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
