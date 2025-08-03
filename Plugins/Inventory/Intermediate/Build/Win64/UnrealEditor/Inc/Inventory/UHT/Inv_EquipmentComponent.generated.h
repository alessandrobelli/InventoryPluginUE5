// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentManagement/Components/Inv_EquipmentComponent.h"

#ifdef INVENTORY_Inv_EquipmentComponent_generated_h
#error "Inv_EquipmentComponent.generated.h already included, missing '#pragma once' in Inv_EquipmentComponent.h"
#endif
#define INVENTORY_Inv_EquipmentComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;
class UInv_InventoryItem;

// ********** Begin Class UInv_EquipmentComponent **************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPossessedPawnChanged); \
	DECLARE_FUNCTION(execOnItemUnequipped); \
	DECLARE_FUNCTION(execOnItemEquipped);


INVENTORY_API UClass* Z_Construct_UClass_UInv_EquipmentComponent_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_EquipmentComponent(); \
	friend struct Z_Construct_UClass_UInv_EquipmentComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_EquipmentComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_EquipmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_EquipmentComponent_NoRegister) \
	DECLARE_SERIALIZER(UInv_EquipmentComponent)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_EquipmentComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_EquipmentComponent(UInv_EquipmentComponent&&) = delete; \
	UInv_EquipmentComponent(const UInv_EquipmentComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_EquipmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_EquipmentComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_EquipmentComponent) \
	NO_API virtual ~UInv_EquipmentComponent();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h_15_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_EquipmentComponent;

// ********** End Class UInv_EquipmentComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
