// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CinematicCamera_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCineCameraComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF719BE4BA0              		 offset:1e14ba0                       
=======
// FunctionAddress:0x00007FF6D8866AE0              		 offset:1ea6ae0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraActor.GetCineCameraComponent"));

	ACineCameraActor_GetCineCameraComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF719BE4BF0              		 offset:1e14bf0                       
=======
// FunctionAddress:0x00007FF6D8866B30              		 offset:1ea6b30                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float UCineCameraComponent::GetVerticalFieldOfView()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView"));

	UCineCameraComponent_GetVerticalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF719BE4BC0              		 offset:1e14bc0                       
=======
// FunctionAddress:0x00007FF6D8866B00              		 offset:1ea6b00                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float UCineCameraComponent::GetHorizontalFieldOfView()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView"));

	UCineCameraComponent_GetHorizontalFieldOfView_Params params;

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
