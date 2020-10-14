#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_FBRBuff_Medikit_pa_lv1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FBRBuff_Medikit_pa_lv1.FBRBuff_Medikit_pa_lv1_C
// 0x0008 (0x04C0 - 0x04B8)
class AFBRBuff_Medikit_pa_lv1_C : public ATslFBRItemBuff
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass FBRBuff_Medikit_pa_lv1.FBRBuff_Medikit_pa_lv1_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
