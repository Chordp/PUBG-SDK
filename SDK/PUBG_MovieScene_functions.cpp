// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MovieScene_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovieScene.MovieSceneSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D9204B60              		 offset:2844b60                       

void UMovieSceneSequencePlayer::Stop()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.Stop"));

	UMovieSceneSequencePlayer_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D9204B40              		 offset:2844b40                       

void UMovieSceneSequencePlayer::StartPlayingNextTick()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick"));

	UMovieSceneSequencePlayer_StartPlayingNextTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D9204980              		 offset:2844980                       

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate"));

	UMovieSceneSequencePlayer_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewStartTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewEndTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D9204A80              		 offset:2844a80                       

void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange"));

	UMovieSceneSequencePlayer_SetPlaybackRange_Params params;
	params.NewStartTime = NewStartTime;
	params.NewEndTime = NewEndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPlaybackPosition            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D9204A00              		 offset:2844a00                       

void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition"));

	UMovieSceneSequencePlayer_SetPlaybackPosition_Params params;
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D9204960              		 offset:2844960                       

void UMovieSceneSequencePlayer::PlayReverse()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.PlayReverse"));

	UMovieSceneSequencePlayer_PlayReverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D92048E0              		 offset:28448e0                       

void UMovieSceneSequencePlayer::PlayLooping(int NumLoops)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.PlayLooping"));

	UMovieSceneSequencePlayer_PlayLooping_Params params;
	params.NumLoops = NumLoops;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D92048C0              		 offset:28448c0                       

void UMovieSceneSequencePlayer::Play()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.Play"));

	UMovieSceneSequencePlayer_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D92048A0              		 offset:28448a0                       

void UMovieSceneSequencePlayer::Pause()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.Pause"));

	UMovieSceneSequencePlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D9204870              		 offset:2844870                       

bool UMovieSceneSequencePlayer::IsPlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.IsPlaying"));

	UMovieSceneSequencePlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D9204800              		 offset:2844800                       

float UMovieSceneSequencePlayer::GetPlayRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate"));

	UMovieSceneSequencePlayer_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D9204850              		 offset:2844850                       

float UMovieSceneSequencePlayer::GetPlaybackStart()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart"));

	UMovieSceneSequencePlayer_GetPlaybackStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D9B36A70              		 offset:3176a70                       

float UMovieSceneSequencePlayer::GetPlaybackPosition()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition"));

	UMovieSceneSequencePlayer_GetPlaybackPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D9204830              		 offset:2844830                       

float UMovieSceneSequencePlayer::GetPlaybackEnd()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd"));

	UMovieSceneSequencePlayer_GetPlaybackEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D92047D0              		 offset:28447d0                       

float UMovieSceneSequencePlayer::GetLength()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.GetLength"));

	UMovieSceneSequencePlayer_GetLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID ObjectBinding                  (Parm)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6D92046C0              		 offset:28446c0                       

TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects"));

	UMovieSceneSequencePlayer_GetBoundObjects_Params params;
	params.ObjectBinding = ObjectBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D92046A0              		 offset:28446a0                       

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection"));

	UMovieSceneSequencePlayer_ChangePlaybackDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
