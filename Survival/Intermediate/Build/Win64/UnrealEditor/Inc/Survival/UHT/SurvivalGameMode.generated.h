// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SurvivalGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVAL_SurvivalGameMode_generated_h
#error "SurvivalGameMode.generated.h already included, missing '#pragma once' in SurvivalGameMode.h"
#endif
#define SURVIVAL_SurvivalGameMode_generated_h

#define FID_Projects_Survival_Survival_Source_Survival_SurvivalGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalGameMode(); \
	friend struct Z_Construct_UClass_ASurvivalGameMode_Statics; \
public: \
	DECLARE_CLASS(ASurvivalGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival"), SURVIVAL_API) \
	DECLARE_SERIALIZER(ASurvivalGameMode)


#define FID_Projects_Survival_Survival_Source_Survival_SurvivalGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASurvivalGameMode(ASurvivalGameMode&&); \
	ASurvivalGameMode(const ASurvivalGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SURVIVAL_API, ASurvivalGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalGameMode) \
	SURVIVAL_API virtual ~ASurvivalGameMode();


#define FID_Projects_Survival_Survival_Source_Survival_SurvivalGameMode_h_9_PROLOG
#define FID_Projects_Survival_Survival_Source_Survival_SurvivalGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Survival_Survival_Source_Survival_SurvivalGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Projects_Survival_Survival_Source_Survival_SurvivalGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_API UClass* StaticClass<class ASurvivalGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Survival_Survival_Source_Survival_SurvivalGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
