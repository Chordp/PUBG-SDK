#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionCloudSavingAlertWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionCloudSavingAlertWidget.BP_PcOptionCloudSavingAlertWidget_C
// 0x0000 (0x0478 - 0x0478)
class UBP_PcOptionCloudSavingAlertWidget_C : public UTslGameOptionCloudPopupWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionCloudSavingAlertWidget.BP_PcOptionCloudSavingAlertWidget_C"));

		return ptr;
	}


	void STATIC_OnUploadButtonUnhovered();
	void STATIC_OnUploadButtonHovered();
	void STATIC_OnUploadButtonClicked();
	void STATIC_OnSavePopupButtonPressed(EPopupButtonID ButtonID);
	void STATIC_OnLoadPopupButtonPressed(EPopupButtonID ButtonID);
	void STATIC_OnDownloadButtonUnhovered();
	void STATIC_OnDownloadButtonHovered();
	void STATIC_OnDownloadButtonClicked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
