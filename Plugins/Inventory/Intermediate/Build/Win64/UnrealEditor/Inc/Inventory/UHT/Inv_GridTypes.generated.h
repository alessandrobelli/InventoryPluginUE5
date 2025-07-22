// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/Inv_GridTypes.h"

#ifdef INVENTORY_Inv_GridTypes_generated_h
#error "Inv_GridTypes.generated.h already included, missing '#pragma once' in Inv_GridTypes.h"
#endif
#define INVENTORY_Inv_GridTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInv_SlotAvailability *********************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


struct FInv_SlotAvailability;
// ********** End ScriptStruct FInv_SlotAvailability ***********************************************

// ********** Begin ScriptStruct FInv_SlotAvailabilityResult ***************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


struct FInv_SlotAvailabilityResult;
// ********** End ScriptStruct FInv_SlotAvailabilityResult *****************************************

// ********** Begin ScriptStruct FInv_TileParameters ***********************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInv_TileParameters_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


struct FInv_TileParameters;
// ********** End ScriptStruct FInv_TileParameters *************************************************

// ********** Begin ScriptStruct FInv_SpaceQueryResult *********************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInv_SpaceQueryResult_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


struct FInv_SpaceQueryResult;
// ********** End ScriptStruct FInv_SpaceQueryResult ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h

// ********** Begin Enum EInv_ItemCategory *********************************************************
#define FOREACH_ENUM_EINV_ITEMCATEGORY(op) \
	op(EInv_ItemCategory::Equippable) \
	op(EInv_ItemCategory::Consumable) \
	op(EInv_ItemCategory::Craftable) \
	op(EInv_ItemCategory::None) 

enum class EInv_ItemCategory : uint8;
template<> struct TIsUEnumClass<EInv_ItemCategory> { enum { Value = true }; };
template<> INVENTORY_API UEnum* StaticEnum<EInv_ItemCategory>();
// ********** End Enum EInv_ItemCategory ***********************************************************

// ********** Begin Enum EInv_TileQuadrant *********************************************************
#define FOREACH_ENUM_EINV_TILEQUADRANT(op) \
	op(EInv_TileQuadrant::TopLeft) \
	op(EInv_TileQuadrant::TopRight) \
	op(EInv_TileQuadrant::BottomLeft) \
	op(EInv_TileQuadrant::BottomRight) \
	op(EInv_TileQuadrant::None) 

enum class EInv_TileQuadrant : uint8;
template<> struct TIsUEnumClass<EInv_TileQuadrant> { enum { Value = true }; };
template<> INVENTORY_API UEnum* StaticEnum<EInv_TileQuadrant>();
// ********** End Enum EInv_TileQuadrant ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
