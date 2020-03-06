#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcSystemMenuWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.QuitToDesktop
struct UBP_PcSystemMenuWidget_C_QuitToDesktop_Params
{
	EPopupButtonID*                                    NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.GoToLobby
struct UBP_PcSystemMenuWidget_C_GoToLobby_Params
{
	EPopupButtonID*                                    InPopupButtonID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.EnableMenuButtons
struct UBP_PcSystemMenuWidget_C_EnableMenuButtons_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnVanishingAnimFinished
struct UBP_PcSystemMenuWidget_C_OnVanishingAnimFinished_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.HideWidget
struct UBP_PcSystemMenuWidget_C_HideWidget_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Construct
struct UBP_PcSystemMenuWidget_C_Construct_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RatingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__RatingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnScrollMissionList
struct UBP_PcSystemMenuWidget_C_OnScrollMissionList_Params
{
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Destruct
struct UBP_PcSystemMenuWidget_C_Destruct_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifySystemMenuEnter
struct UBP_PcSystemMenuWidget_C_NotifySystemMenuEnter_Params
{
	ESystemMenuButtonType*                             eType;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature
struct UBP_PcSystemMenuWidget_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event
struct UBP_PcSystemMenuWidget_C_Custom_Event_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyEnableMenuButtons
struct UBP_PcSystemMenuWidget_C_NotifyEnableMenuButtons_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyHideWidget
struct UBP_PcSystemMenuWidget_C_NotifyHideWidget_Params
{
};

// Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ExecuteUbergraph_BP_PcSystemMenuWidget
struct UBP_PcSystemMenuWidget_C_ExecuteUbergraph_BP_PcSystemMenuWidget_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
