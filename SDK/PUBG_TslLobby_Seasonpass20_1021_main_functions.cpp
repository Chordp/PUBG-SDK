// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslLobby_Seasonpass20_1021_main_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslLobby_Seasonpass20_1021_main.TslLobby_Seasonpass20_1021_main_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ATslLobby_Seasonpass20_1021_main_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslLobby_Seasonpass20_1021_main.TslLobby_Seasonpass20_1021_main_C.ReceiveBeginPlay"));

	ATslLobby_Seasonpass20_1021_main_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslLobby_Seasonpass20_1021_main.TslLobby_Seasonpass20_1021_main_C.ExecuteUbergraph_TslLobby_Seasonpass20_1021_main
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ATslLobby_Seasonpass20_1021_main_C::ExecuteUbergraph_TslLobby_Seasonpass20_1021_main(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslLobby_Seasonpass20_1021_main.TslLobby_Seasonpass20_1021_main_C.ExecuteUbergraph_TslLobby_Seasonpass20_1021_main"));

	ATslLobby_Seasonpass20_1021_main_C_ExecuteUbergraph_TslLobby_Seasonpass20_1021_main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
