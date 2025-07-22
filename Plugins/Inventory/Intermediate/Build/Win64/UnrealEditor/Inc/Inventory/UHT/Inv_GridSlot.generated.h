// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Inventory/GridSlots/Inv_GridSlot.h"

#ifdef INVENTORY_Inv_GridSlot_generated_h
#error "Inv_GridSlot.generated.h already included, missing '#pragma once' in Inv_GridSlot.h"
#endif
#define INVENTORY_Inv_GridSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UUserWidget;
struct FPointerEvent;

// ********** Begin Delegate FGridSlotEvent ********************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h_15_DELEGATE \
INVENTORY_API void FGridSlotEvent_DelegateWrapper(const FMulticastScriptDelegate& GridSlotEvent, int32 GridIndex, FPointerEvent const& MouseEvent);


// ********** End Delegate FGridSlotEvent **********************************************************

// ********** Begin Class UInv_GridSlot ************************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemPopUpDestruct);


INVENTORY_API UClass* Z_Construct_UClass_UInv_GridSlot_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_GridSlot(); \
	friend struct Z_Construct_UClass_UInv_GridSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_GridSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_GridSlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_GridSlot_NoRegister) \
	DECLARE_SERIALIZER(UInv_GridSlot)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_GridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_GridSlot(UInv_GridSlot&&) = delete; \
	UInv_GridSlot(const UInv_GridSlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_GridSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_GridSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_GridSlot) \
	NO_API virtual ~UInv_GridSlot();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h_26_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h_29_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_GridSlot;

// ********** End Class UInv_GridSlot **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h

// ********** Begin Enum EInv_GridSlotState ********************************************************
#define FOREACH_ENUM_EINV_GRIDSLOTSTATE(op) \
	op(EInv_GridSlotState::Unoccupied) \
	op(EInv_GridSlotState::Occupied) \
	op(EInv_GridSlotState::Selected) \
	op(EInv_GridSlotState::GrayedOut) 

enum class EInv_GridSlotState : uint8;
template<> struct TIsUEnumClass<EInv_GridSlotState> { enum { Value = true }; };
template<> INVENTORY_API UEnum* StaticEnum<EInv_GridSlotState>();
// ********** End Enum EInv_GridSlotState **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
