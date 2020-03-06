// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WBP_BlackZoneWarningIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BlackZoneWarningIcon.WBP_BlackZoneWarningIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWBP_BlackZoneWarningIcon_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BlackZoneWarningIcon.WBP_BlackZoneWarningIcon_C.PreConstruct"));

	UWBP_BlackZoneWarningIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BlackZoneWarningIcon.WBP_BlackZoneWarningIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWBP_BlackZoneWarningIcon_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BlackZoneWarningIcon.WBP_BlackZoneWarningIcon_C.Construct"));

	UWBP_BlackZoneWarningIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BlackZoneWarningIcon.WBP_BlackZoneWarningIcon_C.ExecuteUbergraph_WBP_BlackZoneWarningIcon
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWBP_BlackZoneWarningIcon_C::ExecuteUbergraph_WBP_BlackZoneWarningIcon(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BlackZoneWarningIcon.WBP_BlackZoneWarningIcon_C.ExecuteUbergraph_WBP_BlackZoneWarningIcon"));

	UWBP_BlackZoneWarningIcon_C_ExecuteUbergraph_WBP_BlackZoneWarningIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
