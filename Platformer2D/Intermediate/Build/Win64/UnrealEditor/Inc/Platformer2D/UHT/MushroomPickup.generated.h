// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MushroomPickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_MushroomPickup_generated_h
#error "MushroomPickup.generated.h already included, missing '#pragma once' in MushroomPickup.h"
#endif
#define PLATFORMER2D_MushroomPickup_generated_h

#define FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBackwardOverlap); \
	DECLARE_FUNCTION(execOnForwardOverlap);


#define FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMushroomPickup(); \
	friend struct Z_Construct_UClass_AMushroomPickup_Statics; \
public: \
	DECLARE_CLASS(AMushroomPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AMushroomPickup)


#define FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMushroomPickup(AMushroomPickup&&); \
	NO_API AMushroomPickup(const AMushroomPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMushroomPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMushroomPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMushroomPickup) \
	NO_API virtual ~AMushroomPickup();


#define FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_12_PROLOG
#define FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AMushroomPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_MushroomPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
