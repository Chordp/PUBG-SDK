// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslLobby_Summerland_01_Main_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslLobby_Summerland_01_Main.TslLobby_Summerland_01_Main_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ATslLobby_Summerland_01_Main_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslLobby_Summerland_01_Main.TslLobby_Summerland_01_Main_C.ReceiveBeginPlay"));

	ATslLobby_Summerland_01_Main_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslLobby_Summerland_01_Main.TslLobby_Summerland_01_Main_C.ExecuteUbergraph_TslLobby_Summerland_01_Main
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ATslLobby_Summerland_01_Main_C::ExecuteUbergraph_TslLobby_Summerland_01_Main(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslLobby_Summerland_01_Main.TslLobby_Summerland_01_Main_C.ExecuteUbergraph_TslLobby_Summerland_01_Main"));

	ATslLobby_Summerland_01_Main_C_ExecuteUbergraph_TslLobby_Summerland_01_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
