// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryManagement/FastArray/Inv_FastArray.h"

#ifdef INVENTORY_Inv_FastArray_generated_h
#error "Inv_FastArray.generated.h already included, missing '#pragma once' in Inv_FastArray.h"
#endif
#define INVENTORY_Inv_FastArray_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInv_InventoryEntry ***********************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_FastArray_Inv_FastArray_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


struct FInv_InventoryEntry;
// ********** End ScriptStruct FInv_InventoryEntry *************************************************

// ********** Begin ScriptStruct FInv_InventoryFastArray *******************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_FastArray_Inv_FastArray_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FInv_InventoryFastArray, Entries, INVENTORY_API );


struct FInv_InventoryFastArray;
// ********** End ScriptStruct FInv_InventoryFastArray *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_FastArray_Inv_FastArray_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
