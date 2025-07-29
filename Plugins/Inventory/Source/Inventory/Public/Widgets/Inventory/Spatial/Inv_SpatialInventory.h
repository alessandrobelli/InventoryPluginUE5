// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Inventory/InventoryBase/Inv_InventoryBase.h"
#include "Inv_SpatialInventory.generated.h"

class UInv_ItemDescription;
class UCanvasPanel;
class UButton;
class UInv_InventoryGrid;
class UWidgetSwitcher;
/**
 * 
 */
UCLASS()
class INVENTORY_API UInv_SpatialInventory : public UInv_InventoryBase
{
	GENERATED_BODY()
public:

	virtual void NativeOnInitialized() override;

	virtual FReply NativeOnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
	

	virtual FInv_SlotAvailabilityResult HasRoomForItem(UInv_ItemComponent* ItemComponent) const override;
	virtual void OnItemHovered(UInv_InventoryItem* Item) override;
	virtual void OnItemUnhovered() override;
	virtual bool HasHoverItem() const override;

	
private:

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UCanvasPanel> CanvasPanel;
		
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UWidgetSwitcher> Switcher;
	
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UInv_InventoryGrid> Grid_Equippables;

		
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UInv_InventoryGrid> Grid_Consumables;

		
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UInv_InventoryGrid> Grid_Craftables;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> Button_Equippables;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> Button_Consumables;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> Button_Craftables;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	TSubclassOf<UInv_ItemDescription> ItemDescriptionClass;

	UPROPERTY()
	TObjectPtr<UInv_ItemDescription> ItemDescription;

	FTimerHandle DescriptionTimer;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float DescriptionTimerDelay = 0.5f;

	UInv_ItemDescription* GetItemDescription();

	UFUNCTION()
	void ShowEquippables();

	UFUNCTION()
	void ShowConsumables();

	UFUNCTION()
	void ShowCraftables();
	void DisableButton(UButton* Button);

	UFUNCTION()
	void SetActiveGrid(UInv_InventoryGrid* Grid, UButton* Button);

	void SetItemDescriptionSizeAndPosition(UInv_ItemDescription* Description, UCanvasPanel* Canvas) const;

	TWeakObjectPtr<UInv_InventoryGrid> ActiveGrid;
};
