// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformerGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_PlatformerGameModeBase_generated_h
#error "PlatformerGameModeBase.generated.h already included, missing '#pragma once' in PlatformerGameModeBase.h"
#endif
#define PLATFORMER2D_PlatformerGameModeBase_generated_h

#define FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformerGameModeBase(); \
	friend struct Z_Construct_UClass_APlatformerGameModeBase_Statics; \
public: \
	DECLARE_CLASS(APlatformerGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(APlatformerGameModeBase)


#define FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformerGameModeBase(APlatformerGameModeBase&&); \
	NO_API APlatformerGameModeBase(const APlatformerGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformerGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformerGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformerGameModeBase) \
	NO_API virtual ~APlatformerGameModeBase();


#define FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_25_PROLOG
#define FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class APlatformerGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::Unknown) \
	op(EGameState::Gameplay) \
	op(EGameState::FadeIn) \
	op(EGameState::FadeHold) \
	op(EGameState::FadeOut) 

enum class EGameState : uint8;
template<> struct TIsUEnumClass<EGameState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
