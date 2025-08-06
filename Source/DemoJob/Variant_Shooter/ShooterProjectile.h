// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShooterProjectile.generated.h"

UCLASS(abstract)
class DEMOJOB_API AShooterProjectile : public AActor
{
	GENERATED_BODY()

public:
	AShooterProjectile();
};