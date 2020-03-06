#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PlayerCardControllerV2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerCardControllerV2.BP_PlayerCardControllerV2_C
// 0x0008 (0x04B8 - 0x04B0)
class ABP_PlayerCardControllerV2_C : public ATslPlayerCardControllerV2
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_PlayerCardControllerV2.BP_PlayerCardControllerV2_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
