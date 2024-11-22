// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_ItemBox_generated_h
#error "ItemBox.generated.h already included, missing '#pragma once' in ItemBox.h"
#endif
#define PLATFORMER2D_ItemBox_generated_h

#define FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_SPARSE_DATA
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBox(); \
	friend struct Z_Construct_UClass_AItemBox_Statics; \
public: \
	DECLARE_CLASS(AItemBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AItemBox)


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBox(AItemBox&&); \
	NO_API AItemBox(const AItemBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBox) \
	NO_API virtual ~AItemBox();


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_32_PROLOG
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_SPARSE_DATA \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_INCLASS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AItemBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h


#define FOREACH_ENUM_EITEMBOXSTATE(op) \
	op(EItemBoxState::Unknown) \
	op(EItemBoxState::Active) \
	op(EItemBoxState::AnimUp) \
	op(EItemBoxState::AnimDown) \
	op(EItemBoxState::Spawning) \
	op(EItemBoxState::Inactive) 

enum class EItemBoxState : uint8;
template<> struct TIsUEnumClass<EItemBoxState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EItemBoxState>();

#define FOREACH_ENUM_EITEMBOXCONTENTS(op) \
	op(EItemBoxContents::Coin1) \
	op(EItemBoxContents::Coin5) \
	op(EItemBoxContents::Coin10) \
	op(EItemBoxContents::Mushroom) \
	op(EItemBoxContents::CoinSwitch) 

enum class EItemBoxContents : uint8;
template<> struct TIsUEnumClass<EItemBoxContents> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EItemBoxContents>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
