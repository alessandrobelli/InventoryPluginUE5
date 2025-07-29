#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Inv_ItemFragment.generated.h"


class APlayerController;

USTRUCT(BlueprintType)
struct FInv_ItemFragment
{
	GENERATED_BODY()

	FInv_ItemFragment(){}
	FInv_ItemFragment(const FInv_ItemFragment&) = default;
	FInv_ItemFragment& operator=(const FInv_ItemFragment&) = default;
	FInv_ItemFragment(FInv_ItemFragment&&) = default;
	FInv_ItemFragment& operator=(FInv_ItemFragment&&) = default;
	virtual ~FInv_ItemFragment(){}

	FGameplayTag GetFragmentTag() const { return FragmentTag; }
	void SetFragmentTag(FGameplayTag Tag) { FragmentTag = Tag; }
	
private:
	UPROPERTY(EditAnywhere, Category="Inventory", meta = (Categories="FragmentTags"))
	FGameplayTag FragmentTag = FGameplayTag::EmptyTag;
};
class UInv_CompositeBase;
/*
 * Item Fragment specifically for assimilation into a widget.
 */
USTRUCT(BlueprintType)
struct FInv_InventoryItemFragment : public FInv_ItemFragment
{
	GENERATED_BODY()

	virtual void Assimilate(UInv_CompositeBase* Composite) const;
protected:
	bool MatchesWidgetTag(const UInv_CompositeBase* Composite) const;
};

USTRUCT(BlueprintType)
struct FInv_GridFragment : public FInv_ItemFragment
{
	GENERATED_BODY()

	FIntPoint GetGridSize() const { return GridSize; }
	void SetGridSize(FIntPoint Size) { GridSize = Size; }
	float GetGridPadding() const { return GridPadding; }
	void SetGridPadding(float Padding) { GridPadding = Padding; }

private:

	UPROPERTY(EditAnywhere, Category="Inventory")
	FIntPoint GridSize{1,1};

	UPROPERTY(EditAnywhere, Category="Inventory")
	float GridPadding{0.0f};
};

USTRUCT(BlueprintType)
struct FInv_ImageFragment : public FInv_InventoryItemFragment
{
	GENERATED_BODY()

	UTexture2D* GetImage() const { return Icon; }
	virtual void Assimilate(UInv_CompositeBase* Composite) const override;

private:

	UPROPERTY(EditAnywhere, Category="Inventory")
	TObjectPtr<UTexture2D> Icon{nullptr};

	UPROPERTY(EditAnywhere, Category="Inventory")
	FVector2D IconDimensions{44.0f, 44.0f};
};

USTRUCT(BlueprintType)
struct FInv_TextFragment : public FInv_InventoryItemFragment
{
	GENERATED_BODY()

	FText GetText() const { return FragmentText; }
	void SetText(const FText& Text) { FragmentText = Text; }
	virtual void Assimilate(UInv_CompositeBase* Composite) const override;


private:

	UPROPERTY(EditAnywhere, Category="Inventory")
	FText FragmentText;
};

USTRUCT(BlueprintType)
struct FInv_StackableFragment : public FInv_ItemFragment
{
	GENERATED_BODY()

	int32 GetMaxStackSize() const { return MaxStackSize; }
	int32 GetStackCount() const { return StackCount; }
	void SetMaxStackSize(int32 Size) { MaxStackSize = Size; }
	void SetStackCount(int32 Count) { StackCount = Count; }


private:

	UPROPERTY(EditAnywhere, Category="Inventory")
	int32 MaxStackSize{1};

	// how many stack I get when I pick up this item
	UPROPERTY(EditAnywhere, Category="Inventory")
	int32 StackCount{1};
};

USTRUCT(BlueprintType)
struct FInv_ConsumableFragment : public FInv_ItemFragment
{
	GENERATED_BODY()

	virtual void OnConsume(APlayerController* PC) {};
};

USTRUCT(BlueprintType)
struct FInv_HealthPotionFragment : public FInv_ConsumableFragment
{
	GENERATED_BODY()

	
	UPROPERTY(EditAnywhere, Category="Inventory")
	float HealAmount{20.0f};
	
	virtual void OnConsume(APlayerController* PC) override;
};

USTRUCT(BlueprintType)
struct FInv_ManaPotionFragment : public FInv_ConsumableFragment
{
	GENERATED_BODY()

	
	UPROPERTY(EditAnywhere, Category="Inventory")
	float ManaAmount{20.0f};
	
	virtual void OnConsume(APlayerController* PC) override;
};