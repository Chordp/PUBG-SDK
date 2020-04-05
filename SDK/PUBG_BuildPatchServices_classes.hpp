#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BuildPatchServices_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BuildPatchServices.BuildPatchManifest
// 0x00A8 (0x00D0 - 0x0028)
class UBuildPatchManifest : public UObject
{
public:
	unsigned char                                      ManifestFileVersion;                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFileData;                                              // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	uint32_t                                           AppID;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     AppName;                                                  // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     BuildVersion;                                             // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     LaunchExe;                                                // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     LaunchCommand;                                            // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     PrereqName;                                               // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     PrereqPath;                                               // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     PrereqArgs;                                               // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FFileManifestData>                   FileManifestList;                                         // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FChunkInfoData>                      ChunkList;                                                // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FCustomFieldData>                    CustomFields;                                             // 0x00C0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class BuildPatchServices.BuildPatchManifest"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
