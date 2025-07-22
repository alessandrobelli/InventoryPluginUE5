// Copyright Epic Games, Inc. All Rights Reserved.


#include "Variant_Horror/HorrorPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "DemoJobCameraManager.h"
#include "HorrorCharacter.h"
#include "HorrorUI.h"

AHorrorPlayerController::AHorrorPlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = ADemoJobCameraManager::StaticClass();
}

void AHorrorPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	// set up the UI for the character
	if (AHorrorCharacter* HorrorCharacter = Cast<AHorrorCharacter>(aPawn))
	{
		// create the UI
		if (!HorrorUI)
		{
			HorrorUI = CreateWidget<UHorrorUI>(this, HorrorUIClass);
			HorrorUI->AddToViewport(0);
		}

		HorrorUI->SetupCharacter(HorrorCharacter);
	}
}

void AHorrorPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	// Add Input Mapping Contexts
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}
	}
}
