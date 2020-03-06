#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DefaultRifleSetting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultRifleSetting.DefaultRifleSetting_C
// 0x0090 (0x0F90 - 0x0F00)
class ADefaultRifleSetting_C : public ATslWeapon_Trajectory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F00(0x0008) (Transient, DuplicateTransient)
	bool                                               bDebugMuzzleVector;                                       // 0x0F08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugRecoil;                                             // 0x0F09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0F0A(0x0006) MISSED OFFSET
	struct FDebugFloatHistory                          History_RecoilTargetY;                                    // 0x0F10(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoilTargetX;                                    // 0x0F30(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoveryTarget;                                   // 0x0F50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoilValue;                                      // 0x0F70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass DefaultRifleSetting.DefaultRifleSetting_C"));

		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DefaultRifleSetting(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
