// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Base.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine.h"

// Sets default values
APlayer_Base::APlayer_Base()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	playerBaseComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Player Base"));
	RootComponent = playerBaseComponent;

	//Set up variables
	maxHealth  = 100.0f;
	playerHealth = maxHealth;

	movementSpeed = 75.0f;
}

// Called when the game starts or when spawned
void APlayer_Base::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlayer_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*if (!movementVelocity.IsZero())
	{
		FVector NewLocation = GetActorLocation() + (movementVelocity * DeltaTime);
		SetActorLocation(NewLocation);
	}*/

	AddMovementInput(GetActorForwardVector(), movementVelocity.X * DeltaTime);
	AddMovementInput(GetActorRightVector(), movementVelocity.Y * DeltaTime);
}

// Called to bind functionality to input
void APlayer_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayer_Base::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayer_Base::MoveRight);
	//PlayerInputComponent->BindAxis("Rotate", this, &APlayer_Base::Rotate);

	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &APlayer_Base::AttackEnemy);
}

void APlayer_Base::MoveForward(float value)
{
	movementVelocity.X = value * 100;
}

void APlayer_Base::MoveRight(float value)
{
	movementVelocity.Y = value * 100;
}

void APlayer_Base::Rotate(float value)
{
	playerBaseComponent->AddWorldRotation(FQuat(FRotator(0.0f, value, 0.0f)));
}

void APlayer_Base::AttackEnemy()
{

}