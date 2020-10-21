// PUBG (9.1.5.3) SDK

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
// (Final, Native, Private, HasOutParms)
// Parameters:
// class ATslPlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            MsgIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AmmoItemID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75EB0BA30              		 offset:510ba30                       

void UBP_ItemRequestManager_C::OnRecvMsgNeedAmmo(class ATslPlayerState* PlayerState, int MsgIndex, const struct FName& AmmoItemID)
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
// (Final, Native, Private)
// Parameters:
// class ATslPlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            MsgIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BA50A20              		 offset:2050a20                       

void UBP_ItemRequestManager_C::OnRecvMsg(class ATslPlayerState* PlayerState, int MsgIndex)
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
// (Final, Native, Public)
// FunctionAddress:0x00007FF759D04600              		 offset:304600                        

void UBP_ItemRequestManager_C::OnInputReleased()
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
// (Final, Native, Public)
// FunctionAddress:0x00007FF75A77A870              		 offset:d7a870                        

void UBP_ItemRequestManager_C::OnInputPressed()
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
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName                   ItemID                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DF0B240              		 offset:450b240                       

void UBP_ItemRequestManager_C::OnHealItemSelectionChangedPad(const struct FName& ItemID)
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
