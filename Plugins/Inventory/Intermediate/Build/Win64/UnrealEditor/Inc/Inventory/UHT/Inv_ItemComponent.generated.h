// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Components/Inv_ItemComponent.h"

#ifdef INVENTORY_Inv_ItemComponent_generated_h
#error "Inv_ItemComponent.generated.h already included, missing '#pragma once' in Inv_ItemComponent.h"
#endif
#define INVENTORY_Inv_ItemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInv_ItemComponent *******************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_15_CALLBACK_WRAPPERS
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_ItemComponent(); \
	friend struct Z_Construct_UClass_UInv_ItemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_ItemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_ItemComponent_NoRegister) \
	DECLARE_SERIALIZER(UInv_ItemComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemManifest=NETFIELD_REP_START, \
		NETFIELD_REP_END=ItemManifest	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_ItemComponent(UInv_ItemComponent&&) = delete; \
	UInv_ItemComponent(const UInv_ItemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_ItemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_ItemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInv_ItemComponent) \
	NO_API virtual ~UInv_ItemComponent();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_12_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_15_CALLBACK_WRAPPERS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_ItemComponent;

// ********** End Class UInv_ItemComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
