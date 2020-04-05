// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MobilePatchingUtils_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MobilePatchingUtils.MobileInstalledContent.Mount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           PakOrder                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                MountPoint                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8B9290              		 offset:4ae9290                       

bool UMobileInstalledContent::Mount(int* PakOrder, struct FString* MountPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobileInstalledContent.Mount"));

	UMobileInstalledContent_Mount_Params params;
	params.PakOrder = PakOrder;
	params.MountPoint = MountPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8B9110              		 offset:4ae9110                       

float UMobileInstalledContent::GetInstalledContentSize()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize"));

	UMobileInstalledContent_GetInstalledContentSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8B8F20              		 offset:4ae8f20                       

float UMobileInstalledContent::GetDiskFreeSpace()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace"));

	UMobileInstalledContent_GetDiskFreeSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.StartInstall
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        OnSucceeded                    (Parm, ZeroConstructor)
// struct FScriptDelegate*        OnFailed                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C8B9580              		 offset:4ae9580                       

void UMobilePendingContent::StartInstall(struct FScriptDelegate* OnSucceeded, struct FScriptDelegate* OnFailed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.StartInstall"));

	UMobilePendingContent_StartInstall_Params params;
	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8B9260              		 offset:4ae9260                       

float UMobilePendingContent::GetTotalDownloadedSize()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize"));

	UMobilePendingContent_GetTotalDownloadedSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8B9140              		 offset:4ae9140                       

float UMobilePendingContent::GetRequiredDiskSpace()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace"));

	UMobilePendingContent_GetRequiredDiskSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8B9040              		 offset:4ae9040                       

float UMobilePendingContent::GetInstallProgress()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress"));

	UMobilePendingContent_GetInstallProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71C8B8FB0              		 offset:4ae8fb0                       

struct FText UMobilePendingContent::GetDownloadStatusText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText"));

	UMobilePendingContent_GetDownloadStatusText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8B8F80              		 offset:4ae8f80                       

float UMobilePendingContent::GetDownloadSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed"));

	UMobilePendingContent_GetDownloadSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8B8F50              		 offset:4ae8f50                       

float UMobilePendingContent::GetDownloadSize()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize"));

	UMobilePendingContent_GetDownloadSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                RemoteManifestURL              (Parm, ZeroConstructor)
// struct FString*                CloudURL                       (Parm, ZeroConstructor)
// struct FString*                InstallDirectory               (Parm, ZeroConstructor)
// struct FScriptDelegate*        OnSucceeded                    (Parm, ZeroConstructor)
// struct FScriptDelegate*        OnFailed                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C8B9380              		 offset:4ae9380                       

void UMobilePatchingLibrary::STATIC_RequestContent(struct FString* RemoteManifestURL, struct FString* CloudURL, struct FString* InstallDirectory, struct FScriptDelegate* OnSucceeded, struct FScriptDelegate* OnFailed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent"));

	UMobilePatchingLibrary_RequestContent_Params params;
	params.RemoteManifestURL = RemoteManifestURL;
	params.CloudURL = CloudURL;
	params.InstallDirectory = InstallDirectory;
	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71B890420              		 offset:3ac0420                       

bool UMobilePatchingLibrary::STATIC_HasActiveWiFiConnection()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection"));

	UMobilePatchingLibrary_HasActiveWiFiConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C8B9170              		 offset:4ae9170                       

TArray<struct FString> UMobilePatchingLibrary::STATIC_GetSupportedPlatformNames()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames"));

	UMobilePatchingLibrary_GetSupportedPlatformNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString*                InstallDirectory               (Parm, ZeroConstructor)
// class UMobileInstalledContent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8B9070              		 offset:4ae9070                       

class UMobileInstalledContent* UMobilePatchingLibrary::STATIC_GetInstalledContent(struct FString* InstallDirectory)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent"));

	UMobilePatchingLibrary_GetInstalledContent_Params params;
	params.InstallDirectory = InstallDirectory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C8B8E90              		 offset:4ae8e90                       

struct FString UMobilePatchingLibrary::STATIC_GetActiveDeviceProfileName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName"));

	UMobilePatchingLibrary_GetActiveDeviceProfileName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
