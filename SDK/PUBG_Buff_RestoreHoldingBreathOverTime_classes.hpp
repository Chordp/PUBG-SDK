#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_RestoreHoldingBreathOverTime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C
// 0x0040 (0x04B8 - 0x0478)
class ABuff_RestoreHoldingBreathOverTime_C : public ACharacterBreathBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               CharacterRef;                                             // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              BreathPerTickMax;                                         // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BreathRestoreTickInterval;                                // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreathRestoreRestBoost;                                   // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BreathRestoreRunnin;                                      // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayAfterHolding;                                        // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTimeUnderwater;                                       // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanBuff;                                                 // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FTimerHandle                                DelayAfterHoldingTimerHandle;                             // 0x04B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C"));

		return ptr;
	}


	bool CanApplyBuff();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void TickBuff();
	void AfterDelay();
	void ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
