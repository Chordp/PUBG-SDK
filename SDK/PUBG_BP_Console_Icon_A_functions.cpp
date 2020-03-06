// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Console_Icon_A_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Console_Icon_A.BP_Console_Icon_A_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_Console_Icon_A_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Console_Icon_A.BP_Console_Icon_A_C.PreConstruct"));

	UBP_Console_Icon_A_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Console_Icon_A.BP_Console_Icon_A_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_Console_Icon_A_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Console_Icon_A.BP_Console_Icon_A_C.Construct"));

	UBP_Console_Icon_A_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Console_Icon_A.BP_Console_Icon_A_C.ExecuteUbergraph_BP_Console_Icon_A
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_Console_Icon_A_C::ExecuteUbergraph_BP_Console_Icon_A(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Console_Icon_A.BP_Console_Icon_A_C.ExecuteUbergraph_BP_Console_Icon_A"));

	UBP_Console_Icon_A_C_ExecuteUbergraph_BP_Console_Icon_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
