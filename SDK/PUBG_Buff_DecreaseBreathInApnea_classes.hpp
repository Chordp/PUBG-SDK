#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_DecreaseBreathInApnea_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C
// 0x0020 (0x0498 - 0x0478)
class ABuff_DecreaseBreathInApnea_C : public ACharacterBreathBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthPerTick;                                            // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C"));

		return ptr;
	}


	void DecreaseHealth(class ATslCharacter* Character);
	void UserConstructionScript();
	void TickBuff();
	void ExecuteUbergraph_Buff_DecreaseBreathInApnea(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
