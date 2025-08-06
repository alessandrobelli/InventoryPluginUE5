// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShooterWeapon.generated.h"

UCLASS(abstract)
class DEMOJOB_API AShooterWeapon : public AActor
{
	GENERATED_BODY()

public:
	AShooterWeapon();
};