// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Inventory/SlottedItems/Inv_EquippedSlottedItem.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_EquippedSlottedItem() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORY_API UClass* Z_Construct_UClass_UInv_EquippedSlottedItem();
INVENTORY_API UClass* Z_Construct_UClass_UInv_EquippedSlottedItem_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_SlottedItem();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEquippedSlottedItemClicked *******************************************
struct Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics
{
	struct _Script_Inventory_eventEquippedSlottedItemClicked_Parms
	{
		UInv_EquippedSlottedItem* SlottedItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/SlottedItems/Inv_EquippedSlottedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlottedItem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlottedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::NewProp_SlottedItem = { "SlottedItem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventEquippedSlottedItemClicked_Parms, SlottedItem), Z_Construct_UClass_UInv_EquippedSlottedItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlottedItem_MetaData), NewProp_SlottedItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::NewProp_SlottedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "EquippedSlottedItemClicked__DelegateSignature", Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::_Script_Inventory_eventEquippedSlottedItemClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::_Script_Inventory_eventEquippedSlottedItemClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_EquippedSlottedItemClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEquippedSlottedItemClicked_DelegateWrapper(const FMulticastScriptDelegate& EquippedSlottedItemClicked, UInv_EquippedSlottedItem* SlottedItem)
{
	struct _Script_Inventory_eventEquippedSlottedItemClicked_Parms
	{
		UInv_EquippedSlottedItem* SlottedItem;
	};
	_Script_Inventory_eventEquippedSlottedItemClicked_Parms Parms;
	Parms.SlottedItem=SlottedItem;
	EquippedSlottedItemClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEquippedSlottedItemClicked *********************************************

// ********** Begin Class UInv_EquippedSlottedItem *************************************************
void UInv_EquippedSlottedItem::StaticRegisterNativesUInv_EquippedSlottedItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_EquippedSlottedItem;
UClass* UInv_EquippedSlottedItem::GetPrivateStaticClass()
{
	using TClass = UInv_EquippedSlottedItem;
	if (!Z_Registration_Info_UClass_UInv_EquippedSlottedItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_EquippedSlottedItem"),
			Z_Registration_Info_UClass_UInv_EquippedSlottedItem.InnerSingleton,
			StaticRegisterNativesUInv_EquippedSlottedItem,
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
	return Z_Registration_Info_UClass_UInv_EquippedSlottedItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_EquippedSlottedItem_NoRegister()
{
	return UInv_EquippedSlottedItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_EquippedSlottedItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Inventory/SlottedItems/Inv_EquippedSlottedItem.h" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/SlottedItems/Inv_EquippedSlottedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentTypeTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/SlottedItems/Inv_EquippedSlottedItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentTypeTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_EquippedSlottedItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::NewProp_EquipmentTypeTag = { "EquipmentTypeTag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_EquippedSlottedItem, EquipmentTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentTypeTag_MetaData), NewProp_EquipmentTypeTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::NewProp_EquipmentTypeTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInv_SlottedItem,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::ClassParams = {
	&UInv_EquippedSlottedItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_EquippedSlottedItem()
{
	if (!Z_Registration_Info_UClass_UInv_EquippedSlottedItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_EquippedSlottedItem.OuterSingleton, Z_Construct_UClass_UInv_EquippedSlottedItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_EquippedSlottedItem.OuterSingleton;
}
UInv_EquippedSlottedItem::UInv_EquippedSlottedItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_EquippedSlottedItem);
UInv_EquippedSlottedItem::~UInv_EquippedSlottedItem() {}
// ********** End Class UInv_EquippedSlottedItem ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_EquippedSlottedItem, UInv_EquippedSlottedItem::StaticClass, TEXT("UInv_EquippedSlottedItem"), &Z_Registration_Info_UClass_UInv_EquippedSlottedItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_EquippedSlottedItem), 2565066223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h__Script_Inventory_817937015(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
