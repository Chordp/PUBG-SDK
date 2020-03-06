#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemDropDownListWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
struct UBP_PcOptionItemDropDownListWidget_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.ExecuteUbergraph_BP_PcOptionItemDropDownListWidget
struct UBP_PcOptionItemDropDownListWidget_C_ExecuteUbergraph_BP_PcOptionItemDropDownListWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.OnSelectionChanged__DelegateSignature
struct UBP_PcOptionItemDropDownListWidget_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     KeyStr;                                                   // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
