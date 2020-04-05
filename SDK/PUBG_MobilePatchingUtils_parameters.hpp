#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MobilePatchingUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MobilePatchingUtils.MobileInstalledContent.Mount
struct UMobileInstalledContent_Mount_Params
{
<<<<<<< HEAD
	int*                                               PakOrder;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    MountPoint;                                               // (Parm, ZeroConstructor)
=======
	int                                                PakOrder;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MountPoint;                                               // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
struct UMobileInstalledContent_GetInstalledContentSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
struct UMobileInstalledContent_GetDiskFreeSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.StartInstall
struct UMobilePendingContent_StartInstall_Params
{
<<<<<<< HEAD
	struct FScriptDelegate*                            OnSucceeded;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate*                            OnFailed;                                                 // (Parm, ZeroConstructor)
=======
	struct FScriptDelegate                             OnSucceeded;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnFailed;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
struct UMobilePendingContent_GetTotalDownloadedSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
struct UMobilePendingContent_GetRequiredDiskSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
struct UMobilePendingContent_GetInstallProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
struct UMobilePendingContent_GetDownloadStatusText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
struct UMobilePendingContent_GetDownloadSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
struct UMobilePendingContent_GetDownloadSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
struct UMobilePatchingLibrary_RequestContent_Params
{
<<<<<<< HEAD
	struct FString*                                    RemoteManifestURL;                                        // (Parm, ZeroConstructor)
	struct FString*                                    CloudURL;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    InstallDirectory;                                         // (Parm, ZeroConstructor)
	struct FScriptDelegate*                            OnSucceeded;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate*                            OnFailed;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     RemoteManifestURL;                                        // (Parm, ZeroConstructor)
	struct FString                                     CloudURL;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InstallDirectory;                                         // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnSucceeded;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnFailed;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
struct UMobilePatchingLibrary_HasActiveWiFiConnection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
struct UMobilePatchingLibrary_GetSupportedPlatformNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
struct UMobilePatchingLibrary_GetInstalledContent_Params
{
<<<<<<< HEAD
	struct FString*                                    InstallDirectory;                                         // (Parm, ZeroConstructor)
=======
	struct FString                                     InstallDirectory;                                         // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UMobileInstalledContent*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
struct UMobilePatchingLibrary_GetActiveDeviceProfileName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
