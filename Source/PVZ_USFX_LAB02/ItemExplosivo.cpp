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
	float vida = Zombie->GetHealth() - 90;
	Zombie->SetHealth(vida);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, FString::Printf(TEXT("Zombie exploto, vida: %f"), Zombie->GetHealth()));

	this->Destroy();
}
