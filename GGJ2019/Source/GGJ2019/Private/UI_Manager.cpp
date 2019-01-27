// Fill out your copyright notice in the Description page of Project Settings.

#include "UI_Manager.h"
#include "Player_Base.h"
#include "Fridge_Base.h"

// Sets default values
AUI_Manager::AUI_Manager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AUI_Manager::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AUI_Manager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GetEquippedWeapon();
	GetFoodRemaining();
}

void AUI_Manager::KillCount(float value)
{
	enemyKilled += value;
}

void AUI_Manager::GetEquippedWeapon()
{
	//currentWeapon = player->currentWeapon;
}

void AUI_Manager::GetFoodRemaining()
{
	foodRemaining = fridge->foodInFridge.Num();
}

void AUI_Manager::SetFridgerRef(AFridge_Base* pfridge)
{
	this->fridge = pfridge;
}

void AUI_Manager::SetPlayerRef(APlayer_Base* pPlayer)
{
	this->player = pPlayer;
}