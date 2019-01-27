// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavigationNode_Base.generated.h"

UCLASS()
class GGJ2019_API ANavigationNode_Base : public AActor
{
	GENERATED_BODY()

public:
	enum NodeTypes { Walking, Crawling, Climbing, Exit };
	NodeTypes _nodeType;

protected:
	FVector fridgePos;

public:	
	// Sets default values for this actor's properties

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float distanceToFridge;


public:	
	ANavigationNode_Base();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float GetDistanceToFridge() { return distanceToFridge; };
	float GetDistanceToPoint(FVector point);
};
