// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoomBoom.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_BoomBoom_generated_h
#error "BoomBoom.generated.h already included, missing '#pragma once' in BoomBoom.h"
#endif
#define PLATFORMER2D_BoomBoom_generated_h

#define FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_SPARSE_DATA
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoomBoom(); \
	friend struct Z_Construct_UClass_ABoomBoom_Statics; \
public: \
	DECLARE_CLASS(ABoomBoom, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABoomBoom)


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoomBoom(ABoomBoom&&); \
	NO_API ABoomBoom(const ABoomBoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoomBoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoomBoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoomBoom) \
	NO_API virtual ~ABoomBoom();


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_22_PROLOG
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_SPARSE_DATA \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_INCLASS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ABoomBoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HLD_Final_Platformer2D_Source_Platformer2D_BoomBoom_h


#define FOREACH_ENUM_EBOOMBOOMSTATE(op) \
	op(EBoomBoomState::Unknown) \
	op(EBoomBoomState::Idle) \
	op(EBoomBoomState::Active) \
	op(EBoomBoomState::Jumping) \
	op(EBoomBoomState::Damaged) 

enum class EBoomBoomState : uint8;
template<> struct TIsUEnumClass<EBoomBoomState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EBoomBoomState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
