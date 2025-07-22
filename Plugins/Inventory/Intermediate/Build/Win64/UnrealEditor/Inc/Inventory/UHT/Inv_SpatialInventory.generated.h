// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Inventory/Spatial/Inv_SpatialInventory.h"

#ifdef INVENTORY_Inv_SpatialInventory_generated_h
#error "Inv_SpatialInventory.generated.h already included, missing '#pragma once' in Inv_SpatialInventory.h"
#endif
#define INVENTORY_Inv_SpatialInventory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UButton;
class UInv_InventoryGrid;

// ********** Begin Class UInv_SpatialInventory ****************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetActiveGrid); \
	DECLARE_FUNCTION(execShowCraftables); \
	DECLARE_FUNCTION(execShowConsumables); \
	DECLARE_FUNCTION(execShowEquippables);


INVENTORY_API UClass* Z_Construct_UClass_UInv_SpatialInventory_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_SpatialInventory(); \
	friend struct Z_Construct_UClass_UInv_SpatialInventory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_SpatialInventory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_SpatialInventory, UInv_InventoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_SpatialInventory_NoRegister) \
	DECLARE_SERIALIZER(UInv_SpatialInventory)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_SpatialInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_SpatialInventory(UInv_SpatialInventory&&) = delete; \
	UInv_SpatialInventory(const UInv_SpatialInventory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_SpatialInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_SpatialInventory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_SpatialInventory) \
	NO_API virtual ~UInv_SpatialInventory();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_16_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_SpatialInventory;

// ********** End Class UInv_SpatialInventory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
