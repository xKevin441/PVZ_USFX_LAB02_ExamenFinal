// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items.h"
#include "ItemCongelante.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AItemCongelante : public AItems
{
	GENERATED_BODY()
	
public:
	AItemCongelante();
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	virtual void AplicarEfecto(class AZombie* Zombie) override;
};
