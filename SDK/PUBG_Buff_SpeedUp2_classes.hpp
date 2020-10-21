#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_SpeedUp2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SpeedUp2.Buff_SpeedUp2_C
// 0x0014 (0x049C - 0x0488)
class ABuff_SpeedUp2_C : public ATslBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0488(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddSpeedUpFactor;                                         // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Buff_SpeedUp2.Buff_SpeedUp2_C"));

		return ptr;
	}


	void UserConstructionScript();
	void StartBuffBlueprint();
	void StopBuffBlueprint(bool bCanceled);
	void ExecuteUbergraph_Buff_SpeedUp2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
