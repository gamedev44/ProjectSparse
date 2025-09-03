// Copyright 2019 Tefel. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SettingsSaveGame.generated.h"


/**
 * Settings savegame stores user settings data from one game session to another
 */
UCLASS()
class VOXELSANDBOX_API USettingsSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	TArray<int32> Graphics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	TArray<bool> General;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	int32 Resolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	int32 RenderRange;

};