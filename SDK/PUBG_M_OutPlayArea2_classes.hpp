#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_M_OutPlayArea2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass M_OutPlayArea2.M_OutPlayArea2_C
// 0x0010 (0x04A8 - 0x0498)
class AM_OutPlayArea2_C : public ATslPostProcessEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass M_OutPlayArea2.M_OutPlayArea2_C"));

		return ptr;
	}


	void UserConstructionScript();
	void OnSetEffectParameter(const struct FString& ParameterName, float Value);
	void ExecuteUbergraph_M_OutPlayArea2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
