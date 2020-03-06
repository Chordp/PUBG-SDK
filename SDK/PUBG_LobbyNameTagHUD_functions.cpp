// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyNameTagHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.CleanUpNameTagWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyNameTagHUD_C::CleanUpNameTagWidget(int* SlotIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyNameTagHUD.LobbyNameTagHUD_C.CleanUpNameTagWidget"));

	ULobbyNameTagHUD_C_CleanUpNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.SetupNameTagWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyNameTagHUD_C::SetupNameTagWidget(int* SlotIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyNameTagHUD.LobbyNameTagHUD_C.SetupNameTagWidget"));

	ULobbyNameTagHUD_C_SetupNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.GetNameTagWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTslLobbyNameTagWidget*  Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyNameTagHUD_C::GetNameTagWidget(int* SlotIndex, class UTslLobbyNameTagWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyNameTagHUD.LobbyNameTagHUD_C.GetNameTagWidget"));

	ULobbyNameTagHUD_C_GetNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
