// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryManagement/Components/Inv_InventoryComponent.h"
#include "InventoryManagement/FastArray/Inv_FastArray.h"
#include "Types/Inv_GridTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_InventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryBase_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_NoRoomInInventory__DelegateSignature();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_InventoryFastArray();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FInventoryItemChange **************************************************
struct Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics
{
	struct _Script_Inventory_eventInventoryItemChange_Parms
	{
		UInv_InventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventInventoryItemChange_Parms, Item), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "InventoryItemChange__DelegateSignature", Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::_Script_Inventory_eventInventoryItemChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::_Script_Inventory_eventInventoryItemChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_InventoryItemChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventoryItemChange_DelegateWrapper(const FMulticastScriptDelegate& InventoryItemChange, UInv_InventoryItem* Item)
{
	struct _Script_Inventory_eventInventoryItemChange_Parms
	{
		UInv_InventoryItem* Item;
	};
	_Script_Inventory_eventInventoryItemChange_Parms Parms;
	Parms.Item=Item;
	InventoryItemChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FInventoryItemChange ****************************************************

// ********** Begin Delegate FNoRoomInInventory ****************************************************
struct Z_Construct_UDelegateFunction_Inventory_NoRoomInInventory__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_NoRoomInInventory__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "NoRoomInInventory__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_NoRoomInInventory__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_NoRoomInInventory__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Inventory_NoRoomInInventory__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_NoRoomInInventory__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNoRoomInInventory_DelegateWrapper(const FMulticastScriptDelegate& NoRoomInInventory)
{
	NoRoomInInventory.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FNoRoomInInventory ******************************************************

// ********** Begin Delegate FStackChange **********************************************************
struct Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics
{
	struct _Script_Inventory_eventStackChange_Parms
	{
		FInv_SlotAvailabilityResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventStackChange_Parms, Result), Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 412004226
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "StackChange__DelegateSignature", Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::_Script_Inventory_eventStackChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::_Script_Inventory_eventStackChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_StackChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStackChange_DelegateWrapper(const FMulticastScriptDelegate& StackChange, FInv_SlotAvailabilityResult const& Result)
{
	struct _Script_Inventory_eventStackChange_Parms
	{
		FInv_SlotAvailabilityResult Result;
	};
	_Script_Inventory_eventStackChange_Parms Parms;
	Parms.Result=Result;
	StackChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FStackChange ************************************************************

// ********** Begin Delegate FItemEquippedStatusChanged ********************************************
struct Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics
{
	struct _Script_Inventory_eventItemEquippedStatusChanged_Parms
	{
		UInv_InventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventItemEquippedStatusChanged_Parms, Item), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "ItemEquippedStatusChanged__DelegateSignature", Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::_Script_Inventory_eventItemEquippedStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::_Script_Inventory_eventItemEquippedStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_ItemEquippedStatusChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FItemEquippedStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& ItemEquippedStatusChanged, UInv_InventoryItem* Item)
{
	struct _Script_Inventory_eventItemEquippedStatusChanged_Parms
	{
		UInv_InventoryItem* Item;
	};
	_Script_Inventory_eventItemEquippedStatusChanged_Parms Parms;
	Parms.Item=Item;
	ItemEquippedStatusChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FItemEquippedStatusChanged **********************************************

// ********** Begin Delegate FInventoryMenuToggle **************************************************
struct Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics
{
	struct _Script_Inventory_eventInventoryMenuToggle_Parms
	{
		bool bOpen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::NewProp_bOpen_SetBit(void* Obj)
{
	((_Script_Inventory_eventInventoryMenuToggle_Parms*)Obj)->bOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::NewProp_bOpen = { "bOpen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Inventory_eventInventoryMenuToggle_Parms), &Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::NewProp_bOpen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::NewProp_bOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "InventoryMenuToggle__DelegateSignature", Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::_Script_Inventory_eventInventoryMenuToggle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::_Script_Inventory_eventInventoryMenuToggle_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_InventoryMenuToggle__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventoryMenuToggle_DelegateWrapper(const FMulticastScriptDelegate& InventoryMenuToggle, bool bOpen)
{
	struct _Script_Inventory_eventInventoryMenuToggle_Parms
	{
		bool bOpen;
	};
	_Script_Inventory_eventInventoryMenuToggle_Parms Parms;
	Parms.bOpen=bOpen ? true : false;
	InventoryMenuToggle.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FInventoryMenuToggle ****************************************************

// ********** Begin Class UInv_InventoryComponent Function Multicast_EquipSlotClicked **************
struct Inv_InventoryComponent_eventMulticast_EquipSlotClicked_Parms
{
	UInv_InventoryItem* ItemToEquip;
	UInv_InventoryItem* ItemToUnequip;
};
static FName NAME_UInv_InventoryComponent_Multicast_EquipSlotClicked = FName(TEXT("Multicast_EquipSlotClicked"));
void UInv_InventoryComponent::Multicast_EquipSlotClicked(UInv_InventoryItem* ItemToEquip, UInv_InventoryItem* ItemToUnequip)
{
	Inv_InventoryComponent_eventMulticast_EquipSlotClicked_Parms Parms;
	Parms.ItemToEquip=ItemToEquip;
	Parms.ItemToUnequip=ItemToUnequip;
	UFunction* Func = FindFunctionChecked(NAME_UInv_InventoryComponent_Multicast_EquipSlotClicked);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToEquip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToUnequip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::NewProp_ItemToEquip = { "ItemToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventMulticast_EquipSlotClicked_Parms, ItemToEquip), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::NewProp_ItemToUnequip = { "ItemToUnequip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventMulticast_EquipSlotClicked_Parms, ItemToUnequip), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::NewProp_ItemToEquip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::NewProp_ItemToUnequip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryComponent, nullptr, "Multicast_EquipSlotClicked", Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::PropPointers), sizeof(Inv_InventoryComponent_eventMulticast_EquipSlotClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inv_InventoryComponent_eventMulticast_EquipSlotClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryComponent::execMulticast_EquipSlotClicked)
{
	P_GET_OBJECT(UInv_InventoryItem,Z_Param_ItemToEquip);
	P_GET_OBJECT(UInv_InventoryItem,Z_Param_ItemToUnequip);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_EquipSlotClicked_Implementation(Z_Param_ItemToEquip,Z_Param_ItemToUnequip);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryComponent Function Multicast_EquipSlotClicked ****************

// ********** Begin Class UInv_InventoryComponent Function Server_AddNewItem ***********************
struct Inv_InventoryComponent_eventServer_AddNewItem_Parms
{
	UInv_ItemComponent* ItemComponent;
	int32 StackCount;
	int32 Remainder;
};
static FName NAME_UInv_InventoryComponent_Server_AddNewItem = FName(TEXT("Server_AddNewItem"));
void UInv_InventoryComponent::Server_AddNewItem(UInv_ItemComponent* ItemComponent, int32 StackCount, int32 Remainder)
{
	Inv_InventoryComponent_eventServer_AddNewItem_Parms Parms;
	Parms.ItemComponent=ItemComponent;
	Parms.StackCount=StackCount;
	Parms.Remainder=Remainder;
	UFunction* Func = FindFunctionChecked(NAME_UInv_InventoryComponent_Server_AddNewItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Remainder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::NewProp_ItemComponent = { "ItemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventServer_AddNewItem_Parms, ItemComponent), Z_Construct_UClass_UInv_ItemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemComponent_MetaData), NewProp_ItemComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventServer_AddNewItem_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::NewProp_Remainder = { "Remainder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventServer_AddNewItem_Parms, Remainder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::NewProp_ItemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::NewProp_Remainder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryComponent, nullptr, "Server_AddNewItem", Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::PropPointers), sizeof(Inv_InventoryComponent_eventServer_AddNewItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inv_InventoryComponent_eventServer_AddNewItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryComponent::execServer_AddNewItem)
{
	P_GET_OBJECT(UInv_ItemComponent,Z_Param_ItemComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_GET_PROPERTY(FIntProperty,Z_Param_Remainder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_AddNewItem_Implementation(Z_Param_ItemComponent,Z_Param_StackCount,Z_Param_Remainder);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryComponent Function Server_AddNewItem *************************

// ********** Begin Class UInv_InventoryComponent Function Server_AddStacksToItem ******************
struct Inv_InventoryComponent_eventServer_AddStacksToItem_Parms
{
	UInv_ItemComponent* ItemComponent;
	int32 StackCount;
	int32 Remainder;
};
static FName NAME_UInv_InventoryComponent_Server_AddStacksToItem = FName(TEXT("Server_AddStacksToItem"));
void UInv_InventoryComponent::Server_AddStacksToItem(UInv_ItemComponent* ItemComponent, int32 StackCount, int32 Remainder)
{
	Inv_InventoryComponent_eventServer_AddStacksToItem_Parms Parms;
	Parms.ItemComponent=ItemComponent;
	Parms.StackCount=StackCount;
	Parms.Remainder=Remainder;
	UFunction* Func = FindFunctionChecked(NAME_UInv_InventoryComponent_Server_AddStacksToItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Remainder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::NewProp_ItemComponent = { "ItemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventServer_AddStacksToItem_Parms, ItemComponent), Z_Construct_UClass_UInv_ItemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemComponent_MetaData), NewProp_ItemComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventServer_AddStacksToItem_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::NewProp_Remainder = { "Remainder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventServer_AddStacksToItem_Parms, Remainder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::NewProp_ItemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::NewProp_Remainder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryComponent, nullptr, "Server_AddStacksToItem", Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::PropPointers), sizeof(Inv_InventoryComponent_eventServer_AddStacksToItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inv_InventoryComponent_eventServer_AddStacksToItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryComponent::execServer_AddStacksToItem)
{
	P_GET_OBJECT(UInv_ItemComponent,Z_Param_ItemComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_GET_PROPERTY(FIntProperty,Z_Param_Remainder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_AddStacksToItem_Implementation(Z_Param_ItemComponent,Z_Param_StackCount,Z_Param_Remainder);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryComponent Function Server_AddStacksToItem ********************

// ********** Begin Class UInv_InventoryComponent Function Server_ConsumeItem **********************
struct Inv_InventoryComponent_eventServer_ConsumeItem_Parms
{
	UInv_InventoryItem* Item;
};
static FName NAME_UInv_InventoryComponent_Server_ConsumeItem = FName(TEXT("Server_ConsumeItem"));
void UInv_InventoryComponent::Server_ConsumeItem(UInv_InventoryItem* Item)
{
	Inv_InventoryComponent_eventServer_ConsumeItem_Parms Parms;
	Parms.Item=Item;
	UFunction* Func = FindFunctionChecked(NAME_UInv_InventoryComponent_Server_ConsumeItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventServer_ConsumeItem_Parms, Item), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryComponent, nullptr, "Server_ConsumeItem", Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem_Statics::PropPointers), sizeof(Inv_InventoryComponent_eventServer_ConsumeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inv_InventoryComponent_eventServer_ConsumeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryComponent::execServer_ConsumeItem)
{
	P_GET_OBJECT(UInv_InventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ConsumeItem_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryComponent Function Server_ConsumeItem ************************

// ********** Begin Class UInv_InventoryComponent Function Server_DropItem *************************
struct Inv_InventoryComponent_eventServer_DropItem_Parms
{
	UInv_InventoryItem* Item;
	int32 StackCount;
};
static FName NAME_UInv_InventoryComponent_Server_DropItem = FName(TEXT("Server_DropItem"));
void UInv_InventoryComponent::Server_DropItem(UInv_InventoryItem* Item, int32 StackCount)
{
	Inv_InventoryComponent_eventServer_DropItem_Parms Parms;
	Parms.Item=Item;
	Parms.StackCount=StackCount;
	UFunction* Func = FindFunctionChecked(NAME_UInv_InventoryComponent_Server_DropItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventServer_DropItem_Parms, Item), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventServer_DropItem_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryComponent, nullptr, "Server_DropItem", Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::PropPointers), sizeof(Inv_InventoryComponent_eventServer_DropItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inv_InventoryComponent_eventServer_DropItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryComponent::execServer_DropItem)
{
	P_GET_OBJECT(UInv_InventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DropItem_Implementation(Z_Param_Item,Z_Param_StackCount);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryComponent Function Server_DropItem ***************************

// ********** Begin Class UInv_InventoryComponent Function Server_EquipSlotClicked *****************
struct Inv_InventoryComponent_eventServer_EquipSlotClicked_Parms
{
	UInv_InventoryItem* ItemToEquip;
	UInv_InventoryItem* ItemToUnequip;
};
static FName NAME_UInv_InventoryComponent_Server_EquipSlotClicked = FName(TEXT("Server_EquipSlotClicked"));
void UInv_InventoryComponent::Server_EquipSlotClicked(UInv_InventoryItem* ItemToEquip, UInv_InventoryItem* ItemToUnequip)
{
	Inv_InventoryComponent_eventServer_EquipSlotClicked_Parms Parms;
	Parms.ItemToEquip=ItemToEquip;
	Parms.ItemToUnequip=ItemToUnequip;
	UFunction* Func = FindFunctionChecked(NAME_UInv_InventoryComponent_Server_EquipSlotClicked);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToEquip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToUnequip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::NewProp_ItemToEquip = { "ItemToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventServer_EquipSlotClicked_Parms, ItemToEquip), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::NewProp_ItemToUnequip = { "ItemToUnequip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventServer_EquipSlotClicked_Parms, ItemToUnequip), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::NewProp_ItemToEquip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::NewProp_ItemToUnequip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryComponent, nullptr, "Server_EquipSlotClicked", Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::PropPointers), sizeof(Inv_InventoryComponent_eventServer_EquipSlotClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inv_InventoryComponent_eventServer_EquipSlotClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryComponent::execServer_EquipSlotClicked)
{
	P_GET_OBJECT(UInv_InventoryItem,Z_Param_ItemToEquip);
	P_GET_OBJECT(UInv_InventoryItem,Z_Param_ItemToUnequip);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EquipSlotClicked_Implementation(Z_Param_ItemToEquip,Z_Param_ItemToUnequip);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryComponent Function Server_EquipSlotClicked *******************

// ********** Begin Class UInv_InventoryComponent Function TryAddItem ******************************
struct Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics
{
	struct Inv_InventoryComponent_eventTryAddItem_Parms
	{
		UInv_ItemComponent* ItemComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::NewProp_ItemComponent = { "ItemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventTryAddItem_Parms, ItemComponent), Z_Construct_UClass_UInv_ItemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemComponent_MetaData), NewProp_ItemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::NewProp_ItemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryComponent, nullptr, "TryAddItem", Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::Inv_InventoryComponent_eventTryAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::Inv_InventoryComponent_eventTryAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryComponent::execTryAddItem)
{
	P_GET_OBJECT(UInv_ItemComponent,Z_Param_ItemComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryAddItem(Z_Param_ItemComponent);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryComponent Function TryAddItem ********************************

// ********** Begin Class UInv_InventoryComponent **************************************************
void UInv_InventoryComponent::StaticRegisterNativesUInv_InventoryComponent()
{
	UClass* Class = UInv_InventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Multicast_EquipSlotClicked", &UInv_InventoryComponent::execMulticast_EquipSlotClicked },
		{ "Server_AddNewItem", &UInv_InventoryComponent::execServer_AddNewItem },
		{ "Server_AddStacksToItem", &UInv_InventoryComponent::execServer_AddStacksToItem },
		{ "Server_ConsumeItem", &UInv_InventoryComponent::execServer_ConsumeItem },
		{ "Server_DropItem", &UInv_InventoryComponent::execServer_DropItem },
		{ "Server_EquipSlotClicked", &UInv_InventoryComponent::execServer_EquipSlotClicked },
		{ "TryAddItem", &UInv_InventoryComponent::execTryAddItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_InventoryComponent;
UClass* UInv_InventoryComponent::GetPrivateStaticClass()
{
	using TClass = UInv_InventoryComponent;
	if (!Z_Registration_Info_UClass_UInv_InventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_InventoryComponent"),
			Z_Registration_Info_UClass_UInv_InventoryComponent.InnerSingleton,
			StaticRegisterNativesUInv_InventoryComponent,
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
	return Z_Registration_Info_UClass_UInv_InventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister()
{
	return UInv_InventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_InventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryManagement/Components/Inv_InventoryComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryList_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMenuClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropSpawnAngleMin_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropSpawnAngleMax_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropSpawnDistanceMin_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropSpawnDistanceMax_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeSpawnElevation_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryMenu;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryMenuClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropSpawnAngleMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropSpawnAngleMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropSpawnDistanceMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropSpawnDistanceMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RelativeSpawnElevation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_InventoryComponent_Multicast_EquipSlotClicked, "Multicast_EquipSlotClicked" }, // 2312331386
		{ &Z_Construct_UFunction_UInv_InventoryComponent_Server_AddNewItem, "Server_AddNewItem" }, // 3759247586
		{ &Z_Construct_UFunction_UInv_InventoryComponent_Server_AddStacksToItem, "Server_AddStacksToItem" }, // 1706987245
		{ &Z_Construct_UFunction_UInv_InventoryComponent_Server_ConsumeItem, "Server_ConsumeItem" }, // 3521794651
		{ &Z_Construct_UFunction_UInv_InventoryComponent_Server_DropItem, "Server_DropItem" }, // 1289210582
		{ &Z_Construct_UFunction_UInv_InventoryComponent_Server_EquipSlotClicked, "Server_EquipSlotClicked" }, // 2749928497
		{ &Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem, "TryAddItem" }, // 3241322199
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryList = { "InventoryList", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, InventoryList), Z_Construct_UScriptStruct_FInv_InventoryFastArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryList_MetaData), NewProp_InventoryList_MetaData) }; // 1153450807
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenu = { "InventoryMenu", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, InventoryMenu), Z_Construct_UClass_UInv_InventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryMenu_MetaData), NewProp_InventoryMenu_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenuClass = { "InventoryMenuClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, InventoryMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_InventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryMenuClass_MetaData), NewProp_InventoryMenuClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_DropSpawnAngleMin = { "DropSpawnAngleMin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, DropSpawnAngleMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropSpawnAngleMin_MetaData), NewProp_DropSpawnAngleMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_DropSpawnAngleMax = { "DropSpawnAngleMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, DropSpawnAngleMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropSpawnAngleMax_MetaData), NewProp_DropSpawnAngleMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_DropSpawnDistanceMin = { "DropSpawnDistanceMin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, DropSpawnDistanceMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropSpawnDistanceMin_MetaData), NewProp_DropSpawnDistanceMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_DropSpawnDistanceMax = { "DropSpawnDistanceMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, DropSpawnDistanceMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropSpawnDistanceMax_MetaData), NewProp_DropSpawnDistanceMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_RelativeSpawnElevation = { "RelativeSpawnElevation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, RelativeSpawnElevation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeSpawnElevation_MetaData), NewProp_RelativeSpawnElevation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_DropSpawnAngleMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_DropSpawnAngleMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_DropSpawnDistanceMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_DropSpawnDistanceMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_RelativeSpawnElevation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_InventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InventoryComponent_Statics::ClassParams = {
	&UInv_InventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInv_InventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InventoryComponent.OuterSingleton, Z_Construct_UClass_UInv_InventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InventoryComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UInv_InventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_InventoryList(TEXT("InventoryList"));
	const bool bIsValid = true
		&& Name_InventoryList == ClassReps[(int32)ENetFields_Private::InventoryList].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInv_InventoryComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InventoryComponent);
UInv_InventoryComponent::~UInv_InventoryComponent() {}
// ********** End Class UInv_InventoryComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InventoryComponent, UInv_InventoryComponent::StaticClass, TEXT("UInv_InventoryComponent"), &Z_Registration_Info_UClass_UInv_InventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InventoryComponent), 1337581599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h__Script_Inventory_2086378046(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
