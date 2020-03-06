// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WindowsFileUtility_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WindowsFileUtility.WFUFileListInterface.OnListFileFound
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// int                            ByteCount                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D8B95B20              		 offset:21d5b20                       

void UWFUFileListInterface::OnListFileFound(const struct FString& Filename, int ByteCount, const struct FString& FilePath)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WFUFileListInterface.OnListFileFound"));

	UWFUFileListInterface_OnListFileFound_Params params;
	params.Filename = Filename;
	params.ByteCount = ByteCount;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFileListInterface.OnListDone
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 DirectoryPath                  (Parm, ZeroConstructor)
// TArray<struct FString>         Files                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         Folders                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6D8B95960              		 offset:21d5960                       

void UWFUFileListInterface::OnListDone(const struct FString& DirectoryPath, TArray<struct FString> Files, TArray<struct FString> Folders)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WFUFileListInterface.OnListDone"));

	UWFUFileListInterface_OnListDone_Params params;
	params.DirectoryPath = DirectoryPath;
	params.Files = Files;
	params.Folders = Folders;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 DirectoryName                  (Parm, ZeroConstructor)
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D8B95860              		 offset:21d5860                       

void UWFUFileListInterface::OnListDirectoryFound(const struct FString& DirectoryName, const struct FString& FilePath)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound"));

	UWFUFileListInterface_OnListDirectoryFound_Params params;
	params.DirectoryName = DirectoryName;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D8B95760              		 offset:21d5760                       

void UWFUFolderWatchInterface::OnFileChanged(const struct FString& Filename, const struct FString& FilePath)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged"));

	UWFUFolderWatchInterface_OnFileChanged_Params params;
	params.Filename = Filename;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 DirectoryName                  (Parm, ZeroConstructor)
// struct FString                 DirectoryPath                  (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D8B95660              		 offset:21d5660                       

void UWFUFolderWatchInterface::OnDirectoryChanged(const struct FString& DirectoryName, const struct FString& DirectoryPath)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged"));

	UWFUFolderWatchInterface_OnDirectoryChanged_Params params;
	params.DirectoryName = DirectoryName;
	params.DirectoryPath = DirectoryPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (Parm, ZeroConstructor)
// class UObject*                 WatcherDelegate                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8B95D30              		 offset:21d5d30                       

void UWindowsFileUtilityFunctionLibrary::STATIC_WatchFolder(const struct FString& FullPath, class UObject* WatcherDelegate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder"));

	UWindowsFileUtilityFunctionLibrary_WatchFolder_Params params;
	params.FullPath = FullPath;
	params.WatcherDelegate = WatcherDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (Parm, ZeroConstructor)
// class UObject*                 WatcherDelegate                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8B95C60              		 offset:21d5c60                       

void UWindowsFileUtilityFunctionLibrary::STATIC_StopWatchingFolder(const struct FString& FullPath, class UObject* WatcherDelegate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder"));

	UWindowsFileUtilityFunctionLibrary_StopWatchingFolder_Params params;
	params.FullPath = FullPath;
	params.WatcherDelegate = WatcherDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 From                           (Parm, ZeroConstructor)
// struct FString                 To                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8B95560              		 offset:21d5560                       

bool UWindowsFileUtilityFunctionLibrary::STATIC_MoveFileTo(const struct FString& From, const struct FString& To)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo"));

	UWindowsFileUtilityFunctionLibrary_MoveFileTo_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (Parm, ZeroConstructor)
// class UObject*                 ListDelegate                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8B95490              		 offset:21d5490                       

void UWindowsFileUtilityFunctionLibrary::STATIC_ListContentsOfFolder(const struct FString& FullPath, class UObject* ListDelegate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder"));

	UWindowsFileUtilityFunctionLibrary_ListContentsOfFolder_Params params;
	params.FullPath = FullPath;
	params.ListDelegate = ListDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8B953F0              		 offset:21d53f0                       

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteFolderRecursively(const struct FString& FullPath)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively"));

	UWindowsFileUtilityFunctionLibrary_DeleteFolderRecursively_Params params;
	params.FullPath = FullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8B95350              		 offset:21d5350                       

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteFileAt(const struct FString& FullPath)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt"));

	UWindowsFileUtilityFunctionLibrary_DeleteFileAt_Params params;
	params.FullPath = FullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8B952B0              		 offset:21d52b0                       

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteEmptyFolder(const struct FString& FullPath)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder"));

	UWindowsFileUtilityFunctionLibrary_DeleteEmptyFolder_Params params;
	params.FullPath = FullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8B95210              		 offset:21d5210                       

bool UWindowsFileUtilityFunctionLibrary::STATIC_CreateDirectoryAt(const struct FString& FullPath)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt"));

	UWindowsFileUtilityFunctionLibrary_CreateDirectoryAt_Params params;
	params.FullPath = FullPath;

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
