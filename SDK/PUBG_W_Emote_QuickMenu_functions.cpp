// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_Emote_QuickMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            InCP                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::ShowContainer(class UCanvasPanel* InCP)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowContainer"));

	UW_Emote_QuickMenu_C_ShowContainer_Params params;
	params.InCP = InCP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::PopulateDown()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateDown"));

	UW_Emote_QuickMenu_C_PopulateDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowQuickMenu
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::ShowQuickMenu()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowQuickMenu"));

	UW_Emote_QuickMenu_C_ShowQuickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.HideQuickMenu
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::HideQuickMenu()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.HideQuickMenu"));

	UW_Emote_QuickMenu_C_HideQuickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.RecalcOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Col                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Row                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TooltipEmoteName               (Parm)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::RecalcOpacity(int Col, int Row, const struct FText& TooltipEmoteName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.RecalcOpacity"));

	UW_Emote_QuickMenu_C_RecalcOpacity_Params params;
	params.Col = Col;
	params.Row = Row;
	params.TooltipEmoteName = TooltipEmoteName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateContainer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ColOffset                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          RowOffset                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxWidgetCount                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            MinEmoteIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxEmoteIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UCanvasPanel*            CP_Ref                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ButtonLC                       (Parm, IsPlainOldData)
// struct FVector2D               InAnchorMin                    (Parm, IsPlainOldData)
// struct FVector2D               InAnchorMax                    (Parm, IsPlainOldData)
// struct FVector2D               InAlignment                    (Parm, IsPlainOldData)
// bool                           bSwitchXY                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::PopulateContainer(float ColOffset, float RowOffset, int MaxWidgetCount, int MinEmoteIndex, int MaxEmoteIndex, class UCanvasPanel* CP_Ref, const struct FLinearColor& ButtonLC, const struct FVector2D& InAnchorMin, const struct FVector2D& InAnchorMax, const struct FVector2D& InAlignment, bool bSwitchXY)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateContainer"));

	UW_Emote_QuickMenu_C_PopulateContainer_Params params;
	params.ColOffset = ColOffset;
	params.RowOffset = RowOffset;
	params.MaxWidgetCount = MaxWidgetCount;
	params.MinEmoteIndex = MinEmoteIndex;
	params.MaxEmoteIndex = MaxEmoteIndex;
	params.CP_Ref = CP_Ref;
	params.ButtonLC = ButtonLC;
	params.InAnchorMin = InAnchorMin;
	params.InAnchorMax = InAnchorMax;
	params.InAlignment = InAlignment;
	params.bSwitchXY = bSwitchXY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Construct"));

	UW_Emote_QuickMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature"));

	UW_Emote_QuickMenu_C_BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.OnMouseLeave"));

	UW_Emote_QuickMenu_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature"));

	UW_Emote_QuickMenu_C_BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Menu Close
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::Menu_Close()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Menu Close"));

	UW_Emote_QuickMenu_C_Menu_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature"));

	UW_Emote_QuickMenu_C_BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ExecuteUbergraph_W_Emote_QuickMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_Emote_QuickMenu_C::ExecuteUbergraph_W_Emote_QuickMenu(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ExecuteUbergraph_W_Emote_QuickMenu"));

	UW_Emote_QuickMenu_C_ExecuteUbergraph_W_Emote_QuickMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
