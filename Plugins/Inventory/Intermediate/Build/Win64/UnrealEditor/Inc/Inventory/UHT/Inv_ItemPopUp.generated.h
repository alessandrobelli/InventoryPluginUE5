// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/ItemPopUp/Inv_ItemPopUp.h"

#ifdef INVENTORY_Inv_ItemPopUp_generated_h
#error "Inv_ItemPopUp.generated.h already included, missing '#pragma once' in Inv_ItemPopUp.h"
#endif
#define INVENTORY_Inv_ItemPopUp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FPopUpMenuSplit *******************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h_17_DELEGATE \
INVENTORY_API void FPopUpMenuSplit_DelegateWrapper(const FScriptDelegate& PopUpMenuSplit, int32 SplitAmount, int32 Index);


// ********** End Delegate FPopUpMenuSplit *********************************************************

// ********** Begin Delegate FPopUpMenuDrop ********************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h_18_DELEGATE \
INVENTORY_API void FPopUpMenuDrop_DelegateWrapper(const FScriptDelegate& PopUpMenuDrop, int32 Index);


// ********** End Delegate FPopUpMenuDrop **********************************************************

// ********** Begin Delegate FPopUpMenuConsume *****************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h_19_DELEGATE \
INVENTORY_API void FPopUpMenuConsume_DelegateWrapper(const FScriptDelegate& PopUpMenuConsume, int32 Index);


// ********** End Delegate FPopUpMenuConsume *******************************************************

// ********** Begin Class UInv_ItemPopUp ***********************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSliderValueChanged); \
	DECLARE_FUNCTION(execConsumeButtonClicked); \
	DECLARE_FUNCTION(execDropButtonClicked); \
	DECLARE_FUNCTION(execSplitButtonClicked);


INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemPopUp_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_ItemPopUp(); \
	friend struct Z_Construct_UClass_UInv_ItemPopUp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemPopUp_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_ItemPopUp, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_ItemPopUp_NoRegister) \
	DECLARE_SERIALIZER(UInv_ItemPopUp)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_ItemPopUp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_ItemPopUp(UInv_ItemPopUp&&) = delete; \
	UInv_ItemPopUp(const UInv_ItemPopUp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_ItemPopUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_ItemPopUp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_ItemPopUp) \
	NO_API virtual ~UInv_ItemPopUp();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h_21_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h_24_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_ItemPopUp;

// ********** End Class UInv_ItemPopUp *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
