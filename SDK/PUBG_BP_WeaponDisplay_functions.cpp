// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_WeaponDisplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_WeaponDisplay_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponDisplay.BP_WeaponDisplay_C.UserConstructionScript"));

	ABP_WeaponDisplay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponDisplay.BP_WeaponDisplay_C.AddStaticMeshAsyncEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          indexMatch                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_WeaponDisplay_C::AddStaticMeshAsyncEvent(bool* indexMatch)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponDisplay.BP_WeaponDisplay_C.AddStaticMeshAsyncEvent"));

	ABP_WeaponDisplay_C_AddStaticMeshAsyncEvent_Params params;
	params.indexMatch = indexMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponDisplay.BP_WeaponDisplay_C.ExecuteUbergraph_BP_WeaponDisplay
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_WeaponDisplay_C::ExecuteUbergraph_BP_WeaponDisplay(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponDisplay.BP_WeaponDisplay_C.ExecuteUbergraph_BP_WeaponDisplay"));

	ABP_WeaponDisplay_C_ExecuteUbergraph_BP_WeaponDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
