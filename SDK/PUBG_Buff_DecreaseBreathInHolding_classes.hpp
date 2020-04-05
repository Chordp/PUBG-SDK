#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_DecreaseBreathInHolding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C
<<<<<<< HEAD
// 0x0020 (0x0480 - 0x0460)
class ABuff_DecreaseBreathInHolding_C : public ACharacterBreathBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTslStringClass                             BuffClass;                                                // 0x0470(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
=======
// 0x0020 (0x0498 - 0x0478)
class ABuff_DecreaseBreathInHolding_C : public ACharacterBreathBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTslStringClass                             BuffClass;                                                // 0x0488(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C"));

		return ptr;
	}


	void UserConstructionScript();
	void TickBuff();
<<<<<<< HEAD
	void ExecuteUbergraph_Buff_DecreaseBreathInHolding(int* EntryPoint);
=======
	void ExecuteUbergraph_Buff_DecreaseBreathInHolding(int EntryPoint);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
