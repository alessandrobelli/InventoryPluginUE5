// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/HUD/Inv_InfoMessage.h"

#ifdef INVENTORY_Inv_InfoMessage_generated_h
#error "Inv_InfoMessage.generated.h already included, missing '#pragma once' in Inv_InfoMessage.h"
#endif
#define INVENTORY_Inv_InfoMessage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInv_InfoMessage *********************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h_16_CALLBACK_WRAPPERS
INVENTORY_API UClass* Z_Construct_UClass_UInv_InfoMessage_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_InfoMessage(); \
	friend struct Z_Construct_UClass_UInv_InfoMessage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_InfoMessage_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_InfoMessage, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_InfoMessage_NoRegister) \
	DECLARE_SERIALIZER(UInv_InfoMessage)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_InfoMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_InfoMessage(UInv_InfoMessage&&) = delete; \
	UInv_InfoMessage(const UInv_InfoMessage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_InfoMessage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_InfoMessage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_InfoMessage) \
	NO_API virtual ~UInv_InfoMessage();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h_13_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h_16_CALLBACK_WRAPPERS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_InfoMessage;

// ********** End Class UInv_InfoMessage ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
