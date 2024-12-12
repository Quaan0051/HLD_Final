// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DonutLift.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_DonutLift_generated_h
#error "DonutLift.generated.h already included, missing '#pragma once' in DonutLift.h"
#endif
#define PLATFORMER2D_DonutLift_generated_h

#define FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_SPARSE_DATA
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADonutLift(); \
	friend struct Z_Construct_UClass_ADonutLift_Statics; \
public: \
	DECLARE_CLASS(ADonutLift, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ADonutLift)


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADonutLift(ADonutLift&&); \
	NO_API ADonutLift(const ADonutLift&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADonutLift); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADonutLift); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADonutLift) \
	NO_API virtual ~ADonutLift();


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_18_PROLOG
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_SPARSE_DATA \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_INCLASS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ADonutLift>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HLD_Final_Platformer2D_Source_Platformer2D_DonutLift_h


#define FOREACH_ENUM_EDONUTLIFTSTATE(op) \
	op(EDonutLiftState::Unknown) \
	op(EDonutLiftState::Inactive) \
	op(EDonutLiftState::Active) \
	op(EDonutLiftState::Falling) 

enum class EDonutLiftState : uint8;
template<> struct TIsUEnumClass<EDonutLiftState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EDonutLiftState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
