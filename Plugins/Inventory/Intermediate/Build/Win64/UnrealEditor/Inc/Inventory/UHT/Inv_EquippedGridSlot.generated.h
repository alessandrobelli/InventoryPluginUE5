// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Inventory/GridSlots/Inv_EquippedGridSlot.h"

#ifdef INVENTORY_Inv_EquippedGridSlot_generated_h
#error "Inv_EquippedGridSlot.generated.h already included, missing '#pragma once' in Inv_EquippedGridSlot.h"
#endif
#define INVENTORY_Inv_EquippedGridSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInv_EquippedGridSlot;
struct FGameplayTag;

// ********** Begin Delegate FEquippedGridSlotClicked **********************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h_13_DELEGATE \
INVENTORY_API void FEquippedGridSlotClicked_DelegateWrapper(const FMulticastScriptDelegate& EquippedGridSlotClicked, UInv_EquippedGridSlot* Slot, FGameplayTag const& EquipmentTypeTag);


// ********** End Delegate FEquippedGridSlotClicked ************************************************

// ********** Begin Class UInv_EquippedGridSlot ****************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_EquippedGridSlot_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_EquippedGridSlot(); \
	friend struct Z_Construct_UClass_UInv_EquippedGridSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_EquippedGridSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_EquippedGridSlot, UInv_GridSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_EquippedGridSlot_NoRegister) \
	DECLARE_SERIALIZER(UInv_EquippedGridSlot)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_EquippedGridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_EquippedGridSlot(UInv_EquippedGridSlot&&) = delete; \
	UInv_EquippedGridSlot(const UInv_EquippedGridSlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_EquippedGridSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_EquippedGridSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_EquippedGridSlot) \
	NO_API virtual ~UInv_EquippedGridSlot();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h_15_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_EquippedGridSlot;

// ********** End Class UInv_EquippedGridSlot ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_EquippedGridSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
