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


<<<<<<< HEAD
	void OnListFileFound(struct FString* Filename, int* ByteCount, struct FString* FilePath);
	void OnListDone(struct FString* DirectoryPath, TArray<struct FString>* Files, TArray<struct FString>* Folders);
	void OnListDirectoryFound(struct FString* DirectoryName, struct FString* FilePath);
=======
	void OnListFileFound(const struct FString& Filename, int ByteCount, const struct FString& FilePath);
	void OnListDone(const struct FString& DirectoryPath, TArray<struct FString> Files, TArray<struct FString> Folders);
	void OnListDirectoryFound(const struct FString& DirectoryName, const struct FString& FilePath);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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


<<<<<<< HEAD
	void OnFileChanged(struct FString* Filename, struct FString* FilePath);
	void OnDirectoryChanged(struct FString* DirectoryName, struct FString* DirectoryPath);
=======
	void OnFileChanged(const struct FString& Filename, const struct FString& FilePath);
	void OnDirectoryChanged(const struct FString& DirectoryName, const struct FString& DirectoryPath);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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


<<<<<<< HEAD
	void STATIC_WatchFolder(struct FString* FullPath, class UObject** WatcherDelegate);
	void STATIC_StopWatchingFolder(struct FString* FullPath, class UObject** WatcherDelegate);
	bool STATIC_MoveFileTo(struct FString* From, struct FString* To);
	void STATIC_ListContentsOfFolder(struct FString* FullPath, class UObject** ListDelegate);
	bool STATIC_DeleteFolderRecursively(struct FString* FullPath);
	bool STATIC_DeleteFileAt(struct FString* FullPath);
	bool STATIC_DeleteEmptyFolder(struct FString* FullPath);
	bool STATIC_CreateDirectoryAt(struct FString* FullPath);
=======
	void STATIC_WatchFolder(const struct FString& FullPath, class UObject* WatcherDelegate);
	void STATIC_StopWatchingFolder(const struct FString& FullPath, class UObject* WatcherDelegate);
	bool STATIC_MoveFileTo(const struct FString& From, const struct FString& To);
	void STATIC_ListContentsOfFolder(const struct FString& FullPath, class UObject* ListDelegate);
	bool STATIC_DeleteFolderRecursively(const struct FString& FullPath);
	bool STATIC_DeleteFileAt(const struct FString& FullPath);
	bool STATIC_DeleteEmptyFolder(const struct FString& FullPath);
	bool STATIC_CreateDirectoryAt(const struct FString& FullPath);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
