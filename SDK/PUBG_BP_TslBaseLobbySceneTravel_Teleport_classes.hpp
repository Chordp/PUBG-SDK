#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_TslBaseLobbySceneTravel_Teleport_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C
// 0x0010 (0x04A0 - 0x0490)
class ABP_TslBaseLobbySceneTravel_Teleport_C : public ATslBaseLobbySceneTravel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C"));

		return ptr;
	}


	void UserConstructionScript();
	void OnStartTravel();
	void ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
