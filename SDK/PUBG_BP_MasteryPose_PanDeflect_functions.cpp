// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_PanDeflect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasteryPose_PanDeflect.BP_MasteryPose_PanDeflect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_PanDeflect_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_PanDeflect.BP_MasteryPose_PanDeflect_C.UserConstructionScript"));

	ABP_MasteryPose_PanDeflect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose_PanDeflect.BP_MasteryPose_PanDeflect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_PanDeflect_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_PanDeflect.BP_MasteryPose_PanDeflect_C.ReceiveBeginPlay"));

	ABP_MasteryPose_PanDeflect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose_PanDeflect.BP_MasteryPose_PanDeflect_C.ExecuteUbergraph_BP_MasteryPose_PanDeflect
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_PanDeflect_C::ExecuteUbergraph_BP_MasteryPose_PanDeflect(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_PanDeflect.BP_MasteryPose_PanDeflect_C.ExecuteUbergraph_BP_MasteryPose_PanDeflect"));

	ABP_MasteryPose_PanDeflect_C_ExecuteUbergraph_BP_MasteryPose_PanDeflect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
