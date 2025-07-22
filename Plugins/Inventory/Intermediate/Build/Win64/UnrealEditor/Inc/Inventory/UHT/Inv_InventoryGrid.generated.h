// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Inventory/Spatial/Inv_InventoryGrid.h"

#ifdef INVENTORY_Inv_InventoryGrid_generated_h
#error "Inv_InventoryGrid.generated.h already included, missing '#pragma once' in Inv_InventoryGrid.h"
#endif
#define INVENTORY_Inv_InventoryGrid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInv_InventoryItem;
struct FInv_SlotAvailabilityResult;
struct FPointerEvent;

// ********** Begin Class UInv_InventoryGrid *******************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPopUpMenuConsume); \
	DECLARE_FUNCTION(execOnPopUpMenuDrop); \
	DECLARE_FUNCTION(execOnPopUpMenuSplit); \
	DECLARE_FUNCTION(execOnGridSlotUnhovered); \
	DECLARE_FUNCTION(execOnGridSlotHovered); \
	DECLARE_FUNCTION(execOnGridSlotClicked); \
	DECLARE_FUNCTION(execOnSlottedItemClicked); \
	DECLARE_FUNCTION(execAddStacks); \
	DECLARE_FUNCTION(execAddItem);


INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryGrid_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_InventoryGrid(); \
	friend struct Z_Construct_UClass_UInv_InventoryGrid_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryGrid_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_InventoryGrid, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_InventoryGrid_NoRegister) \
	DECLARE_SERIALIZER(UInv_InventoryGrid)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_InventoryGrid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_InventoryGrid(UInv_InventoryGrid&&) = delete; \
	UInv_InventoryGrid(const UInv_InventoryGrid&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_InventoryGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_InventoryGrid); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_InventoryGrid) \
	NO_API virtual ~UInv_InventoryGrid();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h_23_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h_26_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_InventoryGrid;

// ********** End Class UInv_InventoryGrid *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
