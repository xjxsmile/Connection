// Copyright Epic Games, Inc. All Rights Reserved.

#include "ConnectMysql.h"

#define LOCTEXT_NAMESPACE "FConnectMysqlModule"


void FConnectMysqlModule::CopyDLL(FString DLLName)
{
	FString Pluginpath = IPluginManager::Get().FindPlugin(TEXT("ConnectMysql"))->GetBaseDir();
	FString PluginDLLPath = FPaths::Combine(*Pluginpath, TEXT("Binaries"), TEXT("Win64"), DLLName);

	FString ProjectDirectory = FPaths::ProjectDir();
	FString ProjectDLLDirectory = FPaths::Combine(*ProjectDirectory, TEXT("Binaries"), TEXT("Win64"));

	FString ProjectDLLPath = FPaths::Combine(*ProjectDLLDirectory, DLLName);

	if (!FPaths::DirectoryExists(*ProjectDLLDirectory))
	{
		FPlatformFileManager::Get().GetPlatformFile().CreateDirectoryTree(*ProjectDLLDirectory);
	}
	//IPlatformFile & PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (FPaths::FileExists(ProjectDLLPath))
	{
		IFileManager::Get().Copy(*PluginDLLPath, *ProjectDLLPath);
		//PlatformFile.CopyFile(*PluginDLLPath, *ProjectDLLPath,EPlatformFileRead::None, EPlatformFileWrite::None);
	}
	else if (FPaths::FileExists(PluginDLLPath))
	{
		IFileManager::Get().Copy(*ProjectDLLPath, *PluginDLLPath);
		//PlatformFile.CopyFile(*ProjectDLLPath, *PluginDLLPath);
	}
}

void FConnectMysqlModule::StartupModule()
{

}

void FConnectMysqlModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FConnectMysqlModule, ConnectMysql)