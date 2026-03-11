// Code written by Fabio Pittaccio - 2026

#include "Utility/LogMessages.h"

void ULogMessages::OnScreen(const FString& Message, const float TimeToDisplay, const FColor Color)
{
	GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, Color, Message);
}
