// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemCongelante.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "Zombie.h"



AItemCongelante::AItemCongelante()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ItemMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/EsferaCongelada.EsferaCongelada'"));
	ItemMeshComponent->SetStaticMesh(ItemMesh.Object);

	ItemMeshComponent->BodyInstance.SetCollisionProfileName("Item");


	
}

void AItemCongelante::BeginPlay()
{
	Super::BeginPlay();
	//OnActorBeginOverlap.AddDynamic(this, &AItemCongelante::OnHit);
}

void AItemCongelante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AItemCongelante::AplicarEfecto(class AZombie* Zombie)
{
	Zombie->Inicializar("Congelado");
	this->Destroy();
}

