// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_RealtimeMissionItemWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RealtimeMissionItemWidget.RealtimeMissionItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void URealtimeMissionItemWidget_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RealtimeMissionItemWidget.RealtimeMissionItemWidget_C.Construct"));

	URealtimeMissionItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RealtimeMissionItemWidget.RealtimeMissionItemWidget_C.ExecuteUbergraph_RealtimeMissionItemWidget
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void URealtimeMissionItemWidget_C::ExecuteUbergraph_RealtimeMissionItemWidget(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RealtimeMissionItemWidget.RealtimeMissionItemWidget_C.ExecuteUbergraph_RealtimeMissionItemWidget"));

	URealtimeMissionItemWidget_C_ExecuteUbergraph_RealtimeMissionItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
