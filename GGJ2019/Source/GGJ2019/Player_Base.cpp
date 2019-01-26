  // Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Base.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine.h"

// Sets default values
APlayer_Base::APlayer_Base()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	playerBaseComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Player Base"));
	//RootComponent = playerBaseComponent;

	playerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));

	//Set up variables
	maxHealth  = 100.0f;
	playerHealth = maxHealth;
	movementSpeed = 75.0f;
	holdingFood = false;
	
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

	AddMovementInput(GetActorForwardVector(), movementVelocity.X * DeltaTime);
	AddMovementInput(GetActorRightVector(), movementVelocity.Y * DeltaTime);
}

// Called to bind functionality to input
void APlayer_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayer_Base::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayer_Base::MoveRight);
}

void APlayer_Base::MoveForward(float value)
{
	movementVelocity.X = value * 100;
}

void APlayer_Base::MoveRight(float value)
{
	movementVelocity.Y = value * 100;
}

void APlayer_Base::putFoodInFridge(AFridge_Base* fridge, FoodTypes food)
{
	fridge->ReplaceFood(food);
	currentFood = None;
	holdingFood = false;
}

void APlayer_Base::pickUpFood(FoodTypes food, APickup_Food* foodRef) 
{
	holdingFood = true;
	currentFood = food;

	dropCurrentItem();
	currentItemHeld = foodRef;
}

void APlayer_Base::pickUpWeapon(APickup_Weapon* weaponRef)
{
	dropCurrentItem();
	currentWeapon = weaponRef->getWeaponType();
	currentItemHeld = weaponRef;
}

void APlayer_Base::dropCurrentItem()
{
	currentItemHeld = nullptr;
}