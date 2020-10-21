// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionCategoryGroupWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionCategoryGroupWidget.OnCloudOptionTooltipDeactivated
// (Final, Native, Public)
// FunctionAddress:0x00007FF75DF8C690              		 offset:458c690                       

void UBP_PcOptionCategoryGroupWidget_C::OnCloudOptionTooltipDeactivated()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionCategoryGroupWidget.OnCloudOptionTooltipDeactivated"));

	UBP_PcOptionCategoryGroupWidget_C_OnCloudOptionTooltipDeactivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionCategoryGroupWidget.OnCloudOptionTooltipActivated
// (Final, Native, Public)
// FunctionAddress:0x00007FF75B114EE0              		 offset:1714ee0                       

void UBP_PcOptionCategoryGroupWidget_C::OnCloudOptionTooltipActivated()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionCategoryGroupWidget.OnCloudOptionTooltipActivated"));

	UBP_PcOptionCategoryGroupWidget_C_OnCloudOptionTooltipActivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
