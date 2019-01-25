// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_Base.generated.h"

class UCharacterMovementComponent;
class USkeletalMeshComponent;

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

	FVector movementVelocity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float movementSpeed;

	/*
	//Damage
	void TakeDamage();
	*/

	//Player
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	USkeletalMeshComponent* playerBaseComponent;
	
	void AttackEnemy();
		
	//Stats
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	int maxHealth;
	int playerHealth;
};