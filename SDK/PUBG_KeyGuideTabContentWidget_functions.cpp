// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KeyGuideTabContentWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KeyGuideTabContentWidget.KeyGuideTabContentWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void UKeyGuideTabContentWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function KeyGuideTabContentWidget.KeyGuideTabContentWidget_C.PreConstruct"));

	UKeyGuideTabContentWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyGuideTabContentWidget.KeyGuideTabContentWidget_C.ExecuteUbergraph_KeyGuideTabContentWidget
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void UKeyGuideTabContentWidget_C::ExecuteUbergraph_KeyGuideTabContentWidget(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function KeyGuideTabContentWidget.KeyGuideTabContentWidget_C.ExecuteUbergraph_KeyGuideTabContentWidget"));

	UKeyGuideTabContentWidget_C_ExecuteUbergraph_KeyGuideTabContentWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
