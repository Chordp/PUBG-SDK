#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionCloudSavingAlertWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionCloudPopupWidget.OnUploadButtonUnhovered
struct UBP_PcOptionCloudSavingAlertWidget_C_OnUploadButtonUnhovered_Params
{
};

// Function TslGame.TslGameOptionCloudPopupWidget.OnUploadButtonHovered
struct UBP_PcOptionCloudSavingAlertWidget_C_OnUploadButtonHovered_Params
{
};

// Function TslGame.TslGameOptionCloudPopupWidget.OnUploadButtonClicked
struct UBP_PcOptionCloudSavingAlertWidget_C_OnUploadButtonClicked_Params
{
};

// Function TslGame.TslGameOptionCloudPopupWidget.OnSavePopupButtonPressed
struct UBP_PcOptionCloudSavingAlertWidget_C_OnSavePopupButtonPressed_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOptionCloudPopupWidget.OnLoadPopupButtonPressed
struct UBP_PcOptionCloudSavingAlertWidget_C_OnLoadPopupButtonPressed_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOptionCloudPopupWidget.OnDownloadButtonUnhovered
struct UBP_PcOptionCloudSavingAlertWidget_C_OnDownloadButtonUnhovered_Params
{
};

// Function TslGame.TslGameOptionCloudPopupWidget.OnDownloadButtonHovered
struct UBP_PcOptionCloudSavingAlertWidget_C_OnDownloadButtonHovered_Params
{
};

// Function TslGame.TslGameOptionCloudPopupWidget.OnDownloadButtonClicked
struct UBP_PcOptionCloudSavingAlertWidget_C_OnDownloadButtonClicked_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
