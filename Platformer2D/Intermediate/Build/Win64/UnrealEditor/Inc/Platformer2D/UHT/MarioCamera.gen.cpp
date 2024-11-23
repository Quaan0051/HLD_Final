// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarioCamera() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCamera();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCamera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void AMarioCamera::StaticRegisterNativesAMarioCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarioCamera);
	UClass* Z_Construct_UClass_AMarioCamera_NoRegister()
	{
		return AMarioCamera::StaticClass();
	}
	struct Z_Construct_UClass_AMarioCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileMapConfinesBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMapConfinesBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarioCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCamera_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MarioCamera.h" },
		{ "ModuleRelativePath", "MarioCamera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCamera_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MarioCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCamera_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AMarioCamera_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCamera_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MarioCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCamera_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCamera, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCamera_Statics::NewProp_SphereComponent_MetaData), Z_Construct_UClass_AMarioCamera_Statics::NewProp_SphereComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCamera_Statics::NewProp_TileMapConfinesBox_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MarioCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCamera_Statics::NewProp_TileMapConfinesBox = { "TileMapConfinesBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCamera, TileMapConfinesBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCamera_Statics::NewProp_TileMapConfinesBox_MetaData), Z_Construct_UClass_AMarioCamera_Statics::NewProp_TileMapConfinesBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCamera_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCamera_Statics::NewProp_SphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCamera_Statics::NewProp_TileMapConfinesBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarioCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioCamera_Statics::ClassParams = {
		&AMarioCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMarioCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioCamera_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCamera_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMarioCamera()
	{
		if (!Z_Registration_Info_UClass_AMarioCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioCamera.OuterSingleton, Z_Construct_UClass_AMarioCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarioCamera.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AMarioCamera>()
	{
		return AMarioCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioCamera);
	AMarioCamera::~AMarioCamera() {}
	struct Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_MarioCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_MarioCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarioCamera, AMarioCamera::StaticClass, TEXT("AMarioCamera"), &Z_Registration_Info_UClass_AMarioCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioCamera), 2265098661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_MarioCamera_h_3960157247(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_MarioCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_MarioCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
