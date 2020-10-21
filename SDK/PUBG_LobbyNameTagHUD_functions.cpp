// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyNameTagHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslLobbyNameTagHudWidget.UpdateNameTagWidget_Internal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DD76A40              		 offset:4376a40                       

void ULobbyNameTagHUD_C::UpdateNameTagWidget_Internal(int SlotIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslLobbyNameTagHudWidget.UpdateNameTagWidget_Internal"));

	ULobbyNameTagHUD_C_UpdateNameTagWidget_Internal_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslLobbyNameTagHudWidget.UpdateNameTag
// (Final, Native, Protected)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B398DC0              		 offset:1998dc0                       

void ULobbyNameTagHUD_C::UpdateNameTag(int SlotIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslLobbyNameTagHudWidget.UpdateNameTag"));

	ULobbyNameTagHUD_C_UpdateNameTag_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslLobbyNameTagHudWidget.SetNameTagWidget_Internal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75EC5F9C0              		 offset:525f9c0                       

void ULobbyNameTagHUD_C::SetNameTagWidget_Internal(int SlotIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslLobbyNameTagHudWidget.SetNameTagWidget_Internal"));

	ULobbyNameTagHUD_C_SetNameTagWidget_Internal_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslLobbyNameTagHudWidget.ResetNameTagWidget_Internal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AEB0CC0              		 offset:14b0cc0                       

void ULobbyNameTagHUD_C::ResetNameTagWidget_Internal(int SlotIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslLobbyNameTagHudWidget.ResetNameTagWidget_Internal"));

	ULobbyNameTagHUD_C_ResetNameTagWidget_Internal_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslLobbyNameTagHudWidget.GetNameTagWidget_Internal
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTslLobbyNameTagWidget*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75EB57380              		 offset:5157380                       

class UTslLobbyNameTagWidget* ULobbyNameTagHUD_C::GetNameTagWidget_Internal(int SlotIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslLobbyNameTagHudWidget.GetNameTagWidget_Internal"));

	ULobbyNameTagHUD_C_GetNameTagWidget_Internal_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
