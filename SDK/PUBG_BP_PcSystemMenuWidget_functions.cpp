// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcSystemMenuWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.QuitToDesktop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID*                NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::QuitToDesktop(EPopupButtonID* NewParam)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.QuitToDesktop"));

	UBP_PcSystemMenuWidget_C_QuitToDesktop_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.GoToLobby
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID*                InPopupButtonID                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::GoToLobby(EPopupButtonID* InPopupButtonID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.GoToLobby"));

	UBP_PcSystemMenuWidget_C_GoToLobby_Params params;
	params.InPopupButtonID = InPopupButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.EnableMenuButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::EnableMenuButtons(bool* bEnable)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.EnableMenuButtons"));

	UBP_PcSystemMenuWidget_C_EnableMenuButtons_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnVanishingAnimFinished
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::OnVanishingAnimFinished()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnVanishingAnimFinished"));

	UBP_PcSystemMenuWidget_C_OnVanishingAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.HideWidget
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::HideWidget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.HideWidget"));

	UBP_PcSystemMenuWidget_C_HideWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Construct"));

	UBP_PcSystemMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RatingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__RatingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RatingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__RatingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnScrollMissionList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::OnScrollMissionList(float* Scale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnScrollMissionList"));

	UBP_PcSystemMenuWidget_C_OnScrollMissionList_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::Destruct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Destruct"));

	UBP_PcSystemMenuWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifySystemMenuEnter
// (Event, Public, BlueprintEvent)
// Parameters:
// ESystemMenuButtonType*         eType                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::NotifySystemMenuEnter(ESystemMenuButtonType* eType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifySystemMenuEnter"));

	UBP_PcSystemMenuWidget_C_NotifySystemMenuEnter_Params params;
	params.eType = eType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature"));

	UBP_PcSystemMenuWidget_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::Custom_Event()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event"));

	UBP_PcSystemMenuWidget_C_Custom_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyEnableMenuButtons
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::NotifyEnableMenuButtons(bool* bEnable)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyEnableMenuButtons"));

	UBP_PcSystemMenuWidget_C_NotifyEnableMenuButtons_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyHideWidget
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::NotifyHideWidget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyHideWidget"));

	UBP_PcSystemMenuWidget_C_NotifyHideWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ExecuteUbergraph_BP_PcSystemMenuWidget
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuWidget_C::ExecuteUbergraph_BP_PcSystemMenuWidget(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ExecuteUbergraph_BP_PcSystemMenuWidget"));

	UBP_PcSystemMenuWidget_C_ExecuteUbergraph_BP_PcSystemMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
