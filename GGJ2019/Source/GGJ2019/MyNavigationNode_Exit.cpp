// Fill out your copyright notice in the Description page of Project Settings.
#include "MyNavigationNode_Exit.h"

void AMyNavigationNode_Exit::BeginPlay()
{
	Super::BeginPlay();
	_nodeType = NodeTypes::Walking;
}