// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_FBRBuff_Item_Bolt_ra_lv1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FBRBuff_Item_Bolt_ra_lv1.FBRBuff_Item_Bolt_ra_lv1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AFBRBuff_Item_Bolt_ra_lv1_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function FBRBuff_Item_Bolt_ra_lv1.FBRBuff_Item_Bolt_ra_lv1_C.UserConstructionScript"));

	AFBRBuff_Item_Bolt_ra_lv1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
