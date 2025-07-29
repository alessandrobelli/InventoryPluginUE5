// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Composite/Inv_CompositeBase.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_CompositeBase() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORY_API UClass* Z_Construct_UClass_UInv_CompositeBase();
INVENTORY_API UClass* Z_Construct_UClass_UInv_CompositeBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_CompositeBase *******************************************************
void UInv_CompositeBase::StaticRegisterNativesUInv_CompositeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_CompositeBase;
UClass* UInv_CompositeBase::GetPrivateStaticClass()
{
	using TClass = UInv_CompositeBase;
	if (!Z_Registration_Info_UClass_UInv_CompositeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_CompositeBase"),
			Z_Registration_Info_UClass_UInv_CompositeBase.InnerSingleton,
			StaticRegisterNativesUInv_CompositeBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInv_CompositeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_CompositeBase_NoRegister()
{
	return UInv_CompositeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_CompositeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Composite/Inv_CompositeBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_CompositeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentTag_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_CompositeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FragmentTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_CompositeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_CompositeBase_Statics::NewProp_FragmentTag = { "FragmentTag", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_CompositeBase, FragmentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentTag_MetaData), NewProp_FragmentTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_CompositeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_CompositeBase_Statics::NewProp_FragmentTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_CompositeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_CompositeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_CompositeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_CompositeBase_Statics::ClassParams = {
	&UInv_CompositeBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_CompositeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_CompositeBase_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_CompositeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_CompositeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_CompositeBase()
{
	if (!Z_Registration_Info_UClass_UInv_CompositeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_CompositeBase.OuterSingleton, Z_Construct_UClass_UInv_CompositeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_CompositeBase.OuterSingleton;
}
UInv_CompositeBase::UInv_CompositeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_CompositeBase);
UInv_CompositeBase::~UInv_CompositeBase() {}
// ********** End Class UInv_CompositeBase *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_CompositeBase_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_CompositeBase, UInv_CompositeBase::StaticClass, TEXT("UInv_CompositeBase"), &Z_Registration_Info_UClass_UInv_CompositeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_CompositeBase), 1821357045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_CompositeBase_h__Script_Inventory_2501548147(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_CompositeBase_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_CompositeBase_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
