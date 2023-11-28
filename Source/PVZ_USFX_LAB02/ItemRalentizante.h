// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items.h"
#include "ItemRalentizante.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AItemRalentizante : public AItems
{
	GENERATED_BODY()
	
public:
	AItemRalentizante();
	
	virtual void AplicarEfecto(class AZombie* Zombie) override;

};
