#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_RecoilDebug_Target_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.MarkerGridPopulate
struct UW_RecoilDebug_Target_C_MarkerGridPopulate_Params
{
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeMarkerZoom
struct UW_RecoilDebug_Target_C_Grid_ChangeMarkerZoom_Params
{
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangePointZoom
struct UW_RecoilDebug_Target_C_Grid_ChangePointZoom_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddDataRow
struct UW_RecoilDebug_Target_C_AddDataRow_Params
{
	struct FRecoilDebugInfo                            InRecoil;                                                 // (Parm)
	float                                              Rec_L;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rec_R;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rec_Tendency;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rec_VariationVert;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rec_Bullet;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeZoom
struct UW_RecoilDebug_Target_C_Grid_ChangeZoom_Params
{
	int                                                InChange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddBox
struct UW_RecoilDebug_Target_C_AddBox_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, IsPlainOldData)
	struct FVector2D                                   InLocation;                                               // (Parm, IsPlainOldData)
	struct FVector2D                                   InSize;                                                   // (Parm, IsPlainOldData)
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ResetPoints
struct UW_RecoilDebug_Target_C_ResetPoints_Params
{
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddPoint
struct UW_RecoilDebug_Target_C_AddPoint_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, IsPlainOldData)
	struct FVector2D                                   InLocation;                                               // (Parm, IsPlainOldData)
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Construct
struct UW_RecoilDebug_Target_C_Construct_Params
{
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
struct UW_RecoilDebug_Target_C_BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature
struct UW_RecoilDebug_Target_C_BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature
struct UW_RecoilDebug_Target_C_BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature
struct UW_RecoilDebug_Target_C_BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature
struct UW_RecoilDebug_Target_C_BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature
struct UW_RecoilDebug_Target_C_BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature
struct UW_RecoilDebug_Target_C_BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature
struct UW_RecoilDebug_Target_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ExecuteUbergraph_W_RecoilDebug_Target
struct UW_RecoilDebug_Target_C_ExecuteUbergraph_W_RecoilDebug_Target_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
