// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_FBRBuff_Medikit_pa_lv2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FBRBuff_Medikit_pa_lv2.FBRBuff_Medikit_pa_lv2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AFBRBuff_Medikit_pa_lv2_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function FBRBuff_Medikit_pa_lv2.FBRBuff_Medikit_pa_lv2_C.UserConstructionScript"));

	AFBRBuff_Medikit_pa_lv2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
