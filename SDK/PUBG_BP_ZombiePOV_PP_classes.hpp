#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ZombiePOV_PP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ZombiePOV_PP.BP_ZombiePOV_PP_C
// 0x0008 (0x0470 - 0x0468)
class ABP_ZombiePOV_PP_C : public ATslPostProcessEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ZombiePOV_PP.BP_ZombiePOV_PP_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
