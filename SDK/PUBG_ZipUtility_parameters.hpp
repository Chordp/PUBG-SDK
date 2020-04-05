#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ZipUtility_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZipUtility.ZipUtilityInterface.OnStartProcess
struct UZipUtilityInterface_OnStartProcess_Params
{
<<<<<<< HEAD
	struct FString*                                    archive;                                                  // (Parm, ZeroConstructor)
	int*                                               bytes;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	int                                                bytes;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function ZipUtility.ZipUtilityInterface.OnProgress
struct UZipUtilityInterface_OnProgress_Params
{
<<<<<<< HEAD
	struct FString*                                    archive;                                                  // (Parm, ZeroConstructor)
	float*                                             Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bytes;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bytes;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function ZipUtility.ZipUtilityInterface.OnFileFound
struct UZipUtilityInterface_OnFileFound_Params
{
<<<<<<< HEAD
	struct FString*                                    archive;                                                  // (Parm, ZeroConstructor)
	struct FString*                                    file;                                                     // (Parm, ZeroConstructor)
	int*                                               Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	struct FString                                     file;                                                     // (Parm, ZeroConstructor)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function ZipUtility.ZipUtilityInterface.OnFileDone
struct UZipUtilityInterface_OnFileDone_Params
{
<<<<<<< HEAD
	struct FString*                                    archive;                                                  // (Parm, ZeroConstructor)
	struct FString*                                    file;                                                     // (Parm, ZeroConstructor)
=======
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	struct FString                                     file;                                                     // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function ZipUtility.ZipUtilityInterface.OnDone
struct UZipUtilityInterface_OnDone_Params
{
<<<<<<< HEAD
	struct FString*                                    archive;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EZipUtilityCompletionState>*           CompletionState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EZipUtilityCompletionState>            CompletionState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function ZipUtility.ZipFileFunctionLibrary.Zip
struct UZipFileFunctionLibrary_Zip_Params
{
<<<<<<< HEAD
	struct FString*                                    FileOrFolderPath;                                         // (Parm, ZeroConstructor)
	class UObject**                                    ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>*         Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionLevel>*          Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     FileOrFolderPath;                                         // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionLevel>           Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipTo
struct UZipFileFunctionLibrary_UnzipTo_Params
{
<<<<<<< HEAD
	struct FString*                                    ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString*                                    destinationPath;                                          // (Parm, ZeroConstructor)
	class UObject**                                    ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>*         Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString                                     destinationPath;                                          // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo
struct UZipFileFunctionLibrary_UnzipFilesTo_Params
{
<<<<<<< HEAD
	TArray<int>*                                       fileIndices;                                              // (ConstParm, Parm, ZeroConstructor)
	struct FString*                                    ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString*                                    destinationPath;                                          // (Parm, ZeroConstructor)
	class UObject**                                    ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>*         Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	TArray<int>                                        fileIndices;                                              // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString                                     destinationPath;                                          // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles
struct UZipFileFunctionLibrary_UnzipFiles_Params
{
<<<<<<< HEAD
	TArray<int>*                                       fileIndices;                                              // (ConstParm, Parm, ZeroConstructor)
	struct FString*                                    ArchivePath;                                              // (Parm, ZeroConstructor)
	class UObject**                                    ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>*         Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	TArray<int>                                        fileIndices;                                              // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo
struct UZipFileFunctionLibrary_UnzipFileNamedTo_Params
{
<<<<<<< HEAD
	struct FString*                                    ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	struct FString*                                    destinationPath;                                          // (Parm, ZeroConstructor)
	class UObject**                                    ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>*         Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     destinationPath;                                          // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed
struct UZipFileFunctionLibrary_UnzipFileNamed_Params
{
<<<<<<< HEAD
	struct FString*                                    ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	class UObject**                                    ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>*         Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.Unzip
struct UZipFileFunctionLibrary_Unzip_Params
{
<<<<<<< HEAD
	struct FString*                                    ArchivePath;                                              // (Parm, ZeroConstructor)
	class UObject**                                    ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>*         Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive
struct UZipFileFunctionLibrary_ListFilesInArchive_Params
{
<<<<<<< HEAD
	struct FString*                                    ArchivePath;                                              // (Parm, ZeroConstructor)
	class UObject**                                    ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>*         Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
