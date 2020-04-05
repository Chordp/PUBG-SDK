#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WindowsFileUtility_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WindowsFileUtility.WFUFileListInterface.OnListFileFound
struct UWFUFileListInterface_OnListFileFound_Params
{
<<<<<<< HEAD
	struct FString*                                    Filename;                                                 // (Parm, ZeroConstructor)
	int*                                               ByteCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    FilePath;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	int                                                ByteCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function WindowsFileUtility.WFUFileListInterface.OnListDone
struct UWFUFileListInterface_OnListDone_Params
{
<<<<<<< HEAD
	struct FString*                                    DirectoryPath;                                            // (Parm, ZeroConstructor)
	TArray<struct FString>*                            Files;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>*                            Folders;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	struct FString                                     DirectoryPath;                                            // (Parm, ZeroConstructor)
	TArray<struct FString>                             Files;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Folders;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound
struct UWFUFileListInterface_OnListDirectoryFound_Params
{
<<<<<<< HEAD
	struct FString*                                    DirectoryName;                                            // (Parm, ZeroConstructor)
	struct FString*                                    FilePath;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     DirectoryName;                                            // (Parm, ZeroConstructor)
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged
struct UWFUFolderWatchInterface_OnFileChanged_Params
{
<<<<<<< HEAD
	struct FString*                                    Filename;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    FilePath;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged
struct UWFUFolderWatchInterface_OnDirectoryChanged_Params
{
<<<<<<< HEAD
	struct FString*                                    DirectoryName;                                            // (Parm, ZeroConstructor)
	struct FString*                                    DirectoryPath;                                            // (Parm, ZeroConstructor)
=======
	struct FString                                     DirectoryName;                                            // (Parm, ZeroConstructor)
	struct FString                                     DirectoryPath;                                            // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder
struct UWindowsFileUtilityFunctionLibrary_WatchFolder_Params
{
<<<<<<< HEAD
	struct FString*                                    FullPath;                                                 // (Parm, ZeroConstructor)
	class UObject**                                    WatcherDelegate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     WatcherDelegate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder
struct UWindowsFileUtilityFunctionLibrary_StopWatchingFolder_Params
{
<<<<<<< HEAD
	struct FString*                                    FullPath;                                                 // (Parm, ZeroConstructor)
	class UObject**                                    WatcherDelegate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     WatcherDelegate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo
struct UWindowsFileUtilityFunctionLibrary_MoveFileTo_Params
{
<<<<<<< HEAD
	struct FString*                                    From;                                                     // (Parm, ZeroConstructor)
	struct FString*                                    To;                                                       // (Parm, ZeroConstructor)
=======
	struct FString                                     From;                                                     // (Parm, ZeroConstructor)
	struct FString                                     To;                                                       // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder
struct UWindowsFileUtilityFunctionLibrary_ListContentsOfFolder_Params
{
<<<<<<< HEAD
	struct FString*                                    FullPath;                                                 // (Parm, ZeroConstructor)
	class UObject**                                    ListDelegate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     ListDelegate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively
struct UWindowsFileUtilityFunctionLibrary_DeleteFolderRecursively_Params
{
<<<<<<< HEAD
	struct FString*                                    FullPath;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt
struct UWindowsFileUtilityFunctionLibrary_DeleteFileAt_Params
{
<<<<<<< HEAD
	struct FString*                                    FullPath;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder
struct UWindowsFileUtilityFunctionLibrary_DeleteEmptyFolder_Params
{
<<<<<<< HEAD
	struct FString*                                    FullPath;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt
struct UWindowsFileUtilityFunctionLibrary_CreateDirectoryAt_Params
{
<<<<<<< HEAD
	struct FString*                                    FullPath;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
