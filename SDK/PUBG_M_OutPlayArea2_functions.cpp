// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_M_OutPlayArea2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function M_OutPlayArea2.M_OutPlayArea2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void AM_OutPlayArea2_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function M_OutPlayArea2.M_OutPlayArea2_C.UserConstructionScript"));

	AM_OutPlayArea2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_OutPlayArea2.M_OutPlayArea2_C.OnSetEffectParameter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ParameterName                  (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void AM_OutPlayArea2_C::OnSetEffectParameter(const struct FString& ParameterName, float Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function M_OutPlayArea2.M_OutPlayArea2_C.OnSetEffectParameter"));

	AM_OutPlayArea2_C_OnSetEffectParameter_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_OutPlayArea2.M_OutPlayArea2_C.ExecuteUbergraph_M_OutPlayArea2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void AM_OutPlayArea2_C::ExecuteUbergraph_M_OutPlayArea2(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function M_OutPlayArea2.M_OutPlayArea2_C.ExecuteUbergraph_M_OutPlayArea2"));

	AM_OutPlayArea2_C_ExecuteUbergraph_M_OutPlayArea2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
