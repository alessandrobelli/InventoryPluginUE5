// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DemoJobCharacter.h"
#include "ShooterNPC.generated.h"

UCLASS(abstract)
class DEMOJOB_API AShooterNPC : public ADemoJobCharacter
{
	GENERATED_BODY()

public:
	AShooterNPC();
};