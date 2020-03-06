// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PP_OutlineCustomDepthOcclusion_Inst_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PP_OutlineCustomDepthOcclusion_Inst.BP_PP_OutlineCustomDepthOcclusion_Inst_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_PP_OutlineCustomDepthOcclusion_Inst_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PP_OutlineCustomDepthOcclusion_Inst.BP_PP_OutlineCustomDepthOcclusion_Inst_C.UserConstructionScript"));

	ABP_PP_OutlineCustomDepthOcclusion_Inst_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
