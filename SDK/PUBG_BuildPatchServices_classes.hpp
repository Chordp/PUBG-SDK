#pragma once

// PUBG (7.2.8.10) SDK

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
// 0x00A8 (0x00D8 - 0x0030)
class UBuildPatchManifest : public UObject
{
public:
	unsigned char                                      ManifestFileVersion;                                      // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFileData;                                              // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	uint32_t                                           AppID;                                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     AppName;                                                  // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     BuildVersion;                                             // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     LaunchExe;                                                // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     LaunchCommand;                                            // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     PrereqName;                                               // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     PrereqPath;                                               // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     PrereqArgs;                                               // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FFileManifestData>                   FileManifestList;                                         // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FChunkInfoData>                      ChunkList;                                                // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FCustomFieldData>                    CustomFields;                                             // 0x00C8(0x0010) (ZeroConstructor)

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
