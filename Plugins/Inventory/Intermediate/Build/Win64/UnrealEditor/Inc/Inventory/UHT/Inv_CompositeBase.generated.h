// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Composite/Inv_CompositeBase.h"

#ifdef INVENTORY_Inv_CompositeBase_generated_h
#error "Inv_CompositeBase.generated.h already included, missing '#pragma once' in Inv_CompositeBase.h"
#endif
#define INVENTORY_Inv_CompositeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInv_CompositeBase *******************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_CompositeBase_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_CompositeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_CompositeBase(); \
	friend struct Z_Construct_UClass_UInv_CompositeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_CompositeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_CompositeBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_CompositeBase_NoRegister) \
	DECLARE_SERIALIZER(UInv_CompositeBase)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_CompositeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_CompositeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_CompositeBase(UInv_CompositeBase&&) = delete; \
	UInv_CompositeBase(const UInv_CompositeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_CompositeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_CompositeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_CompositeBase) \
	NO_API virtual ~UInv_CompositeBase();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_CompositeBase_h_13_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_CompositeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_CompositeBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_CompositeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_CompositeBase;

// ********** End Class UInv_CompositeBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_CompositeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
