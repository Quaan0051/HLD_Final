// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DryBones.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_DryBones_generated_h
#error "DryBones.generated.h already included, missing '#pragma once' in DryBones.h"
#endif
#define PLATFORMER2D_DryBones_generated_h

#define FID_Platformer2D_Source_Platformer2D_DryBones_h_32_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_DryBones_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_DryBones_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_DryBones_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnBackOverlap); \
	DECLARE_FUNCTION(execOnFrontOverlap);


#define FID_Platformer2D_Source_Platformer2D_DryBones_h_32_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_DryBones_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADryBones(); \
	friend struct Z_Construct_UClass_ADryBones_Statics; \
public: \
	DECLARE_CLASS(ADryBones, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ADryBones)


#define FID_Platformer2D_Source_Platformer2D_DryBones_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADryBones(ADryBones&&); \
	NO_API ADryBones(const ADryBones&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADryBones); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADryBones); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADryBones) \
	NO_API virtual ~ADryBones();


#define FID_Platformer2D_Source_Platformer2D_DryBones_h_29_PROLOG
#define FID_Platformer2D_Source_Platformer2D_DryBones_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_DryBones_h_32_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_DryBones_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_DryBones_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_DryBones_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_DryBones_h_32_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_DryBones_h_32_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_DryBones_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ADryBones>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_DryBones_h


#define FOREACH_ENUM_EDRYBONESSTATE(op) \
	op(EDryBonesState::Unknown) \
	op(EDryBonesState::Walking) \
	op(EDryBonesState::GoingDown) \
	op(EDryBonesState::Downed) \
	op(EDryBonesState::Stirring) 

enum class EDryBonesState : uint8;
template<> struct TIsUEnumClass<EDryBonesState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EDryBonesState>();

#define FOREACH_ENUM_EDRYBONESDIRECTION(op) \
	op(EDryBonesDirection::Left) \
	op(EDryBonesDirection::Right) 

enum class EDryBonesDirection : uint8;
template<> struct TIsUEnumClass<EDryBonesDirection> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EDryBonesDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
