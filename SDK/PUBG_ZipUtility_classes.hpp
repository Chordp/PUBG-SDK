#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ZipUtility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ZipUtility.ZipUtilityInterface
// 0x0000 (0x0040 - 0x0040)
class UZipUtilityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ZipUtility.ZipUtilityInterface"));

		return ptr;
	}


	void OnStartProcess(const struct FString& archive, int bytes);
	void OnProgress(const struct FString& archive, float Percentage, int bytes);
	void OnFileFound(const struct FString& archive, const struct FString& file, int Size);
	void OnFileDone(const struct FString& archive, const struct FString& file);
	void OnDone(const struct FString& archive, TEnumAsByte<EZipUtilityCompletionState> CompletionState);
};


// Class ZipUtility.ZipFileFunctionInternalCallback
// 0x0048 (0x0088 - 0x0040)
class UZipFileFunctionInternalCallback : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	TEnumAsByte<EZipUtilityCompressionFormat>          CompressionFormat;                                        // 0x0048(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     file;                                                     // 0x0050(0x0010) (ZeroConstructor, Transient)
	struct FString                                     DestinationFolder;                                        // 0x0060(0x0010) (ZeroConstructor, Transient)
	int                                                FileIndex;                                                // 0x0070(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	class UObject*                                     Callback;                                                 // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSingleFile;                                              // 0x0080(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFileFound;                                               // 0x0081(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUnzipto;                                                 // 0x0082(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0083(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ZipUtility.ZipFileFunctionInternalCallback"));

		return ptr;
	}

};


// Class ZipUtility.ZipFileFunctionLibrary
// 0x0000 (0x0040 - 0x0040)
class UZipFileFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ZipUtility.ZipFileFunctionLibrary"));

		return ptr;
	}


	bool STATIC_Zip(const struct FString& FileOrFolderPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format, TEnumAsByte<EZipUtilityCompressionLevel> Level);
	bool STATIC_UnzipTo(const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format, bool IsReplayList);
	bool STATIC_UnzipFilesTo(TArray<int> fileIndices, const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
	bool STATIC_UnzipFiles(TArray<int> fileIndices, const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
	bool STATIC_UnzipFileNamedTo(const struct FString& ArchivePath, const struct FString& Name, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
	bool STATIC_UnzipFileNamed(const struct FString& ArchivePath, const struct FString& Name, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
	bool STATIC_Unzip(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
	bool STATIC_ListFilesInArchive(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
};


// Class ZipUtility.ZULambdaDelegate
// 0x00B0 (0x00F0 - 0x0040)
class UZULambdaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0040(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ZipUtility.ZULambdaDelegate"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
