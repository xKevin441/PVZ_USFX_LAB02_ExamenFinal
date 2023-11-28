// Fill out your copyright notice in the Description page of Project Settings.


#include "Items.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
AItems::AItems()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ItemMesh(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	ItemMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemMeshComponent->SetStaticMesh(ItemMesh.Object);
	
	RootComponent = ItemMeshComponent;
	ItemMeshComponent->SetupAttachment(RootComponent);
	Tags.Add(TEXT("Item"));
}

// Called when the game starts or when spawned
void AItems::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

