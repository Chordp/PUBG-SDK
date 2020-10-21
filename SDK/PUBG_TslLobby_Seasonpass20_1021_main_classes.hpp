#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslLobby_Seasonpass20_1021_main_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TslLobby_Seasonpass20_1021_main.TslLobby_Seasonpass20_1021_main_C
// 0x0010 (0x0428 - 0x0418)
class ATslLobby_Seasonpass20_1021_main_C : public ATslLobbyLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      None_ExecuteUbergraph_TslLobby_Seasonpass20_1021_main_RefProperty;// 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass TslLobby_Seasonpass20_1021_main.TslLobby_Seasonpass20_1021_main_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_TslLobby_Seasonpass20_1021_main(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
