// Fill out your copyright notice in the Description page of Project Settings.


#include "PhotoUtility.h"
#include "HAL/FileManager.h"

bool UPhotoUtility::ClearFolder(const FString& FolderPath)
{
    IFileManager& FileManager = IFileManager::Get();

    // Supprime le dossier et tout son contenu
    bool bSuccess = FileManager.DeleteDirectory(
        *FolderPath,
        false,  // RequireExists
        true    // Tree = suppression récursive
    );

    // Recréation du dossier vide
    FileManager.MakeDirectory(*FolderPath, true);

    return bSuccess;
}

bool UPhotoUtility::DeletePitcure(const FString& FilePath)
{
    IFileManager& FileManager = IFileManager::Get();

	// Supprime le fichier spécifié
    bool bSuccess = FileManager.Delete(
        *FilePath,
        false,  // RequireExists
        true    // Tree = suppression récursive
    );
    return bSuccess;
}