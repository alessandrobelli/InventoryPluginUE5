// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Inventory/HoverItem/Inv_HoverItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_HoverItem() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_HoverItem();
INVENTORY_API UClass* Z_Construct_UClass_UInv_HoverItem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_HoverItem ***********************************************************
void UInv_HoverItem::StaticRegisterNativesUInv_HoverItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_HoverItem;
UClass* UInv_HoverItem::GetPrivateStaticClass()
{
	using TClass = UInv_HoverItem;
	if (!Z_Registration_Info_UClass_UInv_HoverItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_HoverItem"),
			Z_Registration_Info_UClass_UInv_HoverItem.InnerSingleton,
			StaticRegisterNativesUInv_HoverItem,
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
	return Z_Registration_Info_UClass_UInv_HoverItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_HoverItem_NoRegister()
{
	return UInv_HoverItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_HoverItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The hover item is the item that will appear and follow the mouse\n * when an inventory item on the grid has been clicked.\n */" },
#endif
		{ "IncludePath", "Widgets/Inventory/HoverItem/Inv_HoverItem.h" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/HoverItem/Inv_HoverItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The hover item is the item that will appear and follow the mouse\nwhen an inventory item on the grid has been clicked." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Icon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/HoverItem/Inv_HoverItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_StackCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/HoverItem/Inv_HoverItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_HoverItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_HoverItem_Statics::NewProp_Image_Icon = { "Image_Icon", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_HoverItem, Image_Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Icon_MetaData), NewProp_Image_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_HoverItem_Statics::NewProp_Text_StackCount = { "Text_StackCount", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_HoverItem, Text_StackCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_StackCount_MetaData), NewProp_Text_StackCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_HoverItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_HoverItem_Statics::NewProp_Image_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_HoverItem_Statics::NewProp_Text_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HoverItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_HoverItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HoverItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_HoverItem_Statics::ClassParams = {
	&UInv_HoverItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_HoverItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HoverItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HoverItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_HoverItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_HoverItem()
{
	if (!Z_Registration_Info_UClass_UInv_HoverItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_HoverItem.OuterSingleton, Z_Construct_UClass_UInv_HoverItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_HoverItem.OuterSingleton;
}
UInv_HoverItem::UInv_HoverItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_HoverItem);
UInv_HoverItem::~UInv_HoverItem() {}
// ********** End Class UInv_HoverItem *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_HoverItem_Inv_HoverItem_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_HoverItem, UInv_HoverItem::StaticClass, TEXT("UInv_HoverItem"), &Z_Registration_Info_UClass_UInv_HoverItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_HoverItem), 76590934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_HoverItem_Inv_HoverItem_h__Script_Inventory_746502735(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_HoverItem_Inv_HoverItem_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_HoverItem_Inv_HoverItem_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
