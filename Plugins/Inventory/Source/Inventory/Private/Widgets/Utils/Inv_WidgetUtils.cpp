// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Utils/Inv_WidgetUtils.h"

#include "Blueprint/SlateBlueprintLibrary.h"

FVector2D UInv_WidgetUtils::GetWidgetPosition(UWidget* Widget)
{
	const FGeometry Geometry = Widget->GetCachedGeometry();
	FVector2D PixelPosition;
	FVector2D ViewportPosition;

	USlateBlueprintLibrary::LocalToViewport(Widget, Geometry, USlateBlueprintLibrary::GetLocalTopLeft(Geometry), PixelPosition, ViewportPosition);

	return ViewportPosition;
}

FVector2D UInv_WidgetUtils::GetWidgetSize(UWidget* Widget)
{
	const FGeometry Geometry = Widget->GetCachedGeometry();
	return Geometry.GetLocalSize();
}

bool UInv_WidgetUtils::IsWithinBounds(const FVector2D& BoundaryPos, const FVector2D WidgetSize,
                                      const FVector2D& MousePos)
{
	return MousePos.X >= BoundaryPos.X && MousePos.X <= (BoundaryPos.X + WidgetSize.X) &&
	       MousePos.Y >= BoundaryPos.Y && MousePos.Y <= (BoundaryPos.Y + WidgetSize.Y);
}

FVector2D UInv_WidgetUtils::GetClampedWidgetPosition(const FVector2D& Boundary, const FVector2D& WidgetSize,
	const FVector2D& MousePosition)
{
	FVector2D ClampedPosition = MousePosition;

	// adjust horizontal position to ensure that the widget stays within the boundary
	if (MousePosition.X + WidgetSize.X > Boundary.X) // widget exceeds the right edge
	{
		ClampedPosition.X = Boundary.X - WidgetSize.X; // move it to the left edge
	}
	else if (MousePosition.X < 0.f) // widget exceeds the left edge
	{
		ClampedPosition.X = 0.f; // move it to the left edge
	}

	// Adjust vertical position to ensure that the widget stays within the boundary
	if (MousePosition.X + WidgetSize.Y > Boundary.Y) // widget exceeds the bottom edge
	{
		ClampedPosition.Y = Boundary.Y - WidgetSize.Y; // move it to the top edge
	}
	else if (MousePosition.Y < 0.f) // widget exceeds the top edge
	{
		ClampedPosition.Y = 0.f; // move it to the top edge
	}

	return ClampedPosition;
}

int32 UInv_WidgetUtils::GetIndexFromPosition(const FIntPoint& Position, int32 Columns)
{
	return Position.X + Position.Y * Columns;
}

FIntPoint UInv_WidgetUtils::GetPositionFromIndex(const int32 Index, const int32 Columns)
{

	return FIntPoint(Index % Columns, Index / Columns);
}
