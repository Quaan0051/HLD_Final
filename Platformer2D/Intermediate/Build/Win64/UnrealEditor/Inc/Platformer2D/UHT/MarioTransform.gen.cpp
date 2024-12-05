// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarioTransform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioTransform();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioTransform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	DEFINE_FUNCTION(AMarioTransform::execOnFinishedPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedPlaying();
		P_NATIVE_END;
	}
	void AMarioTransform::StaticRegisterNativesAMarioTransform()
	{
		UClass* Class = AMarioTransform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFinishedPlaying", &AMarioTransform::execOnFinishedPlaying },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MarioTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarioTransform, nullptr, "OnFinishedPlaying", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarioTransform);
	UClass* Z_Construct_UClass_AMarioTransform_NoRegister()
	{
		return AMarioTransform::StaticClass();
	}
	struct Z_Construct_UClass_AMarioTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageFlipbook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarioTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMarioTransform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying, "OnFinishedPlaying" }, // 1564956064
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioTransform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MarioTransform.h" },
		{ "ModuleRelativePath", "MarioTransform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioTransform_Statics::NewProp_FlipbookComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Flipbook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MarioTransform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioTransform_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioTransform, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::NewProp_FlipbookComponent_MetaData), Z_Construct_UClass_AMarioTransform_Statics::NewProp_FlipbookComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioTransform_Statics::NewProp_TransformFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioTransform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioTransform_Statics::NewProp_TransformFlipbook = { "TransformFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioTransform, TransformFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::NewProp_TransformFlipbook_MetaData), Z_Construct_UClass_AMarioTransform_Statics::NewProp_TransformFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioTransform_Statics::NewProp_DamageFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioTransform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioTransform_Statics::NewProp_DamageFlipbook = { "DamageFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioTransform, DamageFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::NewProp_DamageFlipbook_MetaData), Z_Construct_UClass_AMarioTransform_Statics::NewProp_DamageFlipbook_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioTransform_Statics::NewProp_FlipbookComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioTransform_Statics::NewProp_TransformFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioTransform_Statics::NewProp_DamageFlipbook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarioTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioTransform_Statics::ClassParams = {
		&AMarioTransform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMarioTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioTransform_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMarioTransform()
	{
		if (!Z_Registration_Info_UClass_AMarioTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioTransform.OuterSingleton, Z_Construct_UClass_AMarioTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarioTransform.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AMarioTransform>()
	{
		return AMarioTransform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioTransform);
	AMarioTransform::~AMarioTransform() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioTransform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarioTransform, AMarioTransform::StaticClass, TEXT("AMarioTransform"), &Z_Registration_Info_UClass_AMarioTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioTransform), 3656492342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioTransform_h_3467651284(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioTransform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
