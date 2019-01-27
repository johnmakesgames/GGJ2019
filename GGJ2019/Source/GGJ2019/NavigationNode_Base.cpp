// Fill out your copyright notice in the Description page of Project Settings.

#include "NavigationNode_Base.h"


// Sets default values
ANavigationNode_Base::ANavigationNode_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	fridgePos = FVector(-237.0, 156.0, 104.0);
}

// Called when the game starts or when spawned
void ANavigationNode_Base::BeginPlay()
{
	Super::BeginPlay();
	FVector distance;
	_nodeType = NodeTypes::Walking;
	distance.X = FMath::Abs(this->GetActorLocation().X - fridgePos.X);
	distance.Y = FMath::Abs(this->GetActorLocation().Y - fridgePos.Y);
	distance.Z = FMath::Abs(this->GetActorLocation().Z - fridgePos.Z);
	distanceToFridge = FMath::Sqrt(FMath::Pow(distance.X, 2) + FMath::Pow(distance.Y, 2) + FMath::Pow(distance.Z, 2));
}

// Called every frame
void ANavigationNode_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ANavigationNode_Base::GetDistanceToPoint(FVector point)
{
	FVector distance;
	distance.X = FMath::Abs(this->GetActorLocation().X - point.X);
	distance.Y = FMath::Abs(this->GetActorLocation().Y - point.Y);
	distance.Z = FMath::Abs(this->GetActorLocation().Z - point.Z);
	return FMath::Sqrt(FMath::Pow(distance.X, 2) + FMath::Pow(distance.Y, 2) + FMath::Pow(distance.Z, 2));
}

