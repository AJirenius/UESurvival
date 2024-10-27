// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/SurvivalGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SURVIVAL_API UClass* Z_Construct_UClass_ASurvivalGameMode();
SURVIVAL_API UClass* Z_Construct_UClass_ASurvivalGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Survival();
// End Cross Module References

// Begin Class ASurvivalGameMode
void ASurvivalGameMode::StaticRegisterNativesASurvivalGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivalGameMode);
UClass* Z_Construct_UClass_ASurvivalGameMode_NoRegister()
{
	return ASurvivalGameMode::StaticClass();
}
struct Z_Construct_UClass_ASurvivalGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SurvivalGameMode.h" },
		{ "ModuleRelativePath", "SurvivalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASurvivalGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Survival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalGameMode_Statics::ClassParams = {
	&ASurvivalGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurvivalGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurvivalGameMode()
{
	if (!Z_Registration_Info_UClass_ASurvivalGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalGameMode.OuterSingleton, Z_Construct_UClass_ASurvivalGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurvivalGameMode.OuterSingleton;
}
template<> SURVIVAL_API UClass* StaticClass<ASurvivalGameMode>()
{
	return ASurvivalGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalGameMode);
ASurvivalGameMode::~ASurvivalGameMode() {}
// End Class ASurvivalGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Survival_Survival_Source_Survival_SurvivalGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalGameMode, ASurvivalGameMode::StaticClass, TEXT("ASurvivalGameMode"), &Z_Registration_Info_UClass_ASurvivalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalGameMode), 1825537654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Survival_Survival_Source_Survival_SurvivalGameMode_h_1687478101(TEXT("/Script/Survival"),
	Z_CompiledInDeferFile_FID_Projects_Survival_Survival_Source_Survival_SurvivalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Survival_Survival_Source_Survival_SurvivalGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
