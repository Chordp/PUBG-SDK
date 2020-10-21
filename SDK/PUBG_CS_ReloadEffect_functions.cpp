// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CS_ReloadEffect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.CameraShake.ReceiveStopShake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bImmediately                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UCS_ReloadEffect_C::ReceiveStopShake(bool bImmediately)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.CameraShake.ReceiveStopShake"));

	UCS_ReloadEffect_C_ReceiveStopShake_Params params;
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CameraShake.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UCS_ReloadEffect_C::ReceivePlayShake(float Scale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.CameraShake.ReceivePlayShake"));

	UCS_ReloadEffect_C_ReceivePlayShake_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CameraShake.ReceiveIsFinished
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D9BBE20              		 offset:3fbbe20                       

bool UCS_ReloadEffect_C::ReceiveIsFinished()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.CameraShake.ReceiveIsFinished"));

	UCS_ReloadEffect_C_ReceiveIsFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.CameraShake.BlueprintUpdateCameraShake
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ALPHA                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FMinimalViewInfo        POV                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMinimalViewInfo        ModifiedPOV                    (Parm, OutParm)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UCS_ReloadEffect_C::BlueprintUpdateCameraShake(float DeltaTime, float ALPHA, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.CameraShake.BlueprintUpdateCameraShake"));

	UCS_ReloadEffect_C_BlueprintUpdateCameraShake_Params params;
	params.DeltaTime = DeltaTime;
	params.ALPHA = ALPHA;
	params.POV = POV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = params.ModifiedPOV;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
