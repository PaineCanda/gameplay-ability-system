#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "MovementPropertiesSet.h"
#include "WeaponAnimSet.generated.h"

class AWeaponBase;

USTRUCT(BlueprintType)
struct GAS_API FWeaponDataSet
{
    GENERATED_BODY()

    /* ===================== SPAWNING ===================== */

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TSubclassOf<class AWeaponBase> WeaponClass;

    /* ===================== ABILITIES ===================== */

    // Abilities granted while this weapon is equipped
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TArray<TSubclassOf<class UGameplayAbility>> AbilitiesToGrant;

    /* ===================== UI ===================== */

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    bool bShouldShowCrosshair = false;

    /* ===================== MOVEMENT ===================== */

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    FMovementPropertiesSet MovementProperties;

    /* ===================== CAMERA ===================== */

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    FVector CameraSocketOffset = FVector::ZeroVector;

    /* ===================== ANIMATION ===================== */

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TObjectPtr<class UAnimMontage> EquipMontage;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TObjectPtr<class UAnimMontage> UnequipMontage;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TSubclassOf<class UAnimInstance> AnimBPClass;

    /* ===================== SOCKETS ===================== */

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    FName EquippedSocket;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    FName HolsteredSocket;

};