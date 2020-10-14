// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Sky_Sphere_Desert_06_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sky_Sphere_Desert_06.BP_Sky_Sphere_Desert_06_C.UpdateSunDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void ABP_Sky_Sphere_Desert_06_C::UpdateSunDirection()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sky_Sphere_Desert_06.BP_Sky_Sphere_Desert_06_C.UpdateSunDirection"));

	ABP_Sky_Sphere_Desert_06_C_UpdateSunDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Desert_06.BP_Sky_Sphere_Desert_06_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void ABP_Sky_Sphere_Desert_06_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sky_Sphere_Desert_06.BP_Sky_Sphere_Desert_06_C.UserConstructionScript"));

	ABP_Sky_Sphere_Desert_06_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
