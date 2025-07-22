// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Inventory/Spatial/Inv_InventoryGrid.h"
#include "Input/Events.h"
#include "Types/Inv_GridTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_InventoryGrid() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
INVENTORY_API UClass* Z_Construct_UClass_UInv_GridSlot_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_HoverItem_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryGrid();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryGrid_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemPopUp_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_SlottedItem_NoRegister();
INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EInv_ItemCategory();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_InventoryGrid Function AddItem **************************************
struct Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics
{
	struct Inv_InventoryGrid_eventAddItem_Parms
	{
		UInv_InventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventAddItem_Parms, Item), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryGrid, nullptr, "AddItem", Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::Inv_InventoryGrid_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::Inv_InventoryGrid_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryGrid_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryGrid_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryGrid::execAddItem)
{
	P_GET_OBJECT(UInv_InventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryGrid Function AddItem ****************************************

// ********** Begin Class UInv_InventoryGrid Function AddStacks ************************************
struct Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics
{
	struct Inv_InventoryGrid_eventAddStacks_Parms
	{
		FInv_SlotAvailabilityResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventAddStacks_Parms, Result), Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 412004226
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryGrid, nullptr, "AddStacks", Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::Inv_InventoryGrid_eventAddStacks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::Inv_InventoryGrid_eventAddStacks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryGrid_AddStacks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryGrid_AddStacks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryGrid::execAddStacks)
{
	P_GET_STRUCT_REF(FInv_SlotAvailabilityResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStacks(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryGrid Function AddStacks **************************************

// ********** Begin Class UInv_InventoryGrid Function OnGridSlotClicked ****************************
struct Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics
{
	struct Inv_InventoryGrid_eventOnGridSlotClicked_Parms
	{
		int32 GridIndex;
		FPointerEvent MouseEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnGridSlotClicked_Parms, GridIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnGridSlotClicked_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseEvent_MetaData), NewProp_MouseEvent_MetaData) }; // 1462487918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::NewProp_GridIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::NewProp_MouseEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryGrid, nullptr, "OnGridSlotClicked", Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::Inv_InventoryGrid_eventOnGridSlotClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::Inv_InventoryGrid_eventOnGridSlotClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryGrid::execOnGridSlotClicked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_MouseEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGridSlotClicked(Z_Param_GridIndex,Z_Param_Out_MouseEvent);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryGrid Function OnGridSlotClicked ******************************

// ********** Begin Class UInv_InventoryGrid Function OnGridSlotHovered ****************************
struct Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics
{
	struct Inv_InventoryGrid_eventOnGridSlotHovered_Parms
	{
		int32 GridIndex;
		FPointerEvent MouseEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnGridSlotHovered_Parms, GridIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnGridSlotHovered_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseEvent_MetaData), NewProp_MouseEvent_MetaData) }; // 1462487918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::NewProp_GridIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::NewProp_MouseEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryGrid, nullptr, "OnGridSlotHovered", Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::Inv_InventoryGrid_eventOnGridSlotHovered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::Inv_InventoryGrid_eventOnGridSlotHovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryGrid::execOnGridSlotHovered)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_MouseEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGridSlotHovered(Z_Param_GridIndex,Z_Param_Out_MouseEvent);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryGrid Function OnGridSlotHovered ******************************

// ********** Begin Class UInv_InventoryGrid Function OnGridSlotUnhovered **************************
struct Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics
{
	struct Inv_InventoryGrid_eventOnGridSlotUnhovered_Parms
	{
		int32 GridIndex;
		FPointerEvent MouseEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnGridSlotUnhovered_Parms, GridIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnGridSlotUnhovered_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseEvent_MetaData), NewProp_MouseEvent_MetaData) }; // 1462487918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::NewProp_GridIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::NewProp_MouseEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryGrid, nullptr, "OnGridSlotUnhovered", Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::Inv_InventoryGrid_eventOnGridSlotUnhovered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::Inv_InventoryGrid_eventOnGridSlotUnhovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryGrid::execOnGridSlotUnhovered)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_MouseEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGridSlotUnhovered(Z_Param_GridIndex,Z_Param_Out_MouseEvent);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryGrid Function OnGridSlotUnhovered ****************************

// ********** Begin Class UInv_InventoryGrid Function OnPopUpMenuConsume ***************************
struct Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics
{
	struct Inv_InventoryGrid_eventOnPopUpMenuConsume_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnPopUpMenuConsume_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryGrid, nullptr, "OnPopUpMenuConsume", Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::Inv_InventoryGrid_eventOnPopUpMenuConsume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::Inv_InventoryGrid_eventOnPopUpMenuConsume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryGrid::execOnPopUpMenuConsume)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPopUpMenuConsume(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryGrid Function OnPopUpMenuConsume *****************************

// ********** Begin Class UInv_InventoryGrid Function OnPopUpMenuDrop ******************************
struct Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics
{
	struct Inv_InventoryGrid_eventOnPopUpMenuDrop_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnPopUpMenuDrop_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryGrid, nullptr, "OnPopUpMenuDrop", Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::Inv_InventoryGrid_eventOnPopUpMenuDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::Inv_InventoryGrid_eventOnPopUpMenuDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryGrid::execOnPopUpMenuDrop)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPopUpMenuDrop(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryGrid Function OnPopUpMenuDrop ********************************

// ********** Begin Class UInv_InventoryGrid Function OnPopUpMenuSplit *****************************
struct Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics
{
	struct Inv_InventoryGrid_eventOnPopUpMenuSplit_Parms
	{
		int32 SplitAmount;
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplitAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::NewProp_SplitAmount = { "SplitAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnPopUpMenuSplit_Parms, SplitAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnPopUpMenuSplit_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::NewProp_SplitAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryGrid, nullptr, "OnPopUpMenuSplit", Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::Inv_InventoryGrid_eventOnPopUpMenuSplit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::Inv_InventoryGrid_eventOnPopUpMenuSplit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryGrid::execOnPopUpMenuSplit)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SplitAmount);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPopUpMenuSplit(Z_Param_SplitAmount,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryGrid Function OnPopUpMenuSplit *******************************

// ********** Begin Class UInv_InventoryGrid Function OnSlottedItemClicked *************************
struct Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics
{
	struct Inv_InventoryGrid_eventOnSlottedItemClicked_Parms
	{
		int32 GridIndex;
		FPointerEvent MouseEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnSlottedItemClicked_Parms, GridIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryGrid_eventOnSlottedItemClicked_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseEvent_MetaData), NewProp_MouseEvent_MetaData) }; // 1462487918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::NewProp_GridIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::NewProp_MouseEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryGrid, nullptr, "OnSlottedItemClicked", Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::Inv_InventoryGrid_eventOnSlottedItemClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::Inv_InventoryGrid_eventOnSlottedItemClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryGrid::execOnSlottedItemClicked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_MouseEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSlottedItemClicked(Z_Param_GridIndex,Z_Param_Out_MouseEvent);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryGrid Function OnSlottedItemClicked ***************************

// ********** Begin Class UInv_InventoryGrid *******************************************************
void UInv_InventoryGrid::StaticRegisterNativesUInv_InventoryGrid()
{
	UClass* Class = UInv_InventoryGrid::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &UInv_InventoryGrid::execAddItem },
		{ "AddStacks", &UInv_InventoryGrid::execAddStacks },
		{ "OnGridSlotClicked", &UInv_InventoryGrid::execOnGridSlotClicked },
		{ "OnGridSlotHovered", &UInv_InventoryGrid::execOnGridSlotHovered },
		{ "OnGridSlotUnhovered", &UInv_InventoryGrid::execOnGridSlotUnhovered },
		{ "OnPopUpMenuConsume", &UInv_InventoryGrid::execOnPopUpMenuConsume },
		{ "OnPopUpMenuDrop", &UInv_InventoryGrid::execOnPopUpMenuDrop },
		{ "OnPopUpMenuSplit", &UInv_InventoryGrid::execOnPopUpMenuSplit },
		{ "OnSlottedItemClicked", &UInv_InventoryGrid::execOnSlottedItemClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_InventoryGrid;
UClass* UInv_InventoryGrid::GetPrivateStaticClass()
{
	using TClass = UInv_InventoryGrid;
	if (!Z_Registration_Info_UClass_UInv_InventoryGrid.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_InventoryGrid"),
			Z_Registration_Info_UClass_UInv_InventoryGrid.InnerSingleton,
			StaticRegisterNativesUInv_InventoryGrid,
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
	return Z_Registration_Info_UClass_UInv_InventoryGrid.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_InventoryGrid_NoRegister()
{
	return UInv_InventoryGrid::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_InventoryGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPopUpClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPopUp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleCursorWidgetClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenCursorWidgetClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleCursorWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenCursorWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCategory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSlots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSlotClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlottedItems_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlottedItemClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverItemClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverItem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPopUpOffset_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemPopUpClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemPopUp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VisibleCursorWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HiddenCursorWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisibleCursorWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HiddenCursorWidget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemCategory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridSlots;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GridSlotClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlottedItems_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlottedItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SlottedItems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SlottedItemClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Columns;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HoverItemClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemPopUpOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_InventoryGrid_AddItem, "AddItem" }, // 1667842371
		{ &Z_Construct_UFunction_UInv_InventoryGrid_AddStacks, "AddStacks" }, // 2755761669
		{ &Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotClicked, "OnGridSlotClicked" }, // 1014956860
		{ &Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotHovered, "OnGridSlotHovered" }, // 3163618735
		{ &Z_Construct_UFunction_UInv_InventoryGrid_OnGridSlotUnhovered, "OnGridSlotUnhovered" }, // 4254583392
		{ &Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuConsume, "OnPopUpMenuConsume" }, // 2637765898
		{ &Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuDrop, "OnPopUpMenuDrop" }, // 1846161184
		{ &Z_Construct_UFunction_UInv_InventoryGrid_OnPopUpMenuSplit, "OnPopUpMenuSplit" }, // 635789404
		{ &Z_Construct_UFunction_UInv_InventoryGrid_OnSlottedItemClicked, "OnSlottedItemClicked" }, // 4016655428
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InventoryGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemPopUpClass = { "ItemPopUpClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, ItemPopUpClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_ItemPopUp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPopUpClass_MetaData), NewProp_ItemPopUpClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemPopUp = { "ItemPopUp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, ItemPopUp), Z_Construct_UClass_UInv_ItemPopUp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPopUp_MetaData), NewProp_ItemPopUp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_VisibleCursorWidgetClass = { "VisibleCursorWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, VisibleCursorWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleCursorWidgetClass_MetaData), NewProp_VisibleCursorWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_HiddenCursorWidgetClass = { "HiddenCursorWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, HiddenCursorWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenCursorWidgetClass_MetaData), NewProp_HiddenCursorWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_VisibleCursorWidget = { "VisibleCursorWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, VisibleCursorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleCursorWidget_MetaData), NewProp_VisibleCursorWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_HiddenCursorWidget = { "HiddenCursorWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, HiddenCursorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenCursorWidget_MetaData), NewProp_HiddenCursorWidget_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemCategory = { "ItemCategory", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, ItemCategory), Z_Construct_UEnum_Inventory_EInv_ItemCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCategory_MetaData), NewProp_ItemCategory_MetaData) }; // 4149887105
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlots_Inner = { "GridSlots", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInv_GridSlot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlots = { "GridSlots", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, GridSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSlots_MetaData), NewProp_GridSlots_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlotClass = { "GridSlotClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, GridSlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_GridSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSlotClass_MetaData), NewProp_GridSlotClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_SlottedItems_ValueProp = { "SlottedItems", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInv_SlottedItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_SlottedItems_Key_KeyProp = { "SlottedItems_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_SlottedItems = { "SlottedItems", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, SlottedItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlottedItems_MetaData), NewProp_SlottedItems_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_CanvasPanel = { "CanvasPanel", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, CanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPanel_MetaData), NewProp_CanvasPanel_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_SlottedItemClass = { "SlottedItemClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, SlottedItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_SlottedItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlottedItemClass_MetaData), NewProp_SlottedItemClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, Rows), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rows_MetaData), NewProp_Rows_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, Columns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_HoverItemClass = { "HoverItemClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, HoverItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_HoverItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverItemClass_MetaData), NewProp_HoverItemClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_HoverItem = { "HoverItem", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, HoverItem), Z_Construct_UClass_UInv_HoverItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverItem_MetaData), NewProp_HoverItem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemPopUpOffset = { "ItemPopUpOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, ItemPopUpOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPopUpOffset_MetaData), NewProp_ItemPopUpOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_InventoryGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemPopUpClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemPopUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_VisibleCursorWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_HiddenCursorWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_VisibleCursorWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_HiddenCursorWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlotClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_SlottedItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_SlottedItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_SlottedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_CanvasPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_SlottedItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_Rows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_HoverItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_HoverItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemPopUpOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_InventoryGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InventoryGrid_Statics::ClassParams = {
	&UInv_InventoryGrid::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_InventoryGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryGrid_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InventoryGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InventoryGrid()
{
	if (!Z_Registration_Info_UClass_UInv_InventoryGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InventoryGrid.OuterSingleton, Z_Construct_UClass_UInv_InventoryGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InventoryGrid.OuterSingleton;
}
UInv_InventoryGrid::UInv_InventoryGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InventoryGrid);
UInv_InventoryGrid::~UInv_InventoryGrid() {}
// ********** End Class UInv_InventoryGrid *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InventoryGrid, UInv_InventoryGrid::StaticClass, TEXT("UInv_InventoryGrid"), &Z_Registration_Info_UClass_UInv_InventoryGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InventoryGrid), 4007297674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h__Script_Inventory_624526550(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
