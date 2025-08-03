// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Inventory/SlottedItems/Inv_EquippedSlottedItem.h"

#ifdef INVENTORY_Inv_EquippedSlottedItem_generated_h
#error "Inv_EquippedSlottedItem.generated.h already included, missing '#pragma once' in Inv_EquippedSlottedItem.h"
#endif
#define INVENTORY_Inv_EquippedSlottedItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInv_EquippedSlottedItem;

// ********** Begin Delegate FEquippedSlottedItemClicked *******************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h_9_DELEGATE \
INVENTORY_API void FEquippedSlottedItemClicked_DelegateWrapper(const FMulticastScriptDelegate& EquippedSlottedItemClicked, UInv_EquippedSlottedItem* SlottedItem);


// ********** End Delegate FEquippedSlottedItemClicked *********************************************

// ********** Begin Class UInv_EquippedSlottedItem *************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_EquippedSlottedItem_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_EquippedSlottedItem(); \
	friend struct Z_Construct_UClass_UInv_EquippedSlottedItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_EquippedSlottedItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_EquippedSlottedItem, UInv_SlottedItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_EquippedSlottedItem_NoRegister) \
	DECLARE_SERIALIZER(UInv_EquippedSlottedItem)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_EquippedSlottedItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_EquippedSlottedItem(UInv_EquippedSlottedItem&&) = delete; \
	UInv_EquippedSlottedItem(const UInv_EquippedSlottedItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_EquippedSlottedItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_EquippedSlottedItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_EquippedSlottedItem) \
	NO_API virtual ~UInv_EquippedSlottedItem();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h_14_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_EquippedSlottedItem;

// ********** End Class UInv_EquippedSlottedItem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_EquippedSlottedItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
