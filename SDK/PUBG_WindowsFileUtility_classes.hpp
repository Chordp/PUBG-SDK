#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WindowsFileUtility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WindowsFileUtility.WFUFileListInterface
// 0x0000 (0x0028 - 0x0028)
class UWFUFileListInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class WindowsFileUtility.WFUFileListInterface"));

		return ptr;
	}


	void OnListFileFound(struct FString* Filename, int* ByteCount, struct FString* FilePath);
	void OnListDone(struct FString* DirectoryPath, TArray<struct FString>* Files, TArray<struct FString>* Folders);
	void OnListDirectoryFound(struct FString* DirectoryName, struct FString* FilePath);
};


// Class WindowsFileUtility.WFUFileListLambdaDelegate
// 0x0058 (0x0080 - 0x0028)
class UWFUFileListLambdaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class WindowsFileUtility.WFUFileListLambdaDelegate"));

		return ptr;
	}

};


// Class WindowsFileUtility.WFUFolderWatchInterface
// 0x0000 (0x0028 - 0x0028)
class UWFUFolderWatchInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class WindowsFileUtility.WFUFolderWatchInterface"));

		return ptr;
	}


	void OnFileChanged(struct FString* Filename, struct FString* FilePath);
	void OnDirectoryChanged(struct FString* DirectoryName, struct FString* DirectoryPath);
};


// Class WindowsFileUtility.WFUFolderWatchLambdaDelegate
// 0x0058 (0x0080 - 0x0028)
class UWFUFolderWatchLambdaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class WindowsFileUtility.WFUFolderWatchLambdaDelegate"));

		return ptr;
	}

};


// Class WindowsFileUtility.WindowsFileUtilityFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWindowsFileUtilityFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class WindowsFileUtility.WindowsFileUtilityFunctionLibrary"));

		return ptr;
	}


	void STATIC_WatchFolder(struct FString* FullPath, class UObject** WatcherDelegate);
	void STATIC_StopWatchingFolder(struct FString* FullPath, class UObject** WatcherDelegate);
	bool STATIC_MoveFileTo(struct FString* From, struct FString* To);
	void STATIC_ListContentsOfFolder(struct FString* FullPath, class UObject** ListDelegate);
	bool STATIC_DeleteFolderRecursively(struct FString* FullPath);
	bool STATIC_DeleteFileAt(struct FString* FullPath);
	bool STATIC_DeleteEmptyFolder(struct FString* FullPath);
	bool STATIC_CreateDirectoryAt(struct FString* FullPath);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
