// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup_Base.h"
#include "Enemy_Base.h"
#include "Pickup_Weapon.generated.h"

/**
 * 
 */
class UBoxComponent;

UCLASS()
class GGJ2019_API APickup_Weapon : public APickup_Base
{
	GENERATED_BODY()
	
public:	
	APickup_Weapon();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* damageCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool damageActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float damage;

	UFUNCTION(BlueprintCallable)
		void OnWeaponBeginOverlap(TArray<AActor*> actor);
};