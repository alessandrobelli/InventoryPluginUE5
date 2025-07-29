// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Composite/Inv_Leaf_Text.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_Leaf_Text() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf_Text();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf_Text_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_Leaf_Text ***********************************************************
void UInv_Leaf_Text::StaticRegisterNativesUInv_Leaf_Text()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_Leaf_Text;
UClass* UInv_Leaf_Text::GetPrivateStaticClass()
{
	using TClass = UInv_Leaf_Text;
	if (!Z_Registration_Info_UClass_UInv_Leaf_Text.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_Leaf_Text"),
			Z_Registration_Info_UClass_UInv_Leaf_Text.InnerSingleton,
			StaticRegisterNativesUInv_Leaf_Text,
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
	return Z_Registration_Info_UClass_UInv_Leaf_Text.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_Leaf_Text_NoRegister()
{
	return UInv_Leaf_Text::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_Leaf_Text_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Composite/Inv_Leaf_Text.h" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf_Text.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_LeafText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf_Text.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf_Text.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_LeafText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_Leaf_Text>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_Leaf_Text_Statics::NewProp_Text_LeafText = { "Text_LeafText", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_Leaf_Text, Text_LeafText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_LeafText_MetaData), NewProp_Text_LeafText_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_Leaf_Text_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_Leaf_Text, FontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontSize_MetaData), NewProp_FontSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_Leaf_Text_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_Leaf_Text_Statics::NewProp_Text_LeafText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_Leaf_Text_Statics::NewProp_FontSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_Text_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_Leaf_Text_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInv_Leaf,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_Text_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_Leaf_Text_Statics::ClassParams = {
	&UInv_Leaf_Text::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_Leaf_Text_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_Text_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_Text_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_Leaf_Text_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_Leaf_Text()
{
	if (!Z_Registration_Info_UClass_UInv_Leaf_Text.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_Leaf_Text.OuterSingleton, Z_Construct_UClass_UInv_Leaf_Text_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_Leaf_Text.OuterSingleton;
}
UInv_Leaf_Text::UInv_Leaf_Text(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_Leaf_Text);
UInv_Leaf_Text::~UInv_Leaf_Text() {}
// ********** End Class UInv_Leaf_Text *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_Text_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_Leaf_Text, UInv_Leaf_Text::StaticClass, TEXT("UInv_Leaf_Text"), &Z_Registration_Info_UClass_UInv_Leaf_Text, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_Leaf_Text), 1876038557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_Text_h__Script_Inventory_3377770341(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_Text_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_Text_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
