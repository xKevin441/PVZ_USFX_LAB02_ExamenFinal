// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items.h"
#include "ItemExplosivo.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AItemExplosivo : public AItems
{
	GENERATED_BODY()
	
public:
	AItemExplosivo();
	
	virtual void AplicarEfecto(class AZombie* Zombie) override;
};
