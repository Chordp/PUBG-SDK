// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MapWayPointWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MapWayPointWidget.BP_MapWayPointWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_MapWayPointWidget_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MapWayPointWidget.BP_MapWayPointWidget_C.PreConstruct"));

	UBP_MapWayPointWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapWayPointWidget.BP_MapWayPointWidget_C.ExecuteUbergraph_BP_MapWayPointWidget
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_MapWayPointWidget_C::ExecuteUbergraph_BP_MapWayPointWidget(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MapWayPointWidget.BP_MapWayPointWidget_C.ExecuteUbergraph_BP_MapWayPointWidget"));

	UBP_MapWayPointWidget_C_ExecuteUbergraph_BP_MapWayPointWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
