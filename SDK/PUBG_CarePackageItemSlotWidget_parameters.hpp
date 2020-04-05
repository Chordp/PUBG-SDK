#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CarePackageItemSlotWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.GetSlotItem
struct UCarePackageItemSlotWidget_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.GetSlotContainer
struct UCarePackageItemSlotWidget_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.SetItemCount
struct UCarePackageItemSlotWidget_C_SetItemCount_Params
{
	int*                                               ItemCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.SetItemIcon
struct UCarePackageItemSlotWidget_C_SetItemIcon_Params
{
	class UTexture**                                   ItemIcon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.SetItemName
struct UCarePackageItemSlotWidget_C_SetItemName_Params
{
	struct FText*                                      ItemName;                                                 // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
