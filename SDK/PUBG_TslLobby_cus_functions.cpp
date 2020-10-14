// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslLobby_cus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslLobby_cus.TslLobby_cus_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void ATslLobby_cus_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslLobby_cus.TslLobby_cus_C.ReceiveBeginPlay"));

	ATslLobby_cus_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslLobby_cus.TslLobby_cus_C.ExecuteUbergraph_TslLobby_cus
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void ATslLobby_cus_C::ExecuteUbergraph_TslLobby_cus(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslLobby_cus.TslLobby_cus_C.ExecuteUbergraph_TslLobby_cus"));

	ATslLobby_cus_C_ExecuteUbergraph_TslLobby_cus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
