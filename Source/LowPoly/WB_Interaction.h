// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WB_Interaction.generated.h"

/**
 * 
 */
UCLASS()
class LOWPOLY_API UWB_Interaction : public UUserWidget
{
	GENERATED_BODY()
public:
	void UWidget();
	void INamedSlotInterface();
};
