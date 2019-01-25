// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup_Weapon.h"
#include "Components/BoxComponent.h"


APickup_Weapon::APickup_Weapon()
{
	damageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Box Component"));
	damageActive = false;
}


void APickup_Weapon::OnWeaponBeginOverlap(TArray<AActor*> actorArray)
{
	for (int i = 0; i < actorArray.Num(); i++)
	{
		//cast to base enemy
		//damage enemy
	}
}