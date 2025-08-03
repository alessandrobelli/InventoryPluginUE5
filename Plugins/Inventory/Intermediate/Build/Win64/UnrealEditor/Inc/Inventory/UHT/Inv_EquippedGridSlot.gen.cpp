// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Inventory/GridSlots/Inv_EquippedGridSlot.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_EquippedGridSlot() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORY_API UClass* Z_Construct_UClass_UInv_EquippedGridSlot();
INVENTORY_API UClass* Z_Construct_UClass_UInv_EquippedGridSlot_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_EquippedSlottedItem_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_GridSlot();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEquippedGridSlotClicked **********************************************
struct Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics
{
	struct _Script_Inventory_eventEquippedGridSlotClicked_Parms
	{
		UInv_EquippedGridSlot* Slot;
		FGameplayTag EquipmentTypeTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_EquippedGridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentTypeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentTypeTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventEquippedGridSlotClicked_Parms, Slot), Z_Construct_UClass_UInv_EquippedGridSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::NewProp_EquipmentTypeTag = { "EquipmentTypeTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventEquippedGridSlotClicked_Parms, EquipmentTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentTypeTag_MetaData), NewProp_EquipmentTypeTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::NewProp_EquipmentTypeTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "EquippedGridSlotClicked__DelegateSignature", Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::_Script_Inventory_eventEquippedGridSlotClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::_Script_Inventory_eventEquippedGridSlotClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_EquippedGridSlotClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEquippedGridSlotClicked_DelegateWrapper(const FMulticastScriptDelegate& EquippedGridSlotClicked, UInv_EquippedGridSlot* Slot, FGameplayTag const& EquipmentTypeTag)
{
	struct _Script_Inventory_eventEquippedGridSlotClicked_Parms
	{
		UInv_EquippedGridSlot* Slot;
		FGameplayTag EquipmentTypeTag;
	};
	_Script_Inventory_eventEquippedGridSlotClicked_Parms Parms;
	Parms.Slot=Slot;
	Parms.EquipmentTypeTag=EquipmentTypeTag;
	EquippedGridSlotClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEquippedGridSlotClicked ************************************************

// ********** Begin Class UInv_EquippedGridSlot ****************************************************
void UInv_EquippedGridSlot::StaticRegisterNativesUInv_EquippedGridSlot()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_EquippedGridSlot;
UClass* UInv_EquippedGridSlot::GetPrivateStaticClass()
{
	using TClass = UInv_EquippedGridSlot;
	if (!Z_Registration_Info_UClass_UInv_EquippedGridSlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_EquippedGridSlot"),
			Z_Registration_Info_UClass_UInv_EquippedGridSlot.InnerSingleton,
			StaticRegisterNativesUInv_EquippedGridSlot,
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
	return Z_Registration_Info_UClass_UInv_EquippedGridSlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_EquippedGridSlot_NoRegister()
{
	return UInv_EquippedGridSlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_EquippedGridSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Inventory/GridSlots/Inv_EquippedGridSlot.h" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_EquippedGridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentTypeTag_MetaData[] = {
		{ "Categories", "GameItems.Equipment" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_EquippedGridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_GrayedOutIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_EquippedGridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedSlottedItemClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_EquippedGridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedSlottedItem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_EquippedGridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overlay_Root_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_EquippedGridSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentTypeTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_GrayedOutIcon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquippedSlottedItemClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedSlottedItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Overlay_Root;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_EquippedGridSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_EquippedGridSlot_Statics::NewProp_EquipmentTypeTag = { "EquipmentTypeTag", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_EquippedGridSlot, EquipmentTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentTypeTag_MetaData), NewProp_EquipmentTypeTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_EquippedGridSlot_Statics::NewProp_Image_GrayedOutIcon = { "Image_GrayedOutIcon", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_EquippedGridSlot, Image_GrayedOutIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_GrayedOutIcon_MetaData), NewProp_Image_GrayedOutIcon_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_EquippedGridSlot_Statics::NewProp_EquippedSlottedItemClass = { "EquippedSlottedItemClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_EquippedGridSlot, EquippedSlottedItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_EquippedSlottedItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedSlottedItemClass_MetaData), NewProp_EquippedSlottedItemClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_EquippedGridSlot_Statics::NewProp_EquippedSlottedItem = { "EquippedSlottedItem", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_EquippedGridSlot, EquippedSlottedItem), Z_Construct_UClass_UInv_EquippedSlottedItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedSlottedItem_MetaData), NewProp_EquippedSlottedItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_EquippedGridSlot_Statics::NewProp_Overlay_Root = { "Overlay_Root", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_EquippedGridSlot, Overlay_Root), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overlay_Root_MetaData), NewProp_Overlay_Root_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_EquippedGridSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_EquippedGridSlot_Statics::NewProp_EquipmentTypeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_EquippedGridSlot_Statics::NewProp_Image_GrayedOutIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_EquippedGridSlot_Statics::NewProp_EquippedSlottedItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_EquippedGridSlot_Statics::NewProp_EquippedSlottedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_EquippedGridSlot_Statics::NewProp_Overlay_Root,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquippedGridSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_EquippedGridSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInv_GridSlot,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquippedGridSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_EquippedGridSlot_Statics::ClassParams = {
	&UInv_EquippedGridSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_EquippedGridSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquippedGridSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquippedGridSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_EquippedGridSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_EquippedGridSlot()
{
	if (!Z_Registration_Info_UClass_UInv_EquippedGridSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_EquippedGridSlot.OuterSingleton, Z_Construct_UClass_UInv_EquippedGridSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_EquippedGridSlot.OuterSingleton;
}
UInv_EquippedGridSlot::UInv_EquippedGridSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_EquippedGridSlot);
UInv_EquippedGridSlot::~UInv_EquippedGridSlot() {}
// ********** End Class UInv_EquippedGridSlot ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_EquippedGridSlot, UInv_EquippedGridSlot::StaticClass, TEXT("UInv_EquippedGridSlot"), &Z_Registration_Info_UClass_UInv_EquippedGridSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_EquippedGridSlot), 3990262871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h__Script_Inventory_2004657373(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
