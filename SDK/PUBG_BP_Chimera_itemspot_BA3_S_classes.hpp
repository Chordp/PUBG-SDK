#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Chimera_itemspot_BA3_S_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Chimera_itemspot_BA3_S.BP_Chimera_itemspot_BA3_S_C
// 0x0028 (0x0438 - 0x0410)
class ABP_Chimera_itemspot_BA3_S_C : public AActor
{
public:
	class UItemSpotComponent*                          ItemSpot2;                                                // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemSpotComponent*                          ItemSpot1;                                                // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemSpotComponent*                          ItemSpot;                                                 // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemSpotGroupComponent*                     ItemSpotGroup;                                            // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Chimera_itemspot_BA3_S.BP_Chimera_itemspot_BA3_S_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
