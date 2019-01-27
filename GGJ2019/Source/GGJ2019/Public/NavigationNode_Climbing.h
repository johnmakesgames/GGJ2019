// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NavigationNode_Base.h"
#include "NavigationNode_Climbing.generated.h"

/**
 * 
 */
UCLASS()
class GGJ2019_API ANavigationNode_Climbing : public ANavigationNode_Base
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
};
