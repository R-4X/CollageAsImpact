// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PhotoUtility.generated.h"

/**
 * 
 */
UCLASS()
class COLLAGEASIMPACT_API UPhotoUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Photos")
	static bool ClearFolder(const FString& FolderPath);

	UFUNCTION(BlueprintCallable, Category = "Photos")
	static bool DeletePitcure(const FString& FilePath);
};
