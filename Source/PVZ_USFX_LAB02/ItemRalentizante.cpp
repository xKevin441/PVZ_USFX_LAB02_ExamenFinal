// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemRalentizante.h"
#include "Zombie.h"

AItemRalentizante::AItemRalentizante()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ItemMesh(TEXT("StStaticMesh'/Game/StarterContent/Shapes/EsferaRalentizante.EsferaRalentizante'"));
	ItemMeshComponent->SetStaticMesh(ItemMesh.Object);

	ItemMeshComponent->BodyInstance.SetCollisionProfileName("Item");
}

void AItemRalentizante::AplicarEfecto(AZombie* Zombie)
{
	Zombie->Inicializar("Ralentizado");
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("El zombie fue ralentizado")));
	this->Destroy();
}
