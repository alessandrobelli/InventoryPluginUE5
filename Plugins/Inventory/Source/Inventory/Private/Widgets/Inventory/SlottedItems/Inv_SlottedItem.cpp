// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Inventory/SlottedItems/Inv_SlottedItem.h"

#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "InventoryManagement/Inv_InventoryStatics.h"
#include "Items/Fragments/Inv_ItemFragment.h"
#include "Items/Manifest/Inv_ItemManifest.h"

FReply UInv_SlottedItem::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	OnSlottedItemClicked.Broadcast(GridIndex, InMouseEvent);
	return FReply::Handled();
}

void UInv_SlottedItem::NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	UInv_InventoryStatics::ItemHovered(GetOwningPlayer(), InventoryItem.Get());
}

void UInv_SlottedItem::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
	UInv_InventoryStatics::ItemUnhovered(GetOwningPlayer());
}

void UInv_SlottedItem::SetImageBrush(const FSlateBrush& Brush) const
{
	Image_Icon->SetBrush(Brush);
}

void UInv_SlottedItem::UpdateStackCount(int32 StackCount)
{
	if (StackCount > 0)
	{
		Text_StackCount->SetText(FText::AsNumber(StackCount));
		Text_StackCount->SetVisibility(ESlateVisibility::Visible);
	}else
	{
		Text_StackCount->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void UInv_SlottedItem::UpdateItemName()
{
	if (Text_ItemName)
	{
		if (HasItemName())
		{
			Text_ItemName->SetText(GetItemName());
			Text_ItemName->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			Text_ItemName->SetText(FText::GetEmpty());
			Text_ItemName->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

FText UInv_SlottedItem::GetItemName() const
{
	if (!InventoryItem.IsValid())
	{
		return FText::GetEmpty();
	}
	
	const FInv_ItemManifest& Manifest = InventoryItem->GetItemManifest();
	const FInv_TextFragment* TextFragment = Manifest.GetFragmentOfType<FInv_TextFragment>();
	if (TextFragment)
	{
		return TextFragment->GetText();
	}
	
	return FText::GetEmpty();
}

bool UInv_SlottedItem::HasItemName() const
{
	if (!InventoryItem.IsValid())
	{
		return false;
	}
	
	const FInv_ItemManifest& Manifest = InventoryItem->GetItemManifest();
	const FInv_TextFragment* TextFragment = Manifest.GetFragmentOfType<FInv_TextFragment>();
	return TextFragment != nullptr && !TextFragment->GetText().IsEmpty();
}
