// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_HudMain_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HudMain.HudMain_C.OnInsideBlackZone
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnInsideBlackZone()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnInsideBlackZone"));

	UHudMain_C_OnInsideBlackZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnNewBlackZone
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnNewBlackZone()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnNewBlackZone"));

	UHudMain_C_OnNewBlackZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_ThrowableItemWheelReleased
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnKey_ThrowableItemWheelReleased()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnKey_ThrowableItemWheelReleased"));

	UHudMain_C_OnKey_ThrowableItemWheelReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_ThrowableItemWheelPressed
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnKey_ThrowableItemWheelPressed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnKey_ThrowableItemWheelPressed"));

	UHudMain_C_OnKey_ThrowableItemWheelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_HealItemWheelReleased
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnKey_HealItemWheelReleased()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnKey_HealItemWheelReleased"));

	UHudMain_C_OnKey_HealItemWheelReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_HealItemWheelPressed
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnKey_HealItemWheelPressed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnKey_HealItemWheelPressed"));

	UHudMain_C_OnKey_HealItemWheelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.MapIconShowNameOnly
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::MapIconShowNameOnly()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.MapIconShowNameOnly"));

	UHudMain_C_MapIconShowNameOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.MapIconShowIconOnly
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::MapIconShowIconOnly()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.MapIconShowIconOnly"));

	UHudMain_C_MapIconShowIconOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.MapIconShowBoth
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::MapIconShowBoth()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.MapIconShowBoth"));

	UHudMain_C_MapIconShowBoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.MapIconShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShowIcon                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowName                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::MapIconShow(bool* bShowIcon, bool* bShowName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.MapIconShow"));

	UHudMain_C_MapIconShow_Params params;
	params.bShowIcon = bShowIcon;
	params.bShowName = bShowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleAnticheatCenterBar
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnToggleAnticheatCenterBar()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnToggleAnticheatCenterBar"));

	UHudMain_C_OnToggleAnticheatCenterBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_EmoteWheelReleased
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnKey_EmoteWheelReleased()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnKey_EmoteWheelReleased"));

	UHudMain_C_OnKey_EmoteWheelReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_EmoteWheelPressed
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnKey_EmoteWheelPressed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnKey_EmoteWheelPressed"));

	UHudMain_C_OnKey_EmoteWheelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnInit_Delegate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool UHudMain_C::OnInit_Delegate(class ATslBaseHUD** TslBaseHUD)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnInit_Delegate"));

	UHudMain_C_OnInit_Delegate_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Replay
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool UHudMain_C::OnInit_Replay(class ATslBaseHUD** TslBaseHUD)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnInit_Replay"));

	UHudMain_C_OnInit_Replay_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Input
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool UHudMain_C::OnInit_Input(class ATslBaseHUD** TslBaseHUD)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnInit_Input"));

	UHudMain_C_OnInit_Input_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Widget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool UHudMain_C::OnInit_Widget(class ATslBaseHUD** TslBaseHUD)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnInit_Widget"));

	UHudMain_C_OnInit_Widget_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UHudMain_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnMouseMove"));

	UHudMain_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.SetObserverSpectatingUp
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::SetObserverSpectatingUp()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.SetObserverSpectatingUp"));

	UHudMain_C_SetObserverSpectatingUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.SetObserverSpectatingDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::SetObserverSpectatingDown()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.SetObserverSpectatingDown"));

	UHudMain_C_SetObserverSpectatingDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ShouldShowReplayMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::ShouldShowReplayMenu(bool* bShow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.ShouldShowReplayMenu"));

	UHudMain_C_ShouldShowReplayMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function HudMain.HudMain_C.BindEventForShowReplayTimeline
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::BindEventForShowReplayTimeline()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.BindEventForShowReplayTimeline"));

	UHudMain_C_BindEventForShowReplayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ShowReplayTimeLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::ShowReplayTimeLine(bool* bShow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.ShowReplayTimeLine"));

	UHudMain_C_ShowReplayTimeLine_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.SetHUDForIngameReplayMenu
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::SetHUDForIngameReplayMenu()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.SetHUDForIngameReplayMenu"));

	UHudMain_C_SetHUDForIngameReplayMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.BindEventForMapClosing
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::BindEventForMapClosing()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.BindEventForMapClosing"));

	UHudMain_C_BindEventForMapClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_ReplayMenuOrEscape
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnKey_ReplayMenuOrEscape()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnKey_ReplayMenuOrEscape"));

	UHudMain_C_OnKey_ReplayMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.InitForReplay
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::InitForReplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.InitForReplay"));

	UHudMain_C_InitForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleOption
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnToggleOption()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnToggleOption"));

	UHudMain_C_OnToggleOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnMapHide
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnMapHide()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnMapHide"));

	UHudMain_C_OnMapHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnMapShow
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnMapShow()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnMapShow"));

	UHudMain_C_OnMapShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_MapReleased
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnKey_MapReleased()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnKey_MapReleased"));

	UHudMain_C_OnKey_MapReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_MapPressed
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnKey_MapPressed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnKey_MapPressed"));

	UHudMain_C_OnKey_MapPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnShowCarePackageItemList
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnShowCarePackageItemList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnShowCarePackageItemList"));

	UHudMain_C_OnShowCarePackageItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.IsShowMapOrInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsShow                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::IsShowMapOrInventory(bool* bIsShow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.IsShowMapOrInventory"));

	UHudMain_C_IsShowMapOrInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsShow != nullptr)
		*bIsShow = params.bIsShow;
}


// Function HudMain.HudMain_C.OnTogglePlayerList
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnTogglePlayerList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnTogglePlayerList"));

	UHudMain_C_OnTogglePlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.IsCharacterAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsAlive                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::IsCharacterAlive(bool* IsAlive)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.IsCharacterAlive"));

	UHudMain_C_IsCharacterAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAlive != nullptr)
		*IsAlive = params.IsAlive;
}


// Function HudMain.HudMain_C.OnNitifyHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DamagePercent                  (Parm, ZeroConstructor, IsPlainOldData)
// EDamageTypeCategory*           DamageTypeCategory             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnNitifyHit(float* DamagePercent, EDamageTypeCategory* DamageTypeCategory)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnNitifyHit"));

	UHudMain_C_OnNitifyHit_Params params;
	params.DamagePercent = DamagePercent;
	params.DamageTypeCategory = DamageTypeCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_SystemMenuOrEscape
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnKey_SystemMenuOrEscape()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnKey_SystemMenuOrEscape"));

	UHudMain_C_OnKey_SystemMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleMap
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnToggleMap()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnToggleMap"));

	UHudMain_C_OnToggleMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnPossessPawnChange
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::OnPossessPawnChange()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.OnPossessPawnChange"));

	UHudMain_C_OnPossessPawnChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.Construct"));

	UHudMain_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.HideMapForReplay
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::HideMapForReplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.HideMapForReplay"));

	UHudMain_C_HideMapForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.CheckReplayTimer
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::CheckReplayTimer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.CheckReplayTimer"));

	UHudMain_C_CheckReplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.CreateCheckReplayTimer
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::CreateCheckReplayTimer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.CreateCheckReplayTimer"));

	UHudMain_C_CreateCheckReplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ExecuteUbergraph_HudMain
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::ExecuteUbergraph_HudMain(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.ExecuteUbergraph_HudMain"));

	UHudMain_C_ExecuteUbergraph_HudMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ButtonClickedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHudMain_C::ButtonClickedDispatcher__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HudMain.HudMain_C.ButtonClickedDispatcher__DelegateSignature"));

	UHudMain_C_ButtonClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
