// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Inventory/SlottedItems/Inv_SlottedItem.h"

#ifdef INVENTORY_Inv_SlottedItem_generated_h
#error "Inv_SlottedItem.generated.h already included, missing '#pragma once' in Inv_SlottedItem.h"
#endif
#define INVENTORY_Inv_SlottedItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FPointerEvent;

// ********** Begin Delegate FSlottedItemClicked ***************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h_13_DELEGATE \
INVENTORY_API void FSlottedItemClicked_DelegateWrapper(const FMulticastScriptDelegate& SlottedItemClicked, int32 GridIndex, FPointerEvent const& MouseEvent);


// ********** End Delegate FSlottedItemClicked *****************************************************

// ********** Begin Class UInv_SlottedItem *********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_SlottedItem_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_SlottedItem(); \
	friend struct Z_Construct_UClass_UInv_SlottedItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_SlottedItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_SlottedItem, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_SlottedItem_NoRegister) \
	DECLARE_SERIALIZER(UInv_SlottedItem)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_SlottedItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_SlottedItem(UInv_SlottedItem&&) = delete; \
	UInv_SlottedItem(const UInv_SlottedItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_SlottedItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_SlottedItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_SlottedItem) \
	NO_API virtual ~UInv_SlottedItem();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h_15_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_SlottedItem;

// ********** End Class UInv_SlottedItem ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_SlottedItems_Inv_SlottedItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
