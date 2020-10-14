#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_FBRBuff_ReduceMeleeDamageRatio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FBRBuff_ReduceMeleeDamageRatio.FBRBuff_ReduceMeleeDamageRatio_C
// 0x0008 (0x04A0 - 0x0498)
class AFBRBuff_ReduceMeleeDamageRatio_C : public ATslFBRBuff
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass FBRBuff_ReduceMeleeDamageRatio.FBRBuff_ReduceMeleeDamageRatio_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
