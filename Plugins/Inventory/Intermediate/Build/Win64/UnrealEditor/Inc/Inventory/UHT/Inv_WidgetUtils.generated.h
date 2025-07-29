// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Utils/Inv_WidgetUtils.h"

#ifdef INVENTORY_Inv_WidgetUtils_generated_h
#error "Inv_WidgetUtils.generated.h already included, missing '#pragma once' in Inv_WidgetUtils.h"
#endif
#define INVENTORY_Inv_WidgetUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UWidget;

// ********** Begin Class UInv_WidgetUtils *********************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetClampedWidgetPosition); \
	DECLARE_FUNCTION(execIsWithinBounds); \
	DECLARE_FUNCTION(execGetWidgetSize); \
	DECLARE_FUNCTION(execGetWidgetPosition);


INVENTORY_API UClass* Z_Construct_UClass_UInv_WidgetUtils_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_WidgetUtils(); \
	friend struct Z_Construct_UClass_UInv_WidgetUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_WidgetUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_WidgetUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_WidgetUtils_NoRegister) \
	DECLARE_SERIALIZER(UInv_WidgetUtils)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_WidgetUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_WidgetUtils(UInv_WidgetUtils&&) = delete; \
	UInv_WidgetUtils(const UInv_WidgetUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_WidgetUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_WidgetUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_WidgetUtils) \
	NO_API virtual ~UInv_WidgetUtils();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_13_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_WidgetUtils;

// ********** End Class UInv_WidgetUtils ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
