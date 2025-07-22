// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Inventory/SlottedItems/Inv_SlottedItem.h"
#include "Input/Events.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_SlottedItem() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_SlottedItem();
INVENTORY_API UClass* Z_Construct_UClass_UInv_SlottedItem_NoRegister();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSlottedItemClicked ***************************************************
struct Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics
{
	struct _Script_Inventory_eventSlottedItemClicked_Parms
	{
		int32 GridIndex;
		FPointerEvent MouseEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/SlottedItems/Inv_SlottedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventSlottedItemClicked_Parms, GridIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventSlottedItemClicked_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseEvent_MetaData), NewProp_MouseEvent_MetaData) }; // 1462487918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::NewProp_GridIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::NewProp_MouseEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "SlottedItemClicked__DelegateSignature", Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::_Script_Inventory_eventSlottedItemClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::_Script_Inventory_eventSlottedItemClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_SlottedItemClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSlottedItemClicked_DelegateWrapper(const FMulticastScriptDelegate& SlottedItemClicked, int32 GridIndex, FPointerEvent const& MouseEvent)
{
	struct _Script_Inventory_eventSlottedItemClicked_Parms
	{
		int32 GridIndex;
		FPointerEvent MouseEvent;
	};
	_Script_Inventory_eventSlottedItemClicked_Parms Parms;
	Parms.GridIndex=GridIndex;
	Parms.MouseEvent=MouseEvent;
	SlottedItemClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSlottedItemClicked *****************************************************

// ********** Begin Class UInv_SlottedItem *********************************************************
void UInv_SlottedItem::StaticRegisterNativesUInv_SlottedItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_SlottedItem;
UClass* UInv_SlottedItem::GetPrivateStaticClass()
{
	using TClass = UInv_SlottedItem;
	if (!Z_Registration_Info_UClass_UInv_SlottedItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_SlottedItem"),
			Z_Registration_Info_UClass_UInv_SlottedItem.InnerSingleton,
			StaticRegisterNativesUInv_SlottedItem,
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
	return Z_Registration_Info_UClass_UInv_SlottedItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_SlottedItem_NoRegister()
{
	return UInv_SlottedItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_SlottedItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Inventory/SlottedItems/Inv_SlottedItem.h" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/SlottedItems/Inv_SlottedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Icon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/SlottedItems/Inv_SlottedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_StackCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/SlottedItems/Inv_SlottedItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_SlottedItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SlottedItem_Statics::NewProp_Image_Icon = { "Image_Icon", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SlottedItem, Image_Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Icon_MetaData), NewProp_Image_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SlottedItem_Statics::NewProp_Text_StackCount = { "Text_StackCount", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SlottedItem, Text_StackCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_StackCount_MetaData), NewProp_Text_StackCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_SlottedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SlottedItem_Statics::NewProp_Image_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SlottedItem_Statics::NewProp_Text_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SlottedItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_SlottedItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SlottedItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_SlottedItem_Statics::ClassParams = {
	&UInv_SlottedItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_SlottedItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SlottedItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SlottedItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_SlottedItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_SlottedItem()
{
	if (!Z_Registration_Info_UClass_UInv_SlottedItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_SlottedItem.OuterSingleton, Z_Construct_UClass_UInv_SlottedItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_SlottedItem.OuterSingleton;
}
UInv_SlottedItem::UInv_SlottedItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_SlottedItem);
UInv_SlottedItem::~UInv_SlottedItem() {}
// ********** End Class UInv_SlottedItem ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_SlottedItem, UInv_SlottedItem::StaticClass, TEXT("UInv_SlottedItem"), &Z_Registration_Info_UClass_UInv_SlottedItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_SlottedItem), 3088291323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h__Script_Inventory_3023679208(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
