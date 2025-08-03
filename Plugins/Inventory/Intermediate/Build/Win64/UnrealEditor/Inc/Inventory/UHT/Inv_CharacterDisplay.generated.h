// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/CharacterDisplay/Inv_CharacterDisplay.h"

#ifdef INVENTORY_Inv_CharacterDisplay_generated_h
#error "Inv_CharacterDisplay.generated.h already included, missing '#pragma once' in Inv_CharacterDisplay.h"
#endif
#define INVENTORY_Inv_CharacterDisplay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInv_CharacterDisplay ****************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_CharacterDisplay_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_CharacterDisplay_Inv_CharacterDisplay_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_CharacterDisplay(); \
	friend struct Z_Construct_UClass_UInv_CharacterDisplay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_CharacterDisplay_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_CharacterDisplay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_CharacterDisplay_NoRegister) \
	DECLARE_SERIALIZER(UInv_CharacterDisplay)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_CharacterDisplay_Inv_CharacterDisplay_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_CharacterDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_CharacterDisplay(UInv_CharacterDisplay&&) = delete; \
	UInv_CharacterDisplay(const UInv_CharacterDisplay&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_CharacterDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_CharacterDisplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_CharacterDisplay) \
	NO_API virtual ~UInv_CharacterDisplay();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_CharacterDisplay_Inv_CharacterDisplay_h_12_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_CharacterDisplay_Inv_CharacterDisplay_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_CharacterDisplay_Inv_CharacterDisplay_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_CharacterDisplay_Inv_CharacterDisplay_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_CharacterDisplay;

// ********** End Class UInv_CharacterDisplay ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_CharacterDisplay_Inv_CharacterDisplay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
