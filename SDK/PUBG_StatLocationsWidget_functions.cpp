// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_StatLocationsWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatLocationsWidget.StatLocationsWidget_C.ClearStatBoxes
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void UStatLocationsWidget_C::ClearStatBoxes()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatLocationsWidget.StatLocationsWidget_C.ClearStatBoxes"));

	UStatLocationsWidget_C_ClearStatBoxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatLocationsWidget.StatLocationsWidget_C.SetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Stats                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void UStatLocationsWidget_C::SetText(TArray<struct FString>* Stats)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatLocationsWidget.StatLocationsWidget_C.SetText"));

	UStatLocationsWidget_C_SetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function StatLocationsWidget.StatLocationsWidget_C.GetText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

struct FText UStatLocationsWidget_C::GetText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatLocationsWidget.StatLocationsWidget_C.GetText"));

	UStatLocationsWidget_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
