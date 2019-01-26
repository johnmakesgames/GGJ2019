// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Global_Variables.h"
#include "UI_Manager.generated.h"

class APlayer_Base;
class AFridge_Base;

UCLASS()
class GGJ2019_API AUI_Manager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUI_Manager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UI")
	APlayer_Base* player;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "UI")
	AFridge_Base* fridge;

	WeaponType currentWeapon;
	int enemyKilled;
	int foodRemaining;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Enemy")
		void KillCount(float value);	

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		void GetEquippedWeapon();

	UFUNCTION(BlueprintCallable, Category = "Fridge")
		void GetFoodRemaining();

	UFUNCTION(BlueprintCallable, Category = "Fridge")
		int ReturnFood() { return foodRemaining; }

	UFUNCTION(BlueprintCallable, Category = "Enemy")
		int ReturnKillCount() { return enemyKilled; }

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		int ReturnEquippedWeapon() { return currentWeapon; }

	UFUNCTION(BlueprintCallable, Category = "UI")
		void SetFridgerRef(AFridge_Base* pfridge);

	UFUNCTION(BlueprintCallable, Category = "UI")
		void SetPlayerRef(APlayer_Base* pPlayer);
};