#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_FBPBuff_IncreaseMaxHp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FBPBuff_IncreaseMaxHp.FBPBuff_IncreaseMaxHp_C
// 0x0008 (0x04B0 - 0x04A8)
class AFBPBuff_IncreaseMaxHp_C : public ATslIncreaseMaxHpBuff
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass FBPBuff_IncreaseMaxHp.FBPBuff_IncreaseMaxHp_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
