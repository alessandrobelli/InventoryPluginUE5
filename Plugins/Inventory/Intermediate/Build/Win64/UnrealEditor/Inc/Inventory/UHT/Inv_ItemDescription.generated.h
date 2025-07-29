// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/ItemDescription/Inv_ItemDescription.h"

#ifdef INVENTORY_Inv_ItemDescription_generated_h
#error "Inv_ItemDescription.generated.h already included, missing '#pragma once' in Inv_ItemDescription.h"
#endif
#define INVENTORY_Inv_ItemDescription_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInv_ItemDescription *****************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemDescription_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemDescription_Inv_ItemDescription_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_ItemDescription(); \
	friend struct Z_Construct_UClass_UInv_ItemDescription_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemDescription_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_ItemDescription, UInv_Composite, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_ItemDescription_NoRegister) \
	DECLARE_SERIALIZER(UInv_ItemDescription)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemDescription_Inv_ItemDescription_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_ItemDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_ItemDescription(UInv_ItemDescription&&) = delete; \
	UInv_ItemDescription(const UInv_ItemDescription&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_ItemDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_ItemDescription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_ItemDescription) \
	NO_API virtual ~UInv_ItemDescription();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemDescription_Inv_ItemDescription_h_13_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemDescription_Inv_ItemDescription_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemDescription_Inv_ItemDescription_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemDescription_Inv_ItemDescription_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_ItemDescription;

// ********** End Class UInv_ItemDescription *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemDescription_Inv_ItemDescription_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
