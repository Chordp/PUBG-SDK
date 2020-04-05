#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ViewModePivot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ViewModePivot.ViewModePivot_C
// 0x0018 (0x03F8 - 0x03E0)
class AViewModePivot_C : public AActor
{
public:
	class USceneComponent*                             Rotator;                                                  // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass ViewModePivot.ViewModePivot_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
