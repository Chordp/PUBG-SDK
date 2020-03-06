// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ObserverPlayerIconHitEffect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_ObserverPlayerIconHitEffect_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.Construct"));

	UBP_ObserverPlayerIconHitEffect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.ExecuteUbergraph_BP_ObserverPlayerIconHitEffect
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_ObserverPlayerIconHitEffect_C::ExecuteUbergraph_BP_ObserverPlayerIconHitEffect(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.ExecuteUbergraph_BP_ObserverPlayerIconHitEffect"));

	UBP_ObserverPlayerIconHitEffect_C_ExecuteUbergraph_BP_ObserverPlayerIconHitEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
