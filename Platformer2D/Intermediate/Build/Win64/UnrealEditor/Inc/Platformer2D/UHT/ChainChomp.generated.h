// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChainChomp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_ChainChomp_generated_h
#error "ChainChomp.generated.h already included, missing '#pragma once' in ChainChomp.h"
#endif
#define PLATFORMER2D_ChainChomp_generated_h

#define FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChainChomp(); \
	friend struct Z_Construct_UClass_AChainChomp_Statics; \
public: \
	DECLARE_CLASS(AChainChomp, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AChainChomp)


#define FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChainChomp(AChainChomp&&); \
	NO_API AChainChomp(const AChainChomp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChainChomp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChainChomp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChainChomp) \
	NO_API virtual ~AChainChomp();


#define FID_Platformer2D_Source_Platformer2D_ChainChomp_h_21_PROLOG
#define FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_ChainChomp_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AChainChomp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_ChainChomp_h


#define FOREACH_ENUM_ECHAINCHOMPSTATE(op) \
	op(EChainChompState::Unknown) \
	op(EChainChompState::Idle) \
	op(EChainChompState::Jumping) \
	op(EChainChompState::Detached) 

enum class EChainChompState : uint8;
template<> struct TIsUEnumClass<EChainChompState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EChainChompState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
