// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Inv_InventoryItem.h"

#ifdef INVENTORY_Inv_InventoryItem_generated_h
#error "Inv_InventoryItem.generated.h already included, missing '#pragma once' in Inv_InventoryItem.h"
#endif
#define INVENTORY_Inv_InventoryItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInv_InventoryItem *******************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_InventoryItem(); \
	friend struct Z_Construct_UClass_UInv_InventoryItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_InventoryItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_InventoryItem_NoRegister) \
	DECLARE_SERIALIZER(UInv_InventoryItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemManifest=NETFIELD_REP_START, \
		TotalStackCount, \
		NETFIELD_REP_END=TotalStackCount	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UInv_InventoryItem) \
public:


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_InventoryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_InventoryItem(UInv_InventoryItem&&) = delete; \
	UInv_InventoryItem(const UInv_InventoryItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_InventoryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_InventoryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_InventoryItem) \
	NO_API virtual ~UInv_InventoryItem();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h_13_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_InventoryItem;

// ********** End Class UInv_InventoryItem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
