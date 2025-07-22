// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Inv_PlayerController.h"

#ifdef INVENTORY_Inv_PlayerController_generated_h
#error "Inv_PlayerController.generated.h already included, missing '#pragma once' in Inv_PlayerController.h"
#endif
#define INVENTORY_Inv_PlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInv_PlayerController ****************************************************
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleInventory);


INVENTORY_API UClass* Z_Construct_UClass_AInv_PlayerController_NoRegister();

#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInv_PlayerController(); \
	friend struct Z_Construct_UClass_AInv_PlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_AInv_PlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AInv_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_AInv_PlayerController_NoRegister) \
	DECLARE_SERIALIZER(AInv_PlayerController)


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInv_PlayerController(AInv_PlayerController&&) = delete; \
	AInv_PlayerController(const AInv_PlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInv_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInv_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInv_PlayerController) \
	NO_API virtual ~AInv_PlayerController();


#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_17_PROLOG
#define FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInv_PlayerController;

// ********** End Class AInv_PlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
