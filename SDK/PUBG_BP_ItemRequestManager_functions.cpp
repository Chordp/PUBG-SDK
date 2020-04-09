// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ItemRequestManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslItemRequestManager.OnRecvMsgNeedAmmo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class ATslPlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            MsgIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AmmoItemID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF63A8C0560              		 offset:35d0560                       

void UBP_ItemRequestManager_C::STATIC_OnRecvMsgNeedAmmo(class ATslPlayerState* PlayerState, int MsgIndex, const struct FName& AmmoItemID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslItemRequestManager.OnRecvMsgNeedAmmo"));

	UBP_ItemRequestManager_C_OnRecvMsgNeedAmmo_Params params;
	params.PlayerState = PlayerState;
	params.MsgIndex = MsgIndex;
	params.AmmoItemID = AmmoItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslItemRequestManager.OnRecvMsg
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class ATslPlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            MsgIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF63A8C04A0              		 offset:35d04a0                       

void UBP_ItemRequestManager_C::STATIC_OnRecvMsg(class ATslPlayerState* PlayerState, int MsgIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslItemRequestManager.OnRecvMsg"));

	UBP_ItemRequestManager_C_OnRecvMsg_Params params;
	params.PlayerState = PlayerState;
	params.MsgIndex = MsgIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslItemRequestManager.OnInputReleased
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF63A8BE430              		 offset:35ce430                       

void UBP_ItemRequestManager_C::STATIC_OnInputReleased()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslItemRequestManager.OnInputReleased"));

	UBP_ItemRequestManager_C_OnInputReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslItemRequestManager.OnInputPressed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF63A8BE3B0              		 offset:35ce3b0                       

void UBP_ItemRequestManager_C::STATIC_OnInputPressed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslItemRequestManager.OnInputPressed"));

	UBP_ItemRequestManager_C_OnInputPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslItemRequestManager.OnHealItemSelectionChangedPad
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName                   ItemID                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF63A8BDE70              		 offset:35cde70                       

void UBP_ItemRequestManager_C::STATIC_OnHealItemSelectionChangedPad(const struct FName& ItemID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslItemRequestManager.OnHealItemSelectionChangedPad"));

	UBP_ItemRequestManager_C_OnHealItemSelectionChangedPad_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
