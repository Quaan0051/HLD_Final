// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarioController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioController();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void AMarioController::StaticRegisterNativesAMarioController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarioController);
	UClass* Z_Construct_UClass_AMarioController_NoRegister()
	{
		return AMarioController::StaticClass();
	}
	struct Z_Construct_UClass_AMarioController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RunInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DuckInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DuckInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarioController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MarioController.h" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AMarioController_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioController_Statics::NewProp_MoveInputAction_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_MoveInputAction = { "MoveInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, MoveInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::NewProp_MoveInputAction_MetaData), Z_Construct_UClass_AMarioController_Statics::NewProp_MoveInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioController_Statics::NewProp_RunInputAction_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_RunInputAction = { "RunInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, RunInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::NewProp_RunInputAction_MetaData), Z_Construct_UClass_AMarioController_Statics::NewProp_RunInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioController_Statics::NewProp_JumpInputAction_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_JumpInputAction = { "JumpInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, JumpInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::NewProp_JumpInputAction_MetaData), Z_Construct_UClass_AMarioController_Statics::NewProp_JumpInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioController_Statics::NewProp_DuckInputAction_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_DuckInputAction = { "DuckInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, DuckInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::NewProp_DuckInputAction_MetaData), Z_Construct_UClass_AMarioController_Statics::NewProp_DuckInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioController_Statics::NewProp_UpInputAction_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_UpInputAction = { "UpInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, UpInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::NewProp_UpInputAction_MetaData), Z_Construct_UClass_AMarioController_Statics::NewProp_UpInputAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_MoveInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_RunInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_JumpInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_DuckInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_UpInputAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarioController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioController_Statics::ClassParams = {
		&AMarioController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMarioController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMarioController()
	{
		if (!Z_Registration_Info_UClass_AMarioController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioController.OuterSingleton, Z_Construct_UClass_AMarioController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarioController.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AMarioController>()
	{
		return AMarioController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioController);
	AMarioController::~AMarioController() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarioController, AMarioController::StaticClass, TEXT("AMarioController"), &Z_Registration_Info_UClass_AMarioController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioController), 898972521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioController_h_3575967789(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
