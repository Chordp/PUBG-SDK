#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MobilePatchingUtils_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MobilePatchingUtils.MobileInstalledContent
// 0x0020 (0x0048 - 0x0028)
class UMobileInstalledContent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MobilePatchingUtils.MobileInstalledContent"));

		return ptr;
	}


<<<<<<< HEAD
	bool Mount(int* PakOrder, struct FString* MountPoint);
=======
	bool Mount(int PakOrder, const struct FString& MountPoint);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	float GetInstalledContentSize();
	float GetDiskFreeSpace();
};


// Class MobilePatchingUtils.MobilePendingContent
// 0x0040 (0x0088 - 0x0048)
class UMobilePendingContent : public UMobileInstalledContent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MobilePatchingUtils.MobilePendingContent"));

		return ptr;
	}


<<<<<<< HEAD
	void StartInstall(struct FScriptDelegate* OnSucceeded, struct FScriptDelegate* OnFailed);
=======
	void StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	float GetTotalDownloadedSize();
	float GetRequiredDiskSpace();
	float GetInstallProgress();
	struct FText GetDownloadStatusText();
	float GetDownloadSpeed();
	float GetDownloadSize();
};


// Class MobilePatchingUtils.MobilePatchingLibrary
// 0x0000 (0x0028 - 0x0028)
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MobilePatchingUtils.MobilePatchingLibrary"));

		return ptr;
	}


<<<<<<< HEAD
	void STATIC_RequestContent(struct FString* RemoteManifestURL, struct FString* CloudURL, struct FString* InstallDirectory, struct FScriptDelegate* OnSucceeded, struct FScriptDelegate* OnFailed);
	bool STATIC_HasActiveWiFiConnection();
	TArray<struct FString> STATIC_GetSupportedPlatformNames();
	class UMobileInstalledContent* STATIC_GetInstalledContent(struct FString* InstallDirectory);
=======
	void STATIC_RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	bool STATIC_HasActiveWiFiConnection();
	TArray<struct FString> STATIC_GetSupportedPlatformNames();
	class UMobileInstalledContent* STATIC_GetInstalledContent(const struct FString& InstallDirectory);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString STATIC_GetActiveDeviceProfileName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
