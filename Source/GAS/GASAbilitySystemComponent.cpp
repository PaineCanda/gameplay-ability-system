// Fill out your copyright notice in the Description page of Project Settings.

#include "GASAbilitySystemComponent.h"
#include "GASBaseCharacter.h"

void UGASAbilitySystemComponent::OnRep_ActivateAbilities()
{
	Super::OnRep_ActivateAbilities();
	AGASBaseCharacter *Character = Cast<AGASBaseCharacter>(GetOwner());
	if (!Character) { return; }

	bool bAbilitiesChanged = false;

	if (LastActivatableAbilities.Num() != ActivatableAbilities.Items.Num())
	{
		bAbilitiesChanged = true;
	}
	else
	{
		for (int32 i = 0; i < LastActivatableAbilities.Num(); i++)
		{
			if (LastActivatableAbilities[i].Ability != ActivatableAbilities.Items[i].Ability)
			{
				bAbilitiesChanged = true;
				break;
			}
		}
	}

	if (bAbilitiesChanged) {
		Character->SendAbilitiesChangedEvent();
		LastActivatableAbilities = ActivatableAbilities.Items;
	}

}
