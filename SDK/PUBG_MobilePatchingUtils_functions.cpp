// PUBG (8.3.5.39) SDK

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
// int                            PakOrder                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MountPoint                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B61D320              		 offset:2b4d320                       

bool UMobileInstalledContent::Mount(int PakOrder, const struct FString& MountPoint)
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
// FunctionAddress:0x00007FF62B61D1A0              		 offset:2b4d1a0                       

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
// FunctionAddress:0x00007FF62B61CFB0              		 offset:2b4cfb0                       

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
// struct FScriptDelegate         OnSucceeded                    (Parm, ZeroConstructor)
// struct FScriptDelegate         OnFailed                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B61D610              		 offset:2b4d610                       

void UMobilePendingContent::StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
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
// FunctionAddress:0x00007FF62B61D2F0              		 offset:2b4d2f0                       

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
// FunctionAddress:0x00007FF62B61D1D0              		 offset:2b4d1d0                       

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
// FunctionAddress:0x00007FF62B61D0D0              		 offset:2b4d0d0                       

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
// FunctionAddress:0x00007FF62B61D040              		 offset:2b4d040                       

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
// FunctionAddress:0x00007FF62B61D010              		 offset:2b4d010                       

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
// FunctionAddress:0x00007FF62B61CFE0              		 offset:2b4cfe0                       

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
// struct FString                 RemoteManifestURL              (Parm, ZeroConstructor)
// struct FString                 CloudURL                       (Parm, ZeroConstructor)
// struct FString                 InstallDirectory               (Parm, ZeroConstructor)
// struct FScriptDelegate         OnSucceeded                    (Parm, ZeroConstructor)
// struct FScriptDelegate         OnFailed                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B61D410              		 offset:2b4d410                       

void UMobilePatchingLibrary::STATIC_RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
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
// FunctionAddress:0x00007FF629145080              		 offset:675080                        

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
// FunctionAddress:0x00007FF62B61D200              		 offset:2b4d200                       

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
// struct FString                 InstallDirectory               (Parm, ZeroConstructor)
// class UMobileInstalledContent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B61D100              		 offset:2b4d100                       

class UMobileInstalledContent* UMobilePatchingLibrary::STATIC_GetInstalledContent(const struct FString& InstallDirectory)
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
// FunctionAddress:0x00007FF62B61CF20              		 offset:2b4cf20                       

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
