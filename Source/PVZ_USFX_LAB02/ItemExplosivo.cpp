// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemExplosivo.h"
#include "Zombie.h"

AItemExplosivo::AItemExplosivo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ItemMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/EsferaExplosiva.EsferaExplosiva'"));
	ItemMeshComponent->SetStaticMesh(ItemMesh.Object);

	ItemMeshComponent->BodyInstance.SetCollisionProfileName("Item");
}

void AItemExplosivo::AplicarEfecto(AZombie* Zombie)
{
	float vida = Zombie->GetHealth() - 80;
	Zombie->SetHealth(vida);
	this->Destroy();
}
