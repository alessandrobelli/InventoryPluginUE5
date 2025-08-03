// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Composite/Inv_Leaf_LabeledValue.h"

#include "Components/TextBlock.h"

void UInv_Leaf_LabeledValue::SetText_Label(const FText& Text, bool bCollapse) const
{
	if (bCollapse)
	{
		Text_Label->SetVisibility(ESlateVisibility::Collapsed);
		return;
	}
	Text_Label->SetText(Text);
}

void UInv_Leaf_LabeledValue::SetText_Value(const FText& Text,  bool bCollapse) const
{
		if (bCollapse)
	{
		Text_Label->SetVisibility(ESlateVisibility::Collapsed);
			return;
	}
	Text_Value->SetText(Text);
}

void UInv_Leaf_LabeledValue::NativePreConstruct()
{
	Super::NativePreConstruct();

	if (IsValid(Text_Label))
	{
		FSlateFontInfo FontInfo_Label = Text_Label->GetFont();
		FontInfo_Label.Size = FontSize_Label;
		Text_Label->SetFont(FontInfo_Label);
	}
	
	if (IsValid(Text_Value))
	{
		FSlateFontInfo FontInfo_Value = Text_Value->GetFont();
		FontInfo_Value.Size = FontSize_Value;
		Text_Value->SetFont(FontInfo_Value);
	}
}
