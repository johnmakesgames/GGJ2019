// Fill out your copyright notice in the Description page of Project Settings.

#include "NavigationNode_Climbing.h"

void ANavigationNode_Climbing::BeginPlay()
{
	Super::BeginPlay();
	_nodeType = NodeTypes::Climbing;
}