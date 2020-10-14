// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ZipUtility_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZipUtility.ZipUtilityInterface.OnStartProcess
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// int                            bytes                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62BC3FBD0              		 offset:316fbd0                       

void UZipUtilityInterface::OnStartProcess(const struct FString& archive, int bytes)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipUtilityInterface.OnStartProcess"));

	UZipUtilityInterface_OnStartProcess_Params params;
	params.archive = archive;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnProgress
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            bytes                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62BC125E0              		 offset:31425e0                       

void UZipUtilityInterface::OnProgress(const struct FString& archive, float Percentage, int bytes)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipUtilityInterface.OnProgress"));

	UZipUtilityInterface_OnProgress_Params params;
	params.archive = archive;
	params.Percentage = Percentage;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnFileFound
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// struct FString                 file                           (Parm, ZeroConstructor)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62C765F50              		 offset:3c95f50                       

void UZipUtilityInterface::OnFileFound(const struct FString& archive, const struct FString& file, int Size)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipUtilityInterface.OnFileFound"));

	UZipUtilityInterface_OnFileFound_Params params;
	params.archive = archive;
	params.file = file;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnFileDone
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// struct FString                 file                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6299875A0              		 offset:eb75a0                        

void UZipUtilityInterface::OnFileDone(const struct FString& archive, const struct FString& file)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipUtilityInterface.OnFileDone"));

	UZipUtilityInterface_OnFileDone_Params params;
	params.archive = archive;
	params.file = file;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnDone
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// TEnumAsByte<EZipUtilityCompletionState> CompletionState                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62A99B580              		 offset:1ecb580                       

void UZipUtilityInterface::OnDone(const struct FString& archive, TEnumAsByte<EZipUtilityCompletionState> CompletionState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipUtilityInterface.OnDone"));

	UZipUtilityInterface_OnDone_Params params;
	params.archive = archive;
	params.CompletionState = CompletionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipFileFunctionLibrary.Zip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FileOrFolderPath               (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionLevel> Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62A903A30              		 offset:1e33a30                       

bool UZipFileFunctionLibrary::STATIC_Zip(const struct FString& FileOrFolderPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format, TEnumAsByte<EZipUtilityCompressionLevel> Level)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.Zip"));

	UZipFileFunctionLibrary_Zip_Params params;
	params.FileOrFolderPath = FileOrFolderPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// struct FString                 destinationPath                (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsReplayList                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62BBF8830              		 offset:3128830                       

bool UZipFileFunctionLibrary::STATIC_UnzipTo(const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format, bool IsReplayList)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.UnzipTo"));

	UZipFileFunctionLibrary_UnzipTo_Params params;
	params.ArchivePath = ArchivePath;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;
	params.IsReplayList = IsReplayList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<int>                    fileIndices                    (ConstParm, Parm, ZeroConstructor)
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// struct FString                 destinationPath                (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62A441840              		 offset:1971840                       

bool UZipFileFunctionLibrary::STATIC_UnzipFilesTo(TArray<int> fileIndices, const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo"));

	UZipFileFunctionLibrary_UnzipFilesTo_Params params;
	params.fileIndices = fileIndices;
	params.ArchivePath = ArchivePath;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<int>                    fileIndices                    (ConstParm, Parm, ZeroConstructor)
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62CA21090              		 offset:3f51090                       

bool UZipFileFunctionLibrary::STATIC_UnzipFiles(TArray<int> fileIndices, const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles"));

	UZipFileFunctionLibrary_UnzipFiles_Params params;
	params.fileIndices = fileIndices;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 destinationPath                (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF629EAD3A0              		 offset:13dd3a0                       

bool UZipFileFunctionLibrary::STATIC_UnzipFileNamedTo(const struct FString& ArchivePath, const struct FString& Name, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo"));

	UZipFileFunctionLibrary_UnzipFileNamedTo_Params params;
	params.ArchivePath = ArchivePath;
	params.Name = Name;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62C8D3340              		 offset:3e03340                       

bool UZipFileFunctionLibrary::STATIC_UnzipFileNamed(const struct FString& ArchivePath, const struct FString& Name, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed"));

	UZipFileFunctionLibrary_UnzipFileNamed_Params params;
	params.ArchivePath = ArchivePath;
	params.Name = Name;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.Unzip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62BBE3B00              		 offset:3113b00                       

bool UZipFileFunctionLibrary::STATIC_Unzip(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.Unzip"));

	UZipFileFunctionLibrary_Unzip_Params params;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF628D7BC50              		 offset:2abc50                        

bool UZipFileFunctionLibrary::STATIC_ListFilesInArchive(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive"));

	UZipFileFunctionLibrary_ListFilesInArchive_Params params;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

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
