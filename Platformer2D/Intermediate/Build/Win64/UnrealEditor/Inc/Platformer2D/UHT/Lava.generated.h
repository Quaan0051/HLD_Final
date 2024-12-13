// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lava.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_Lava_generated_h
#error "Lava.generated.h already included, missing '#pragma once' in Lava.h"
#endif
#define PLATFORMER2D_Lava_generated_h

#define FID_Platformer2D_Source_Platformer2D_Lava_h_12_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_Lava_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_Lava_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_Lava_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Platformer2D_Source_Platformer2D_Lava_h_12_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_Lava_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALava(); \
	friend struct Z_Construct_UClass_ALava_Statics; \
public: \
	DECLARE_CLASS(ALava, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ALava)


#define FID_Platformer2D_Source_Platformer2D_Lava_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALava(ALava&&); \
	NO_API ALava(const ALava&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALava); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALava); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALava) \
	NO_API virtual ~ALava();


#define FID_Platformer2D_Source_Platformer2D_Lava_h_9_PROLOG
#define FID_Platformer2D_Source_Platformer2D_Lava_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_Lava_h_12_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_Lava_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_Lava_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_Lava_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_Lava_h_12_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_Lava_h_12_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_Lava_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ALava>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_Lava_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
