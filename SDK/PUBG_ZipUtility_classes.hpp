#pragma once

// PUBG (7.1.6.5) SDK

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
// 0x0000 (0x0028 - 0x0028)
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
// 0x0048 (0x0070 - 0x0028)
class UZipFileFunctionInternalCallback : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TEnumAsByte<EZipUtilityCompressionFormat>          CompressionFormat;                                        // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     file;                                                     // 0x0038(0x0010) (ZeroConstructor, Transient)
	struct FString                                     DestinationFolder;                                        // 0x0048(0x0010) (ZeroConstructor, Transient)
	int                                                FileIndex;                                                // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UObject*                                     Callback;                                                 // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSingleFile;                                              // 0x0068(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFileFound;                                               // 0x0069(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUnzipto;                                                 // 0x006A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x006B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ZipUtility.ZipFileFunctionInternalCallback"));

		return ptr;
	}

};


// Class ZipUtility.ZipFileFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
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
	bool STATIC_UnzipTo(const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
	bool STATIC_UnzipFilesTo(TArray<int> fileIndices, const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
	bool STATIC_UnzipFiles(TArray<int> fileIndices, const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
	bool STATIC_UnzipFileNamedTo(const struct FString& ArchivePath, const struct FString& Name, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
	bool STATIC_UnzipFileNamed(const struct FString& ArchivePath, const struct FString& Name, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
	bool STATIC_Unzip(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
	bool STATIC_ListFilesInArchive(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format);
};


// Class ZipUtility.ZULambdaDelegate
// 0x00A8 (0x00D0 - 0x0028)
class UZULambdaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

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
