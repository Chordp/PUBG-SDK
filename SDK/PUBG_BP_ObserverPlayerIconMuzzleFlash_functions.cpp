// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ObserverPlayerIconMuzzleFlash_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.PlayMuzzleFlashAnim
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_ObserverPlayerIconMuzzleFlash_C::PlayMuzzleFlashAnim()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.PlayMuzzleFlashAnim"));

	UBP_ObserverPlayerIconMuzzleFlash_C_PlayMuzzleFlashAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_ObserverPlayerIconMuzzleFlash_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.Construct"));

	UBP_ObserverPlayerIconMuzzleFlash_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.ExecuteUbergraph_BP_ObserverPlayerIconMuzzleFlash
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_ObserverPlayerIconMuzzleFlash_C::ExecuteUbergraph_BP_ObserverPlayerIconMuzzleFlash(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.ExecuteUbergraph_BP_ObserverPlayerIconMuzzleFlash"));

	UBP_ObserverPlayerIconMuzzleFlash_C_ExecuteUbergraph_BP_ObserverPlayerIconMuzzleFlash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
