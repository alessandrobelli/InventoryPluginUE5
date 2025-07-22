// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Inventory/InventoryBase/Inv_InventoryBase.h"

#ifdef INVENTORY_Inv_InventoryBase_generated_h
#error "Inv_InventoryBase.generated.h already included, missing '#pragma once' in Inv_InventoryBase.h"
#endif
#define INVENTORY_Inv_InventoryBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInv_InventoryBase *******************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryBase_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_InventoryBase_Inv_InventoryBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_InventoryBase(); \
	friend struct Z_Construct_UClass_UInv_InventoryBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_InventoryBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_InventoryBase_NoRegister) \
	DECLARE_SERIALIZER(UInv_InventoryBase)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_InventoryBase_Inv_InventoryBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_InventoryBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_InventoryBase(UInv_InventoryBase&&) = delete; \
	UInv_InventoryBase(const UInv_InventoryBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_InventoryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_InventoryBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_InventoryBase) \
	NO_API virtual ~UInv_InventoryBase();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_InventoryBase_Inv_InventoryBase_h_15_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_InventoryBase_Inv_InventoryBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_InventoryBase_Inv_InventoryBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_InventoryBase_Inv_InventoryBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_InventoryBase;

// ********** End Class UInv_InventoryBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_InventoryBase_Inv_InventoryBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
