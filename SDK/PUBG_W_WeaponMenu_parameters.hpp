#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_WeaponMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_WeaponMenu.W_WeaponMenu_C.SetEquippedItems
struct UW_WeaponMenu_C_SetEquippedItems_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.SpawnSmokeEffect
struct UW_WeaponMenu_C_SpawnSmokeEffect_Params
{
	int                                                InSmokeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WeaponMenu.W_WeaponMenu_C.OnKeyUp
struct UW_WeaponMenu_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WeaponMenu.W_WeaponMenu_C.OnKeyDown
struct UW_WeaponMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WeaponMenu.W_WeaponMenu_C.PopulateEmoteData
struct UW_WeaponMenu_C_PopulateEmoteData_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.SpawnVehicle
struct UW_WeaponMenu_C_SpawnVehicle_Params
{
	int                                                InVehicleIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WeaponMenu.W_WeaponMenu_C.SavePreset
struct UW_WeaponMenu_C_SavePreset_Params
{
	TArray<struct FName>                               inArray;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ProfileIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WeaponMenu.W_WeaponMenu_C.LoadPresets
struct UW_WeaponMenu_C_LoadPresets_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.GiveItemToPlayer
struct UW_WeaponMenu_C_GiveItemToPlayer_Params
{
	struct FName                                       InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WeaponMenu.W_WeaponMenu_C.AddChildPresetButton
struct UW_WeaponMenu_C_AddChildPresetButton_Params
{
	struct FName                                       InItem;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FButtonStyle                                InStyle;                                                  // (Parm)
	class UVerticalBox*                                InContainer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WeaponMenu.W_WeaponMenu_C.AddItemToActiveArray
struct UW_WeaponMenu_C_AddItemToActiveArray_Params
{
	struct FName                                       InItem;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function W_WeaponMenu.W_WeaponMenu_C.IsSavePresetMode
struct UW_WeaponMenu_C_IsSavePresetMode_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function W_WeaponMenu.W_WeaponMenu_C.DoExit
struct UW_WeaponMenu_C_DoExit_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.Construct
struct UW_WeaponMenu_C_Construct_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.OnClicked_Event
struct UW_WeaponMenu_C_OnClicked_Event_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_62_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_62_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_63_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_65_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_66_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_486_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_67_K2Node_ComponentBoundEvent_486_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_459_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_459_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_502_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_7_K2Node_ComponentBoundEvent_502_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_582_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_8_K2Node_ComponentBoundEvent_582_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_9_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_13_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_299_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_12_K2Node_ComponentBoundEvent_299_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_14_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_356_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_31_K2Node_ComponentBoundEvent_356_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.Event Close
struct UW_WeaponMenu_C_Event_Close_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_230_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_230_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.CenterCursor
struct UW_WeaponMenu_C_CenterCursor_Params
{
	class APlayerController*                           InPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_18_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_18_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_20_K2Node_ComponentBoundEvent_516_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_20_K2Node_ComponentBoundEvent_516_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_16_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_16_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_15_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_17_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_17_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_24_K2Node_ComponentBoundEvent_461_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_24_K2Node_ComponentBoundEvent_461_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_19_K2Node_ComponentBoundEvent_1565_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_19_K2Node_ComponentBoundEvent_1565_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_23_K2Node_ComponentBoundEvent_369_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_23_K2Node_ComponentBoundEvent_369_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.SetUp
struct UW_WeaponMenu_C_SetUp_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_21_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_21_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_22_K2Node_ComponentBoundEvent_661_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_22_K2Node_ComponentBoundEvent_661_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_25_K2Node_ComponentBoundEvent_711_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_25_K2Node_ComponentBoundEvent_711_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_762_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_26_K2Node_ComponentBoundEvent_762_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_27_K2Node_ComponentBoundEvent_1079_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_27_K2Node_ComponentBoundEvent_1079_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_29_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_29_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_241_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_241_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_35_K2Node_ComponentBoundEvent_295_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_35_K2Node_ComponentBoundEvent_295_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature
struct UW_WeaponMenu_C_BndEvt__Button_32_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_WeaponMenu.W_WeaponMenu_C.ExecuteUbergraph_W_WeaponMenu
struct UW_WeaponMenu_C_ExecuteUbergraph_W_WeaponMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
