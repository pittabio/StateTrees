// Code written by Fabio Pittaccio - 2026

#pragma once

#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "Engine/TriggerBox.h"
#include "LocationTrigger.generated.h"

UCLASS()
class STATETREES_API ALocationTrigger : public ATriggerBox
{
	GENERATED_BODY()
	
public:
	// Text Render Component
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "LocationTrigger")
	UTextRenderComponent* TextComponent;
	
	// Constructor
	ALocationTrigger();
};
