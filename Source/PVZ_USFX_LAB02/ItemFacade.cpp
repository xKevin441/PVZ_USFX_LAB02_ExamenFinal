// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemFacade.h"
#include "Items.h"
#include "ItemCongelante.h"
#include "ItemRalentizante.h"
#include "ItemExplosivo.h"

// Sets default values
AItemFacade::AItemFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItemFacade::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	tiempoTranscurrido += DeltaTime;
	if (tiempoTranscurrido >= tiempoEntreSpawn && CantidadItemsSpawned <= CantidadItems)
	{
		spawnearItem();
		tiempoTranscurrido = 0;
		CantidadItemsSpawned++;
	}
}

void AItemFacade::spawnearItem()
{
	// Posicion aleatoria
	float X = FMath::RandRange(-670.0f, -1700.0f);
	float Y = FMath::RandRange(300.0f, 1200.0f);
	float Z = 120.f;

	// Tipo de item aleatorio
	int32 tipoItem = FMath::RandRange(0, 2);

	// Spawnear item
	if (tipoItem == 0)
	{
		ItemCongelante = GetWorld()->SpawnActor<AItemCongelante>(AItemCongelante::StaticClass(), FVector(X, Y, Z), FRotator::ZeroRotator);
	}
	else if (tipoItem == 1)
	{
		ItemRalentizante = GetWorld()->SpawnActor<AItemRalentizante>(AItemRalentizante::StaticClass(), FVector(X, Y, Z), FRotator::ZeroRotator);
	}
	else if (tipoItem == 2)
	{
		ItemExplosivo = GetWorld()->SpawnActor<AItemExplosivo>(AItemExplosivo::StaticClass(), FVector(X, Y, Z), FRotator::ZeroRotator);
	}
}

