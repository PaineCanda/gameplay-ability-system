// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MovementPropertiesSet.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct GAS_API FMovementPropertiesSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bOrientRotationToMovement = false;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bUseControllerDesiredRotation = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MaxWalkSpeed = 0.f;


};
