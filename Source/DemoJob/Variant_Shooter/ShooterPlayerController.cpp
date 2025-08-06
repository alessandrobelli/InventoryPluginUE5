// Copyright Epic Games, Inc. All Rights Reserved.


#include "Variant_Shooter/ShooterPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "ShooterCharacter.h"
#include "ShooterGameMode.h"
#include "ShooterUI.h"
#include "InventoryManagement/Components/Inv_InventoryComponent.h"

void AShooterPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AShooterPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	// add the input mapping contexts
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				if (CurrentContext)
				{
					Subsystem->AddMappingContext(CurrentContext, 0);
				}
			}
		}
	}
}

void AShooterPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// is this a shooter character?
	if (AShooterCharacter* ShooterCharacter = Cast<AShooterCharacter>(InPawn))
	{
		// add the player tag
		ShooterCharacter->Tags.Add(PlayerPawnTag);
	}
}

void AShooterPlayerController::ToggleInventory()
{
	// Call the parent implementation first
	Super::ToggleInventory();

	// Get the ShooterUI from the GameMode and toggle its visibility
	if (AShooterGameMode* ShooterGameMode = Cast<AShooterGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (UShooterUI* ShooterUI = ShooterGameMode->GetShooterUI())
		{
			// Get the inventory component to check its state
			if (UInv_InventoryComponent* InvComp = FindComponentByClass<UInv_InventoryComponent>())
			{
				if (InvComp->IsInventoryMenuOpen())
				{
					// Hide Shooter UI when inventory is open
					ShooterUI->SetVisibility(ESlateVisibility::Hidden);
				}
				else
				{
					// Show Shooter UI when inventory is closed
					ShooterUI->SetVisibility(ESlateVisibility::Visible);
				}
			}
		}
	}
}
