// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Fridge_Base.h"
#include "Global_Variables.h"
#include "Pickup_Food.h"
#include "Pickup_Weapon.h"
#include "Player_Base.generated.h"

class UCharacterMovementComponent;
class USkeletalMeshComponent;
class UCameraComponent;

UCLASS()
class GGJ2019_API APlayer_Base : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Movement
	virtual void MoveRight(float value);
	virtual void MoveForward(float value);


	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector movementVelocity;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float movementSpeed;

	//Player
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	USkeletalMeshComponent* playerBaseComponent;
		
	//Stats
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	int maxHealth;
	int playerHealth;

	// CAMERA //
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UCameraComponent* playerCamera;

	// PICK UP STUFF //

	FoodTypes currentFood = None;
	WeaponType currentWeapon = NoneW;

	UPROPERTY(BlueprintReadWrite)
		APickup_Base* currentItemHeld;

	UFUNCTION(BlueprintCallable)
		FoodTypes getFoodType() { return currentFood; }

	UFUNCTION(BlueprintCallable)
		WeaponType getWeaponType() { return currentWeapon; }

	UPROPERTY(BlueprintReadWrite)
		bool holdingFood;

	UFUNCTION(BlueprintCallable)
		void pickUpFood(FoodTypes food, APickup_Food* foodRef); 

	UFUNCTION(BlueprintCallable)
		void pickUpWeapon(APickup_Weapon* weaponRef);

	UFUNCTION(BlueprintCallable)
		void dropCurrentItem();

	UFUNCTION(BlueprintCallable)
		void putFoodInFridge(AFridge_Base* fridge, FoodTypes food);
};