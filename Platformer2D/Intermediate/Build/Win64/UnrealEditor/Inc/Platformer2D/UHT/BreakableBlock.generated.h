// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BreakableBlock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_BreakableBlock_generated_h
#error "BreakableBlock.generated.h already included, missing '#pragma once' in BreakableBlock.h"
#endif
#define PLATFORMER2D_BreakableBlock_generated_h

#define FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABreakableBlock(); \
	friend struct Z_Construct_UClass_ABreakableBlock_Statics; \
public: \
	DECLARE_CLASS(ABreakableBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABreakableBlock)


#define FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreakableBlock(ABreakableBlock&&); \
	NO_API ABreakableBlock(const ABreakableBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABreakableBlock) \
	NO_API virtual ~ABreakableBlock();


#define FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_20_PROLOG
#define FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ABreakableBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_BreakableBlock_h


#define FOREACH_ENUM_EBREAKABLEBLOCKSTATE(op) \
	op(EBreakableBlockState::Unknown) \
	op(EBreakableBlockState::Active) \
	op(EBreakableBlockState::AnimUp) \
	op(EBreakableBlockState::AnimDown) \
	op(EBreakableBlockState::Breaking) 

enum class EBreakableBlockState : uint8;
template<> struct TIsUEnumClass<EBreakableBlockState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EBreakableBlockState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
