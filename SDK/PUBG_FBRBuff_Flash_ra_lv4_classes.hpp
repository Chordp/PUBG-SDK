#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_FBRBuff_Flash_ra_lv4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FBRBuff_Flash_ra_lv4.FBRBuff_Flash_ra_lv4_C
// 0x0008 (0x04C0 - 0x04B8)
class AFBRBuff_Flash_ra_lv4_C : public ATslFBRItemBuff
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass FBRBuff_Flash_ra_lv4.FBRBuff_Flash_ra_lv4_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif