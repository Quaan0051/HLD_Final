// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/PlatformerGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerGameStateBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformerGameStateBase();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformerGameStateBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void APlatformerGameStateBase::StaticRegisterNativesAPlatformerGameStateBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformerGameStateBase);
	UClass* Z_Construct_UClass_APlatformerGameStateBase_NoRegister()
	{
		return APlatformerGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackOverlayAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlackOverlayAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsGameOver_MetaData[];
#endif
		static void NewProp_IsGameOver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGameOver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsGameWon_MetaData[];
#endif
		static void NewProp_IsGameWon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGameWon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameStateBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlatformerGameStateBase.h" },
		{ "ModuleRelativePath", "PlatformerGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_TimeRemaining_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "PlatformerGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameStateBase, TimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_TimeRemaining_MetaData), Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_TimeRemaining_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_BlackOverlayAlpha_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "PlatformerGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_BlackOverlayAlpha = { "BlackOverlayAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameStateBase, BlackOverlayAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_BlackOverlayAlpha_MetaData), Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_BlackOverlayAlpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameOver_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "PlatformerGameStateBase.h" },
	};
#endif
	void Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameOver_SetBit(void* Obj)
	{
		((APlatformerGameStateBase*)Obj)->IsGameOver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameOver = { "IsGameOver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlatformerGameStateBase), &Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameOver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameOver_MetaData), Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameOver_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameWon_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "PlatformerGameStateBase.h" },
	};
#endif
	void Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameWon_SetBit(void* Obj)
	{
		((APlatformerGameStateBase*)Obj)->IsGameWon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameWon = { "IsGameWon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlatformerGameStateBase), &Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameWon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameWon_MetaData), Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameWon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformerGameStateBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_TimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_BlackOverlayAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameOver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameWon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerGameStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformerGameStateBase_Statics::ClassParams = {
		&APlatformerGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatformerGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformerGameStateBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlatformerGameStateBase()
	{
		if (!Z_Registration_Info_UClass_APlatformerGameStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformerGameStateBase.OuterSingleton, Z_Construct_UClass_APlatformerGameStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformerGameStateBase.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<APlatformerGameStateBase>()
	{
		return APlatformerGameStateBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerGameStateBase);
	APlatformerGameStateBase::~APlatformerGameStateBase() {}
	struct Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformerGameStateBase, APlatformerGameStateBase::StaticClass, TEXT("APlatformerGameStateBase"), &Z_Registration_Info_UClass_APlatformerGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformerGameStateBase), 2687227917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameStateBase_h_2007209256(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
