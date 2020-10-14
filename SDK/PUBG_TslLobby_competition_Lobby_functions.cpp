// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslLobby_competition_Lobby_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslLobby_competition_Lobby.TslLobby_competition_Lobby_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void ATslLobby_competition_Lobby_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslLobby_competition_Lobby.TslLobby_competition_Lobby_C.ReceiveBeginPlay"));

	ATslLobby_competition_Lobby_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslLobby_competition_Lobby.TslLobby_competition_Lobby_C.ExecuteUbergraph_TslLobby_competition_Lobby
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void ATslLobby_competition_Lobby_C::ExecuteUbergraph_TslLobby_competition_Lobby(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslLobby_competition_Lobby.TslLobby_competition_Lobby_C.ExecuteUbergraph_TslLobby_competition_Lobby"));

	ATslLobby_competition_Lobby_C_ExecuteUbergraph_TslLobby_competition_Lobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
