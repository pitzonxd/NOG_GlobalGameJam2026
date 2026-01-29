// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomSceneCaptureComponent2D.h"


// Sets default values for this component's properties
UCustomSceneCaptureComponent2D::UCustomSceneCaptureComponent2D()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCustomSceneCaptureComponent2D::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCustomSceneCaptureComponent2D::TickComponent(float DeltaTime, ELevelTick TickType,
                                                   FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

