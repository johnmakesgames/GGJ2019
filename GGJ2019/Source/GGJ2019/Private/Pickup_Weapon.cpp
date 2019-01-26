// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup_Weapon.h"
#include "Components/BoxComponent.h"

APickup_Weapon::APickup_Weapon()
{
	damageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Box Component"));
	damageActive = false;
	damage = 5.0f;
}

void APickup_Weapon::OnWeaponBeginOverlap(TArray<AActor*> actorArray)
{
	for (int i = 0; i < actorArray.Num(); i++)
	{
		AEnemy_Base* enemy = Cast<AEnemy_Base>(actorArray[i]);

		enemy->Damage(damage);
	}
}