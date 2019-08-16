// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAMETUTORIAL_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		class UUserWidget* EnemyHealthBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<UUserWidget>WEnemyHealthBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<UUserWidget>HUDOverlayAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		UUserWidget* HUDOverlay;

	bool bEnemyHealthBarVisible;

	void DisplayEnemyHealthBar();
	void RemoveEnemyHealthbar();

	FVector EnemyLocation;

	
protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
};
