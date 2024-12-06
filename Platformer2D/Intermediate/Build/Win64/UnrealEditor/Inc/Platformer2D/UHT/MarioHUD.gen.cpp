// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarioHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioHUD();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioHUD_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void AMarioHUD::StaticRegisterNativesAMarioHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarioHUD);
	UClass* Z_Construct_UClass_AMarioHUD_NoRegister()
	{
		return AMarioHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMarioHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarioHUDWidgetTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MarioHUDWidgetTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarioHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MarioHUD.h" },
		{ "ModuleRelativePath", "MarioHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioHUD_Statics::NewProp_MarioHUDWidgetTemplate_MetaData[] = {
		{ "Category", "Widget templates" },
		{ "ModuleRelativePath", "MarioHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMarioHUD_Statics::NewProp_MarioHUDWidgetTemplate = { "MarioHUDWidgetTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioHUD, MarioHUDWidgetTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioHUD_Statics::NewProp_MarioHUDWidgetTemplate_MetaData), Z_Construct_UClass_AMarioHUD_Statics::NewProp_MarioHUDWidgetTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioHUD_Statics::NewProp_MarioHUDWidgetTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarioHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioHUD_Statics::ClassParams = {
		&AMarioHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMarioHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMarioHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMarioHUD()
	{
		if (!Z_Registration_Info_UClass_AMarioHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioHUD.OuterSingleton, Z_Construct_UClass_AMarioHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarioHUD.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AMarioHUD>()
	{
		return AMarioHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioHUD);
	AMarioHUD::~AMarioHUD() {}
	struct Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_MarioHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_MarioHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarioHUD, AMarioHUD::StaticClass, TEXT("AMarioHUD"), &Z_Registration_Info_UClass_AMarioHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioHUD), 538738118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_MarioHUD_h_4256785915(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_MarioHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_MarioHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
