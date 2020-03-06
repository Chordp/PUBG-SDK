// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KeyImageWIdgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KeyImageWIdgetBP.KeyImageWIdgetBP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UKeyImageWIdgetBP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function KeyImageWIdgetBP.KeyImageWIdgetBP_C.PreConstruct"));

	UKeyImageWIdgetBP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyImageWIdgetBP.KeyImageWIdgetBP_C.ExecuteUbergraph_KeyImageWIdgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UKeyImageWIdgetBP_C::ExecuteUbergraph_KeyImageWIdgetBP(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function KeyImageWIdgetBP.KeyImageWIdgetBP_C.ExecuteUbergraph_KeyImageWIdgetBP"));

	UKeyImageWIdgetBP_C_ExecuteUbergraph_KeyImageWIdgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
