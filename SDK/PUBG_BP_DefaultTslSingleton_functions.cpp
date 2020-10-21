// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_DefaultTslSingleton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslSingleton.OnFinishLoadEmote
// (Final, Native, Private)
// FunctionAddress:0x00007FF75BAA12B0              		 offset:20a12b0                       

void UBP_DefaultTslSingleton_C::OnFinishLoadEmote()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslSingleton.OnFinishLoadEmote"));

	UBP_DefaultTslSingleton_C_OnFinishLoadEmote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSingleton.GetCharmAnimInstance
// (Final, Native, Public, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BB83870              		 offset:2183870                       

class UClass* UBP_DefaultTslSingleton_C::GetCharmAnimInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslSingleton.GetCharmAnimInstance"));

	UBP_DefaultTslSingleton_C_GetCharmAnimInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
