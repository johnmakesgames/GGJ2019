// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "NavigationNode_Base.h"
#include "MyNavigationNode_Exit.generated.h"

/**
 * 
 */
UCLASS()
class GGJ2019_API AMyNavigationNode_Exit : public ANavigationNode_Base
{
	GENERATED_BODY()
	virtual void BeginPlay() override;
};