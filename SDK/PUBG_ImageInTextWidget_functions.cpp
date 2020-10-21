// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ImageInTextWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.ImageInTextWidget.UpdateText
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75DE8A7E0              		 offset:448a7e0                       

void UImageInTextWidget_C::UpdateText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.ImageInTextWidget.UpdateText"));

	UImageInTextWidget_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
