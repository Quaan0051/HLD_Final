// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MarioPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_MarioPlayerState_generated_h
#error "MarioPlayerState.generated.h already included, missing '#pragma once' in MarioPlayerState.h"
#endif
#define PLATFORMER2D_MarioPlayerState_generated_h

#define FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMarioPlayerState(); \
	friend struct Z_Construct_UClass_AMarioPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMarioPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AMarioPlayerState)


#define FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMarioPlayerState(AMarioPlayerState&&); \
	NO_API AMarioPlayerState(const AMarioPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarioPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarioPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMarioPlayerState) \
	NO_API virtual ~AMarioPlayerState();


#define FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_38_PROLOG
#define FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AMarioPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_MarioPlayerState_h


#define FOREACH_ENUM_EMARIOSTATE(op) \
	op(EMarioState::Idle) \
	op(EMarioState::Walking) \
	op(EMarioState::Jumping) \
	op(EMarioState::Falling) \
	op(EMarioState::Ducking) \
	op(EMarioState::Dead) 

enum class EMarioState : uint8;
template<> struct TIsUEnumClass<EMarioState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioState>();

#define FOREACH_ENUM_EMARIOFORM(op) \
	op(EMarioForm::Small) \
	op(EMarioForm::Super) 

enum class EMarioForm : uint8;
template<> struct TIsUEnumClass<EMarioForm> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioForm>();

#define FOREACH_ENUM_EMARIODIRECTION(op) \
	op(EMarioDirection::Right) \
	op(EMarioDirection::Left) 

enum class EMarioDirection : uint8;
template<> struct TIsUEnumClass<EMarioDirection> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
