// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SurvivalCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVAL_SurvivalCharacter_generated_h
#error "SurvivalCharacter.generated.h already included, missing '#pragma once' in SurvivalCharacter.h"
#endif
#define SURVIVAL_SurvivalCharacter_generated_h

#define FID_Projects_Survival_Survival_Source_Survival_SurvivalCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalCharacter)


#define FID_Projects_Survival_Survival_Source_Survival_SurvivalCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASurvivalCharacter(ASurvivalCharacter&&); \
	ASurvivalCharacter(const ASurvivalCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalCharacter) \
	NO_API virtual ~ASurvivalCharacter();


#define FID_Projects_Survival_Survival_Source_Survival_SurvivalCharacter_h_18_PROLOG
#define FID_Projects_Survival_Survival_Source_Survival_SurvivalCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Survival_Survival_Source_Survival_SurvivalCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Projects_Survival_Survival_Source_Survival_SurvivalCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_API UClass* StaticClass<class ASurvivalCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Survival_Survival_Source_Survival_SurvivalCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
