// Fill out your copyright notice in the Description page of Project Settings.

#include "NavigationNode_Base.h"


// Sets default values
ANavigationNode_Base::ANavigationNode_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	fridgePos = FVector(0, 0, 0);
}

// Called when the game starts or when spawned
void ANavigationNode_Base::BeginPlay()
{
	Super::BeginPlay();
	FVector distance;
	distance.X = FMath::Abs(this->GetActorLocation().X - fridgePos.X);
	distance.Y = FMath::Abs(this->GetActorLocation().X - fridgePos.X);
	distance.Z = FMath::Abs(this->GetActorLocation().X - fridgePos.X);
	distanceToFridge = FMath::Sqrt(FMath::Pow(distance.X, 2) + FMath::Pow(distance.Y, 2) + FMath::Pow(distance.Z, 2));
}

// Called every frame
void ANavigationNode_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

