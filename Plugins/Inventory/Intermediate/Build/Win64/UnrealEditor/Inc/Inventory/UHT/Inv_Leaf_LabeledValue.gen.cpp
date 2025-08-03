// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Composite/Inv_Leaf_LabeledValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_Leaf_LabeledValue() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf_LabeledValue();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf_LabeledValue_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_Leaf_LabeledValue ***************************************************
void UInv_Leaf_LabeledValue::StaticRegisterNativesUInv_Leaf_LabeledValue()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_Leaf_LabeledValue;
UClass* UInv_Leaf_LabeledValue::GetPrivateStaticClass()
{
	using TClass = UInv_Leaf_LabeledValue;
	if (!Z_Registration_Info_UClass_UInv_Leaf_LabeledValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_Leaf_LabeledValue"),
			Z_Registration_Info_UClass_UInv_Leaf_LabeledValue.InnerSingleton,
			StaticRegisterNativesUInv_Leaf_LabeledValue,
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
	return Z_Registration_Info_UClass_UInv_Leaf_LabeledValue.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_Leaf_LabeledValue_NoRegister()
{
	return UInv_Leaf_LabeledValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Composite/Inv_Leaf_LabeledValue.h" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf_LabeledValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Value_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf_LabeledValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Label_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf_LabeledValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_Label_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf_LabeledValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_Value_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf_LabeledValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Label;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize_Label;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_Leaf_LabeledValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::NewProp_Text_Value = { "Text_Value", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_Leaf_LabeledValue, Text_Value), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Value_MetaData), NewProp_Text_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::NewProp_Text_Label = { "Text_Label", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_Leaf_LabeledValue, Text_Label), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Label_MetaData), NewProp_Text_Label_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::NewProp_FontSize_Label = { "FontSize_Label", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_Leaf_LabeledValue, FontSize_Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontSize_Label_MetaData), NewProp_FontSize_Label_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::NewProp_FontSize_Value = { "FontSize_Value", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_Leaf_LabeledValue, FontSize_Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontSize_Value_MetaData), NewProp_FontSize_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::NewProp_Text_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::NewProp_Text_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::NewProp_FontSize_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::NewProp_FontSize_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInv_Leaf,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::ClassParams = {
	&UInv_Leaf_LabeledValue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_Leaf_LabeledValue()
{
	if (!Z_Registration_Info_UClass_UInv_Leaf_LabeledValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_Leaf_LabeledValue.OuterSingleton, Z_Construct_UClass_UInv_Leaf_LabeledValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_Leaf_LabeledValue.OuterSingleton;
}
UInv_Leaf_LabeledValue::UInv_Leaf_LabeledValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_Leaf_LabeledValue);
UInv_Leaf_LabeledValue::~UInv_Leaf_LabeledValue() {}
// ********** End Class UInv_Leaf_LabeledValue *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_LabeledValue_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_Leaf_LabeledValue, UInv_Leaf_LabeledValue::StaticClass, TEXT("UInv_Leaf_LabeledValue"), &Z_Registration_Info_UClass_UInv_Leaf_LabeledValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_Leaf_LabeledValue), 739508959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_LabeledValue_h__Script_Inventory_3528628910(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_LabeledValue_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_LabeledValue_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
