// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShooterPickup.generated.h"

UCLASS(abstract)
class DEMOJOB_API AShooterPickup : public AActor
{
	GENERATED_BODY()

public:
	AShooterPickup();
};