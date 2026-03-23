// Code written by Fabio Pittaccio - 2026

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EventUtils.generated.h"

UENUM(BlueprintType)
enum class EBranch : uint8
{
	SameID,
	DifferentID
};

/**
 * @brief This Blueprint Function Library provides utility functions for event handling, 
 * such as extracting entity IDs for logging and validating event data against expected entities.
 * These functions help maintain clean and informative event logs
 * and ensure that events are processed by the correct entities, 
 * reducing errors and improving debugging efficiency.
 */
UCLASS()
class STATETREES_API UEventUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	
	// Get the Entity ID from the Path Name of the object
	UFUNCTION(BlueprintPure, Category = CustomUtils)
	static FString GetEntityID(const UObject* Object);
	
	// If the instigator is null, log a message with the instigator's name
	UFUNCTION(BlueprintCallable, Category = CustomUtils)
	static void PassedNull(const UObject* Object, const FString Instigator);

	// Check if the Entity ID from the object matches the one from the event data, and branch accordingly
	UFUNCTION(BlueprintCallable, Category = CustomUtils, meta = (Keyword = "if", ExpandEnumAsExecs = "Branch"))
	static void CheckEntityID(const UObject* Object, const FString DataEntityID, EBranch& Branch);
};
