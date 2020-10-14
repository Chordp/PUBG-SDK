#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_JerryCanFireDebuff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_JerryCanFireDebuff.BP_JerryCanFireDebuff_C
// 0x0008 (0x04B8 - 0x04B0)
class ABP_JerryCanFireDebuff_C : public ATslMolotovFireDebuff
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_JerryCanFireDebuff.BP_JerryCanFireDebuff_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
