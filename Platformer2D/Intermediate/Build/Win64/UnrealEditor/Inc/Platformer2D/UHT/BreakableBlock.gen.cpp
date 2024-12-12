// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/BreakableBlock.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakableBlock() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlock();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlock_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlockBit_NoRegister();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EBreakableBlockState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBreakableBlockState;
	static UEnum* EBreakableBlockState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBreakableBlockState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBreakableBlockState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EBreakableBlockState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EBreakableBlockState"));
		}
		return Z_Registration_Info_UEnum_EBreakableBlockState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EBreakableBlockState>()
	{
		return EBreakableBlockState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::Enumerators[] = {
		{ "EBreakableBlockState::Unknown", (int64)EBreakableBlockState::Unknown },
		{ "EBreakableBlockState::Active", (int64)EBreakableBlockState::Active },
		{ "EBreakableBlockState::AnimUp", (int64)EBreakableBlockState::AnimUp },
		{ "EBreakableBlockState::AnimDown", (int64)EBreakableBlockState::AnimDown },
		{ "EBreakableBlockState::Breaking", (int64)EBreakableBlockState::Breaking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EBreakableBlockState::Active" },
		{ "AnimDown.DisplayName", "AnimDown" },
		{ "AnimDown.Name", "EBreakableBlockState::AnimDown" },
		{ "AnimUp.DisplayName", "AnimUp" },
		{ "AnimUp.Name", "EBreakableBlockState::AnimUp" },
		{ "BlueprintType", "true" },
		{ "Breaking.DisplayName", "Breaking" },
		{ "Breaking.Name", "EBreakableBlockState::Breaking" },
		{ "ModuleRelativePath", "BreakableBlock.h" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EBreakableBlockState::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EBreakableBlockState",
		"EBreakableBlockState",
		Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EBreakableBlockState()
	{
		if (!Z_Registration_Info_UEnum_EBreakableBlockState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBreakableBlockState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBreakableBlockState.InnerSingleton;
	}
	DEFINE_FUNCTION(ABreakableBlock::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ABreakableBlock::StaticRegisterNativesABreakableBlock()
	{
		UClass* Class = ABreakableBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ABreakableBlock::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABreakableBlock_OnHit_Statics
	{
		struct BreakableBlock_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BreakableBlock_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BreakableBlock_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BreakableBlock_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BreakableBlock_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BreakableBlock_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableBlock, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::BreakableBlock_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::BreakableBlock_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABreakableBlock_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABreakableBlock);
	UClass* Z_Construct_UClass_ABreakableBlock_NoRegister()
	{
		return ABreakableBlock::StaticClass();
	}
	struct Z_Construct_UClass_ABreakableBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakableBlockBitTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BreakableBlockBitTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreakableBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABreakableBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABreakableBlock_OnHit, "OnHit" }, // 4280545924
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BreakableBlock.h" },
		{ "ModuleRelativePath", "BreakableBlock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableBlock.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlock, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BoxComponent_MetaData), Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BoxComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBlock_Statics::NewProp_FlipbookComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableBlock.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlock_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlock, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::NewProp_FlipbookComponent_MetaData), Z_Construct_UClass_ABreakableBlock_Statics::NewProp_FlipbookComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BreakableBlockBitTemplate_MetaData[] = {
		{ "Category", "BreakableBlock Templates" },
		{ "ModuleRelativePath", "BreakableBlock.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BreakableBlockBitTemplate = { "BreakableBlockBitTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlock, BreakableBlockBitTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_ABreakableBlockBit_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BreakableBlockBitTemplate_MetaData), Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BreakableBlockBitTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlock_Statics::NewProp_FlipbookComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BreakableBlockBitTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreakableBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABreakableBlock_Statics::ClassParams = {
		&ABreakableBlock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABreakableBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_ABreakableBlock_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABreakableBlock()
	{
		if (!Z_Registration_Info_UClass_ABreakableBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABreakableBlock.OuterSingleton, Z_Construct_UClass_ABreakableBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABreakableBlock.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ABreakableBlock>()
	{
		return ABreakableBlock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableBlock);
	ABreakableBlock::~ABreakableBlock() {}
	struct Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_Statics::EnumInfo[] = {
		{ EBreakableBlockState_StaticEnum, TEXT("EBreakableBlockState"), &Z_Registration_Info_UEnum_EBreakableBlockState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1614724440U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABreakableBlock, ABreakableBlock::StaticClass, TEXT("ABreakableBlock"), &Z_Registration_Info_UClass_ABreakableBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABreakableBlock), 1944312403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_1898074049(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BreakableBlock_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
