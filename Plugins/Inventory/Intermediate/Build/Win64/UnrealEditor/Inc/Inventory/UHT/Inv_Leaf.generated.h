// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Composite/Inv_Leaf.h"

#ifdef INVENTORY_Inv_Leaf_generated_h
#error "Inv_Leaf.generated.h already included, missing '#pragma once' in Inv_Leaf.h"
#endif
#define INVENTORY_Inv_Leaf_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInv_Leaf ****************************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_Leaf(); \
	friend struct Z_Construct_UClass_UInv_Leaf_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_Leaf, UInv_CompositeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_Leaf_NoRegister) \
	DECLARE_SERIALIZER(UInv_Leaf)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_Leaf(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_Leaf(UInv_Leaf&&) = delete; \
	UInv_Leaf(const UInv_Leaf&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_Leaf); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_Leaf); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_Leaf) \
	NO_API virtual ~UInv_Leaf();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_h_12_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_Leaf;

// ********** End Class UInv_Leaf ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
