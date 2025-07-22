// Copyright Epic Games, Inc. All Rights Reserved.


#include "Variant_Shooter/ShooterUI.h"

#include "ShooterCharacter.h"

void UShooterUI::SetupCharacter(AShooterCharacter* ShooterCharacter)
{
	ShooterCharacter->OnSprintMeterUpdated.AddDynamic(this, &UShooterUI::OnSprintMeterUpdated);
	ShooterCharacter->OnSprintStateChanged.AddDynamic(this, &UShooterUI::OnSprintStateChanged);
}

void UShooterUI::OnSprintMeterUpdated(float Percent)
{
	// call the BP handler
	BP_SprintMeterUpdated(Percent);
}

void UShooterUI::OnSprintStateChanged(bool bSprinting)
{
	// call the BP handler
	BP_SprintStateChanged(bSprinting);
}
