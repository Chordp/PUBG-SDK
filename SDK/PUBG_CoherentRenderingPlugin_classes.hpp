#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CoherentRenderingPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoherentRenderingPlugin.CoherentRenderingSettings
// 0x0018 (0x0058 - 0x0040)
class UCoherentRenderingSettings : public UObject
{
public:
	ECoherentRenderingSettingsSeverity                 RenderingLogSeverity;                                     // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ShowWarningsOnScreen;                                     // 0x0041(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FString                                     DeveloperOptions;                                         // 0x0048(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentRenderingPlugin.CoherentRenderingSettings"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
