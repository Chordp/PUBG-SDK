// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionCloudSavingCoverWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionCloudRequestTimeoutCoverWidget.OnTimeout
// (Final, Native, Public)
// FunctionAddress:0x00007FF75E0CF860              		 offset:46cf860                       

void UBP_PcOptionCloudSavingCoverWidget_C::OnTimeout()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionCloudRequestTimeoutCoverWidget.OnTimeout"));

	UBP_PcOptionCloudSavingCoverWidget_C_OnTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionCloudRequestTimeoutCoverWidget.OnFinishShowResultMessage
// (Final, Native, Public)
// FunctionAddress:0x00007FF759B4B4C0              		 offset:14b4c0                        

void UBP_PcOptionCloudSavingCoverWidget_C::OnFinishShowResultMessage()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionCloudRequestTimeoutCoverWidget.OnFinishShowResultMessage"));

	UBP_PcOptionCloudSavingCoverWidget_C_OnFinishShowResultMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
