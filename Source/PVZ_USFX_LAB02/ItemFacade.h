// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Items.h"
#include "ItemFacade.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AItemFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float tiempoEntreSpawn;
	float tiempoTranscurrido;
	int CantidadItems;
	int CantidadItemsSpawned;

public:
	void setTiempoEntreSpawn(float tiempo) { tiempoEntreSpawn = tiempo; }
	void setCantidadItems(int cantidad) { CantidadItems = cantidad; }

	AItems* ItemCongelante;
	AItems* ItemRalentizante;
	AItems* ItemExplosivo;

	void spawnearItem();

};
