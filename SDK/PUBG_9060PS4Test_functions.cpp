// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_9060PS4Test_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.UmgBaseWidget.UnBindFakeCursor
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF75EABBD10              		 offset:50bbd10                       

void U9060PS4Test_C::UnBindFakeCursor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.UnBindFakeCursor"));

	U9060PS4Test_C_UnBindFakeCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.UmgBaseWidget.SetFakeMouseMouseButtonUp
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InCursorPositionInViewport     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D6338B0              		 offset:3c338b0                       

bool U9060PS4Test_C::SetFakeMouseMouseButtonUp(const struct FVector2D& InCursorPositionInViewport)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.SetFakeMouseMouseButtonUp"));

	U9060PS4Test_C_SetFakeMouseMouseButtonUp_Params params;
	params.InCursorPositionInViewport = InCursorPositionInViewport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UmgBaseWidget.SetFakeMouseMouseButtonDown
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InCursorPositionInViewport     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D118DF0              		 offset:3718df0                       

bool U9060PS4Test_C::SetFakeMouseMouseButtonDown(const struct FVector2D& InCursorPositionInViewport)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.SetFakeMouseMouseButtonDown"));

	U9060PS4Test_C_SetFakeMouseMouseButtonDown_Params params;
	params.InCursorPositionInViewport = InCursorPositionInViewport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UmgBaseWidget.RuntimeInitBP
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void U9060PS4Test_C::RuntimeInitBP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.RuntimeInitBP"));

	U9060PS4Test_C_RuntimeInitBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.UmgBaseWidget.OnFakeCursorY
// (Native, Protected)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DC030B0              		 offset:42030b0                       

void U9060PS4Test_C::OnFakeCursorY(float Val)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.OnFakeCursorY"));

	U9060PS4Test_C_OnFakeCursorY_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.UmgBaseWidget.OnFakeCursorX
// (Native, Protected)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D9AAD60              		 offset:3faad60                       

void U9060PS4Test_C::OnFakeCursorX(float Val)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.OnFakeCursorX"));

	U9060PS4Test_C_OnFakeCursorX_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.UmgBaseWidget.OnFakeCursorUp
// (Native, Protected)
// FunctionAddress:0x00007FF75EB896B0              		 offset:51896b0                       

void U9060PS4Test_C::OnFakeCursorUp()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.OnFakeCursorUp"));

	U9060PS4Test_C_OnFakeCursorUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.UmgBaseWidget.OnFakeCursorDown
// (Native, Protected)
// FunctionAddress:0x00007FF75AE4FF70              		 offset:144ff70                       

void U9060PS4Test_C::OnFakeCursorDown()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.OnFakeCursorDown"));

	U9060PS4Test_C_OnFakeCursorDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.UmgBaseWidget.IsMouseOn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A7292D0              		 offset:d292d0                        

bool U9060PS4Test_C::IsMouseOn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.IsMouseOn"));

	U9060PS4Test_C_IsMouseOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UmgBaseWidget.HandleMainPrepass
// (Native, Public)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75CF12FF0              		 offset:3512ff0                       

void U9060PS4Test_C::HandleMainPrepass(class UWidget* Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.HandleMainPrepass"));

	U9060PS4Test_C_HandleMainPrepass_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.UmgBaseWidget.CheckWantRequestRender
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B03E420              		 offset:163e420                       

bool U9060PS4Test_C::CheckWantRequestRender()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.CheckWantRequestRender"));

	U9060PS4Test_C_CheckWantRequestRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UmgBaseWidget.BindFakeCursor
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF75DEB8760              		 offset:44b8760                       

void U9060PS4Test_C::BindFakeCursor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.UmgBaseWidget.BindFakeCursor"));

	U9060PS4Test_C_BindFakeCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
