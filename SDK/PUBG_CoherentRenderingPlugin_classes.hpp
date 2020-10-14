#pragma once

// PUBG (8.3.5.39) SDK

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
// 0x0008 (0x0048 - 0x0040)
class UCoherentRenderingSettings : public UObject
{
public:
	ECoherentRenderingSettingsSeverity                 RenderingLogSeverity;                                     // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

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
