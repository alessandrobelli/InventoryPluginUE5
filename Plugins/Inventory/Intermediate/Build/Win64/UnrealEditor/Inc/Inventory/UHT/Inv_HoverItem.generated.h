// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Inventory/HoverItem/Inv_HoverItem.h"

#ifdef INVENTORY_Inv_HoverItem_generated_h
#error "Inv_HoverItem.generated.h already included, missing '#pragma once' in Inv_HoverItem.h"
#endif
#define INVENTORY_Inv_HoverItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInv_HoverItem ***********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_HoverItem_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_HoverItem_Inv_HoverItem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_HoverItem(); \
	friend struct Z_Construct_UClass_UInv_HoverItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_HoverItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_HoverItem, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_HoverItem_NoRegister) \
	DECLARE_SERIALIZER(UInv_HoverItem)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_HoverItem_Inv_HoverItem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_HoverItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_HoverItem(UInv_HoverItem&&) = delete; \
	UInv_HoverItem(const UInv_HoverItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_HoverItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_HoverItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_HoverItem) \
	NO_API virtual ~UInv_HoverItem();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_HoverItem_Inv_HoverItem_h_16_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_HoverItem_Inv_HoverItem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_HoverItem_Inv_HoverItem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_HoverItem_Inv_HoverItem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_HoverItem;

// ********** End Class UInv_HoverItem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_HoverItem_Inv_HoverItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
