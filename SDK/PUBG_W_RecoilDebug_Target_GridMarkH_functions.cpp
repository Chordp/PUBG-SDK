// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_RecoilDebug_Target_GridMarkH_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_RecoilDebug_Target_GridMarkH.W_RecoilDebug_Target_GridMarkH_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_GridMarkH_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target_GridMarkH.W_RecoilDebug_Target_GridMarkH_C.Construct"));

	UW_RecoilDebug_Target_GridMarkH_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target_GridMarkH.W_RecoilDebug_Target_GridMarkH_C.ExecuteUbergraph_W_RecoilDebug_Target_GridMarkH
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_GridMarkH_C::ExecuteUbergraph_W_RecoilDebug_Target_GridMarkH(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target_GridMarkH.W_RecoilDebug_Target_GridMarkH_C.ExecuteUbergraph_W_RecoilDebug_Target_GridMarkH"));

	UW_RecoilDebug_Target_GridMarkH_C_ExecuteUbergraph_W_RecoilDebug_Target_GridMarkH_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
