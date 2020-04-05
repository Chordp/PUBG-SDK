#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_FacialAnimation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FacialAnimation.AudioCurveSourceComponent
// 0x0040 (0x07B0 - 0x0770)
class UAudioCurveSourceComponent : public UAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0770(0x0008) MISSED OFFSET
	struct FName                                       CurveSourceBindingName;                                   // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurveSyncOffset;                                          // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0784(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class FacialAnimation.AudioCurveSourceComponent"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
