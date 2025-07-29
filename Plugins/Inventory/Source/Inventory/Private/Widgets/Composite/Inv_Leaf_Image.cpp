// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Composite/Inv_Leaf_Image.h"

#include "Components/Image.h"
#include "Components/SizeBox.h"

void UInv_Leaf_Image::SetImage(UTexture2D* Texture) const
{
	Image_Icon->SetBrushFromTexture(Texture);
}

void UInv_Leaf_Image::SetBoxSize(const FVector2D& Size) const
{
	SizeBox_Icon->SetWidthOverride(Size.X);
	SizeBox_Icon->SetHeightOverride(Size.Y);
}

void UInv_Leaf_Image::SetImageSize(const FVector2D& Size) const
{
	Image_Icon->SetDesiredSizeOverride(Size);
}

FVector2D UInv_Leaf_Image::GetImageSize() const
{
	return Image_Icon->GetDesiredSize();
}
