// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TSLAchievement_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSLAchievement_BP.TSLAchievement_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void ATSLAchievement_BP_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TSLAchievement_BP.TSLAchievement_BP_C.UserConstructionScript"));

	ATSLAchievement_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
