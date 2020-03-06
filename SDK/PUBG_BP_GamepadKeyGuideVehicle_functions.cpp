// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_GamepadKeyGuideVehicle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GamepadKeyGuideVehicle.BP_GamepadKeyGuideVehicle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_GamepadKeyGuideVehicle_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_GamepadKeyGuideVehicle.BP_GamepadKeyGuideVehicle_C.Construct"));

	UBP_GamepadKeyGuideVehicle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadKeyGuideVehicle.BP_GamepadKeyGuideVehicle_C.ExecuteUbergraph_BP_GamepadKeyGuideVehicle
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_GamepadKeyGuideVehicle_C::ExecuteUbergraph_BP_GamepadKeyGuideVehicle(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_GamepadKeyGuideVehicle.BP_GamepadKeyGuideVehicle_C.ExecuteUbergraph_BP_GamepadKeyGuideVehicle"));

	UBP_GamepadKeyGuideVehicle_C_ExecuteUbergraph_BP_GamepadKeyGuideVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
