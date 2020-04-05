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
// struct FString*                Filename                       (Parm, ZeroConstructor)
// int*                           ByteCount                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                FilePath                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF7195C23E0              		 offset:17f23e0                       

void UWFUFileListInterface::OnListFileFound(struct FString* Filename, int* ByteCount, struct FString* FilePath)
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
// struct FString*                DirectoryPath                  (Parm, ZeroConstructor)
// TArray<struct FString>*        Files                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>*        Folders                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF7195C2220              		 offset:17f2220                       

void UWFUFileListInterface::OnListDone(struct FString* DirectoryPath, TArray<struct FString>* Files, TArray<struct FString>* Folders)
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
// struct FString*                DirectoryName                  (Parm, ZeroConstructor)
// struct FString*                FilePath                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF7195C2120              		 offset:17f2120                       

void UWFUFileListInterface::OnListDirectoryFound(struct FString* DirectoryName, struct FString* FilePath)
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
// struct FString*                Filename                       (Parm, ZeroConstructor)
// struct FString*                FilePath                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF7195C2020              		 offset:17f2020                       

void UWFUFolderWatchInterface::OnFileChanged(struct FString* Filename, struct FString* FilePath)
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
// struct FString*                DirectoryName                  (Parm, ZeroConstructor)
// struct FString*                DirectoryPath                  (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF7195C1F20              		 offset:17f1f20                       

void UWFUFolderWatchInterface::OnDirectoryChanged(struct FString* DirectoryName, struct FString* DirectoryPath)
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
// struct FString*                FullPath                       (Parm, ZeroConstructor)
// class UObject**                WatcherDelegate                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7195C25F0              		 offset:17f25f0                       

void UWindowsFileUtilityFunctionLibrary::STATIC_WatchFolder(struct FString* FullPath, class UObject** WatcherDelegate)
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
// struct FString*                FullPath                       (Parm, ZeroConstructor)
// class UObject**                WatcherDelegate                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7195C2520              		 offset:17f2520                       

void UWindowsFileUtilityFunctionLibrary::STATIC_StopWatchingFolder(struct FString* FullPath, class UObject** WatcherDelegate)
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
// struct FString*                From                           (Parm, ZeroConstructor)
// struct FString*                To                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7195C1E20              		 offset:17f1e20                       

bool UWindowsFileUtilityFunctionLibrary::STATIC_MoveFileTo(struct FString* From, struct FString* To)
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
// struct FString*                FullPath                       (Parm, ZeroConstructor)
// class UObject**                ListDelegate                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7195C1D50              		 offset:17f1d50                       

void UWindowsFileUtilityFunctionLibrary::STATIC_ListContentsOfFolder(struct FString* FullPath, class UObject** ListDelegate)
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
// struct FString*                FullPath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7195C1CB0              		 offset:17f1cb0                       

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteFolderRecursively(struct FString* FullPath)
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
// struct FString*                FullPath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7195C1C10              		 offset:17f1c10                       

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteFileAt(struct FString* FullPath)
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
// struct FString*                FullPath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7195C1B70              		 offset:17f1b70                       

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteEmptyFolder(struct FString* FullPath)
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
// struct FString*                FullPath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7195C1AD0              		 offset:17f1ad0                       

bool UWindowsFileUtilityFunctionLibrary::STATIC_CreateDirectoryAt(struct FString* FullPath)
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
