// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RotoDisc.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_RotoDisc_generated_h
#error "RotoDisc.generated.h already included, missing '#pragma once' in RotoDisc.h"
#endif
#define PLATFORMER2D_RotoDisc_generated_h

#define FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARotoDisc(); \
	friend struct Z_Construct_UClass_ARotoDisc_Statics; \
public: \
	DECLARE_CLASS(ARotoDisc, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ARotoDisc)


#define FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARotoDisc(ARotoDisc&&); \
	NO_API ARotoDisc(const ARotoDisc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARotoDisc); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARotoDisc); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARotoDisc) \
	NO_API virtual ~ARotoDisc();


#define FID_Platformer2D_Source_Platformer2D_RotoDisc_h_16_PROLOG
#define FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_RotoDisc_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ARotoDisc>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_RotoDisc_h


#define FOREACH_ENUM_EROTODISCDIRECTION(op) \
	op(ERotoDiscDirection::Clockwise) \
	op(ERotoDiscDirection::CounterClockwise) 

enum class ERotoDiscDirection : uint8;
template<> struct TIsUEnumClass<ERotoDiscDirection> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<ERotoDiscDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
