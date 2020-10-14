#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslLobby_competition_Lobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TslLobby_competition_Lobby.TslLobby_competition_Lobby_C
// 0x0018 (0x0420 - 0x0408)
class ATslLobby_competition_Lobby_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class AMatineeActor*                               MatineeActor2_ExecuteUbergraph_TslLobby_competition_Lobby_RefProperty;// 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeActor_1_ExecuteUbergraph_TslLobby_competition_Lobby_RefProperty;// 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass TslLobby_competition_Lobby.TslLobby_competition_Lobby_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_TslLobby_competition_Lobby(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
