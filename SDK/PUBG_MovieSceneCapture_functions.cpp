// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MovieSceneCapture_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8BEF2B0              		 offset:222f2b0                       

int UMovieSceneCaptureEnvironment::STATIC_GetCaptureFrameNumber()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber"));

	UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8BEF280              		 offset:222f280                       

float UMovieSceneCaptureEnvironment::STATIC_GetCaptureElapsedTime()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime"));

	UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params params;

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
