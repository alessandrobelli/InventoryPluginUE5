// Copyright Epic Games, Inc. All Rights Reserved.


#include "Variant_Shooter/ShooterGameMode.h"
#include "ShooterUI.h"
#include "ShooterCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

void AShooterGameMode::BeginPlay()
{
	Super::BeginPlay();

	// create the UI (only on server/standalone)
	if (ShooterUIClass)
	{
		if (APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0))
		{
			ShooterUI = CreateWidget<UShooterUI>(PC, ShooterUIClass);
			if (ShooterUI)
			{
				ShooterUI->AddToViewport(0);
			}
		}
	}
}

void AShooterGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	// Wait a bit for the player to possess their pawn, then connect the UI
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, NewPlayer]()
	{
		if (ShooterUI && NewPlayer && NewPlayer->GetPawn())
		{
			if (AShooterCharacter* ShooterCharacter = Cast<AShooterCharacter>(NewPlayer->GetPawn()))
			{
				ShooterUI->SetupCharacter(ShooterCharacter);
			}
		}
	}, 0.1f, false);
}

