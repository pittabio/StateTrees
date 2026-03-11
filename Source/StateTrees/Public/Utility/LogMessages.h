// Code written by Fabio Pittaccio - 2026

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LogMessages.generated.h"

/**
 * @brief ULogMessages is a utility class used to display messages on the screen for debugging purposes.
 */
UCLASS()
class STATETREES_API ULogMessages : public UObject
{
	GENERATED_BODY()
	
public:
	static void OnScreen(const FString& Message, float TimeToDisplay = 5.f, FColor Color = FColor::Red);
};
