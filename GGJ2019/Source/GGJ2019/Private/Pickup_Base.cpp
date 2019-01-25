// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup_Base.h"
#include "Components/SphereComponent.h"



// Sets default values
APickup_Base::APickup_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	baseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	pickupCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Pickup Circle Collider"));
	
	pickupActive = true;
}

// Called when the game starts or when spawned
void APickup_Base::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APickup_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

