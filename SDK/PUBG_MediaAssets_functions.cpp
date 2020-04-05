// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MediaAssets_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediaAssets.MediaOverlays.GetTexts
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMediaPlayerOverlay> OutTexts                       (Parm, OutParm, ZeroConstructor)
<<<<<<< HEAD
// struct FTimespan*              Time                           (Parm)
// FunctionAddress:0x00007FF7184A3180              		 offset:6d3180                        

void UMediaOverlays::GetTexts(struct FTimespan* Time, TArray<struct FMediaPlayerOverlay>* OutTexts)
=======
// struct FTimespan               Time                           (Parm)
// FunctionAddress:0x00007FF6D70D8520              		 offset:718520                        

void UMediaOverlays::GetTexts(const struct FTimespan& Time, TArray<struct FMediaPlayerOverlay>* OutTexts)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaOverlays.GetTexts"));

	UMediaOverlays_GetTexts_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTexts != nullptr)
		*OutTexts = params.OutTexts;
}


// Function MediaAssets.MediaOverlays.GetSubtitles
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMediaPlayerOverlay> OutSubtitles                   (Parm, OutParm, ZeroConstructor)
<<<<<<< HEAD
// struct FTimespan*              Time                           (Parm)
// FunctionAddress:0x00007FF7184A3030              		 offset:6d3030                        

void UMediaOverlays::GetSubtitles(struct FTimespan* Time, TArray<struct FMediaPlayerOverlay>* OutSubtitles)
=======
// struct FTimespan               Time                           (Parm)
// FunctionAddress:0x00007FF6D70D83D0              		 offset:7183d0                        

void UMediaOverlays::GetSubtitles(const struct FTimespan& Time, TArray<struct FMediaPlayerOverlay>* OutSubtitles)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaOverlays.GetSubtitles"));

	UMediaOverlays_GetSubtitles_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSubtitles != nullptr)
		*OutSubtitles = params.OutSubtitles;
}


// Function MediaAssets.MediaOverlays.GetCaptions
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMediaPlayerOverlay> OutCaptions                    (Parm, OutParm, ZeroConstructor)
<<<<<<< HEAD
// struct FTimespan*              Time                           (Parm)
// FunctionAddress:0x00007FF7184A2960              		 offset:6d2960                        

void UMediaOverlays::GetCaptions(struct FTimespan* Time, TArray<struct FMediaPlayerOverlay>* OutCaptions)
=======
// struct FTimespan               Time                           (Parm)
// FunctionAddress:0x00007FF6D70D7D00              		 offset:717d00                        

void UMediaOverlays::GetCaptions(const struct FTimespan& Time, TArray<struct FMediaPlayerOverlay>* OutCaptions)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaOverlays.GetCaptions"));

	UMediaOverlays_GetCaptions_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCaptions != nullptr)
		*OutCaptions = params.OutCaptions;
}


// Function MediaAssets.MediaPlayer.SupportsSeeking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A43E0              		 offset:6d43e0                        
=======
// FunctionAddress:0x00007FF6D70D9780              		 offset:719780                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::SupportsSeeking()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsSeeking"));

	UMediaPlayer_SupportsSeeking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsScrubbing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A43B0              		 offset:6d43b0                        
=======
// FunctionAddress:0x00007FF6D70D9750              		 offset:719750                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::SupportsScrubbing()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsScrubbing"));

	UMediaPlayer_SupportsScrubbing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A42E0              		 offset:6d42e0                        

bool UMediaPlayer::SupportsRate(float* Rate, bool* Unthinned)
=======
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D9680              		 offset:719680                        

bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsRate"));

	UMediaPlayer_SupportsRate_Params params;
	params.Rate = Rate;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetVideoTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UMediaTexture**          NewTexture                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7184A4260              		 offset:6d4260                        

void UMediaPlayer::SetVideoTexture(class UMediaTexture** NewTexture)
=======
// class UMediaTexture*           NewTexture                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D9600              		 offset:719600                        

void UMediaPlayer::SetVideoTexture(class UMediaTexture* NewTexture)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetVideoTexture"));

	UMediaPlayer_SetVideoTexture_Params params;
	params.NewTexture = NewTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.SetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UMediaSoundWave**        NewSoundWave                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7184A41E0              		 offset:6d41e0                        

void UMediaPlayer::SetSoundWave(class UMediaSoundWave** NewSoundWave)
=======
// class UMediaSoundWave*         NewSoundWave                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D9580              		 offset:719580                        

void UMediaPlayer::SetSoundWave(class UMediaSoundWave* NewSoundWave)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetSoundWave"));

	UMediaPlayer_SetSoundWave_Params params;
	params.NewSoundWave = NewSoundWave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A4150              		 offset:6d4150                        

bool UMediaPlayer::SetRate(float* Rate)
=======
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D94F0              		 offset:7194f0                        

bool UMediaPlayer::SetRate(float Rate)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetRate"));

	UMediaPlayer_SetRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetOverlays
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UMediaOverlays**         NewOverlays                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7184A40D0              		 offset:6d40d0                        

void UMediaPlayer::SetOverlays(class UMediaOverlays** NewOverlays)
=======
// class UMediaOverlays*          NewOverlays                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D9470              		 offset:719470                        

void UMediaPlayer::SetOverlays(class UMediaOverlays* NewOverlays)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetOverlays"));

	UMediaPlayer_SetOverlays_Params params;
	params.NewOverlays = NewOverlays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// bool*                          Looping                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A4040              		 offset:6d4040                        

bool UMediaPlayer::SetLooping(bool* Looping)
=======
// bool                           Looping                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D93E0              		 offset:7193e0                        

bool UMediaPlayer::SetLooping(bool Looping)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetLooping"));

	UMediaPlayer_SetLooping_Params params;
	params.Looping = Looping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FName*                  PlayerName                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7184A3F20              		 offset:6d3f20                        

void UMediaPlayer::SetDesiredPlayerName(struct FName* PlayerName)
=======
// struct FName                   PlayerName                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D92C0              		 offset:7192c0                        

void UMediaPlayer::SetDesiredPlayerName(const struct FName& PlayerName)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetDesiredPlayerName"));

	UMediaPlayer_SetDesiredPlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.SelectTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// EMediaPlayerTrack*             TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A3E60              		 offset:6d3e60                        

bool UMediaPlayer::SelectTrack(EMediaPlayerTrack* TrackType, int* TrackIndex)
=======
// EMediaPlayerTrack              TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D9200              		 offset:719200                        

bool UMediaPlayer::SelectTrack(EMediaPlayerTrack TrackType, int TrackIndex)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SelectTrack"));

	UMediaPlayer_SelectTrack_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Seek
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FTimespan*              Time                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A3DC0              		 offset:6d3dc0                        

bool UMediaPlayer::Seek(struct FTimespan* Time)
=======
// struct FTimespan               Time                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D9160              		 offset:719160                        

bool UMediaPlayer::Seek(const struct FTimespan& Time)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Seek"));

	UMediaPlayer_Seek_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Rewind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A3D90              		 offset:6d3d90                        
=======
// FunctionAddress:0x00007FF6D70D9130              		 offset:719130                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::Rewind()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Rewind"));

	UMediaPlayer_Rewind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Reopen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A3D60              		 offset:6d3d60                        
=======
// FunctionAddress:0x00007FF6D70D9100              		 offset:719100                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::Reopen()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Reopen"));

	UMediaPlayer_Reopen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A3BE0              		 offset:6d3be0                        
=======
// FunctionAddress:0x00007FF6D70D8F80              		 offset:718f80                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::Previous()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Previous"));

	UMediaPlayer_Previous_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A3BB0              		 offset:6d3bb0                        
=======
// FunctionAddress:0x00007FF6D70D8F50              		 offset:718f50                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::Play()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Play"));

	UMediaPlayer_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A3B80              		 offset:6d3b80                        
=======
// FunctionAddress:0x00007FF6D70D8F20              		 offset:718f20                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::Pause()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Pause"));

	UMediaPlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FString*                URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A3AD0              		 offset:6d3ad0                        

bool UMediaPlayer::OpenUrl(struct FString* URL)
=======
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D8E70              		 offset:718e70                        

bool UMediaPlayer::OpenUrl(const struct FString& URL)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenUrl"));

	UMediaPlayer_OpenUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UMediaSource**           MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A3A40              		 offset:6d3a40                        

bool UMediaPlayer::OpenSource(class UMediaSource** MediaSource)
=======
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D8DE0              		 offset:718de0                        

bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSource"));

	UMediaPlayer_OpenSource_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UMediaPlaylist**         InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A3980              		 offset:6d3980                        

bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist** InPlaylist, int* Index)
=======
// class UMediaPlaylist*          InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D8D20              		 offset:718d20                        

bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenPlaylistIndex"));

	UMediaPlayer_OpenPlaylistIndex_Params params;
	params.InPlaylist = InPlaylist;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UMediaPlaylist**         InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A38E0              		 offset:6d38e0                        

bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist** InPlaylist)
=======
// class UMediaPlaylist*          InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D8C80              		 offset:718c80                        

bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenPlaylist"));

	UMediaPlayer_OpenPlaylist_Params params;
	params.InPlaylist = InPlaylist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FString*                FilePath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A3830              		 offset:6d3830                        

bool UMediaPlayer::OpenFile(struct FString* FilePath)
=======
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D8BD0              		 offset:718bd0                        

bool UMediaPlayer::OpenFile(const struct FString& FilePath)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenFile"));

	UMediaPlayer_OpenFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A37E0              		 offset:6d37e0                        
=======
// FunctionAddress:0x00007FF6D70D8B80              		 offset:718b80                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::Next()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Next"));

	UMediaPlayer_Next_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A37B0              		 offset:6d37b0                        
=======
// FunctionAddress:0x00007FF6D70D8B50              		 offset:718b50                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::IsReady()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsReady"));

	UMediaPlayer_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPreparing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A3780              		 offset:6d3780                        
=======
// FunctionAddress:0x00007FF6D70D8B20              		 offset:718b20                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::IsPreparing()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPreparing"));

	UMediaPlayer_IsPreparing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A3750              		 offset:6d3750                        
=======
// FunctionAddress:0x00007FF6D70D8AF0              		 offset:718af0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::IsPlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPlaying"));

	UMediaPlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A3720              		 offset:6d3720                        
=======
// FunctionAddress:0x00007FF6D70D8AC0              		 offset:718ac0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::IsPaused()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPaused"));

	UMediaPlayer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A36F0              		 offset:6d36f0                        
=======
// FunctionAddress:0x00007FF6D70D8A90              		 offset:718a90                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::IsLooping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsLooping"));

	UMediaPlayer_IsLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A3530              		 offset:6d3530                        
=======
// FunctionAddress:0x00007FF6D70D88D0              		 offset:7188d0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

struct FString UMediaPlayer::GetUrl()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetUrl"));

	UMediaPlayer_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackLanguage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// EMediaPlayerTrack*             TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF7184A3420              		 offset:6d3420                        

struct FString UMediaPlayer::GetTrackLanguage(EMediaPlayerTrack* TrackType, int* TrackIndex)
=======
// EMediaPlayerTrack              TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6D70D87C0              		 offset:7187c0                        

struct FString UMediaPlayer::GetTrackLanguage(EMediaPlayerTrack TrackType, int TrackIndex)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackLanguage"));

	UMediaPlayer_GetTrackLanguage_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// EMediaPlayerTrack*             TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF7184A3310              		 offset:6d3310                        

struct FText UMediaPlayer::GetTrackDisplayName(EMediaPlayerTrack* TrackType, int* TrackIndex)
=======
// EMediaPlayerTrack              TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D70D86B0              		 offset:7186b0                        

struct FText UMediaPlayer::GetTrackDisplayName(EMediaPlayerTrack TrackType, int TrackIndex)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackDisplayName"));

	UMediaPlayer_GetTrackDisplayName_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ReturnParm)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A32D0              		 offset:6d32d0                        
=======
// FunctionAddress:0x00007FF6D70D8670              		 offset:718670                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

struct FTimespan UMediaPlayer::GetTime()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTime"));

	UMediaPlayer_GetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetSelectedTrack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// EMediaPlayerTrack*             TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A2FA0              		 offset:6d2fa0                        

int UMediaPlayer::GetSelectedTrack(EMediaPlayerTrack* TrackType)
=======
// EMediaPlayerTrack              TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D8340              		 offset:718340                        

int UMediaPlayer::GetSelectedTrack(EMediaPlayerTrack TrackType)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetSelectedTrack"));

	UMediaPlayer_GetSelectedTrack_Params params;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetReverseRates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// bool*                          Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFloatRange             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF7184A2EF0              		 offset:6d2ef0                        

struct FFloatRange UMediaPlayer::GetReverseRates(bool* Unthinned)
=======
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFloatRange             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D70D8290              		 offset:718290                        

struct FFloatRange UMediaPlayer::GetReverseRates(bool Unthinned)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetReverseRates"));

	UMediaPlayer_GetReverseRates_Params params;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A2EC0              		 offset:6d2ec0                        
=======
// FunctionAddress:0x00007FF6D70D8260              		 offset:718260                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float UMediaPlayer::GetRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetRate"));

	UMediaPlayer_GetRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A2D40              		 offset:6d2d40                        
=======
// FunctionAddress:0x00007FF6D70D80E0              		 offset:7180e0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

struct FName UMediaPlayer::GetPlayerName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlayerName"));

	UMediaPlayer_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetNumTracks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// EMediaPlayerTrack*             TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A2CB0              		 offset:6d2cb0                        

int UMediaPlayer::GetNumTracks(EMediaPlayerTrack* TrackType)
=======
// EMediaPlayerTrack              TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D8050              		 offset:718050                        

int UMediaPlayer::GetNumTracks(EMediaPlayerTrack TrackType)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetNumTracks"));

	UMediaPlayer_GetNumTracks_Params params;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetForwardRates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// bool*                          Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFloatRange             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF7184A2B30              		 offset:6d2b30                        

struct FFloatRange UMediaPlayer::GetForwardRates(bool* Unthinned)
=======
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFloatRange             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D70D7ED0              		 offset:717ed0                        

struct FFloatRange UMediaPlayer::GetForwardRates(bool Unthinned)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetForwardRates"));

	UMediaPlayer_GetForwardRates_Params params;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ReturnParm)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A2AF0              		 offset:6d2af0                        
=======
// FunctionAddress:0x00007FF6D70D7E90              		 offset:717e90                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

struct FTimespan UMediaPlayer::GetDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetDuration"));

	UMediaPlayer_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A2AB0              		 offset:6d2ab0                        
=======
// FunctionAddress:0x00007FF6D70D7E50              		 offset:717e50                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

struct FName UMediaPlayer::GetDesiredPlayerName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetDesiredPlayerName"));

	UMediaPlayer_GetDesiredPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Close
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A2880              		 offset:6d2880                        
=======
// FunctionAddress:0x00007FF6D70D7C20              		 offset:717c20                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UMediaPlayer::Close()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Close"));

	UMediaPlayer_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.CanPlayUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FString*                URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A27D0              		 offset:6d27d0                        

bool UMediaPlayer::CanPlayUrl(struct FString* URL)
=======
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D7B70              		 offset:717b70                        

bool UMediaPlayer::CanPlayUrl(const struct FString& URL)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPlayUrl"));

	UMediaPlayer_CanPlayUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPlaySource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UMediaSource**           MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A2740              		 offset:6d2740                        

bool UMediaPlayer::CanPlaySource(class UMediaSource** MediaSource)
=======
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D7AE0              		 offset:717ae0                        

bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPlaySource"));

	UMediaPlayer_CanPlaySource_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPause
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A2710              		 offset:6d2710                        
=======
// FunctionAddress:0x00007FF6D70D7AB0              		 offset:717ab0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UMediaPlayer::CanPause()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPause"));

	UMediaPlayer_CanPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.RemoveAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7184A3CA0              		 offset:6d3ca0                        

void UMediaPlaylist::RemoveAt(int* Index)
=======
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D9040              		 offset:719040                        

void UMediaPlaylist::RemoveAt(int Index)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.RemoveAt"));

	UMediaPlaylist_RemoveAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlaylist.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UMediaSource**           MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7184A3C10              		 offset:6d3c10                        

void UMediaPlaylist::Remove(class UMediaSource** MediaSource)
=======
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D8FB0              		 offset:718fb0                        

void UMediaPlaylist::Remove(class UMediaSource* MediaSource)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Remove"));

	UMediaPlaylist_Remove_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlaylist.Num
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A3810              		 offset:6d3810                        
=======
// FunctionAddress:0x00007FF6D70D8BB0              		 offset:718bb0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

int UMediaPlaylist::Num()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Num"));

	UMediaPlaylist_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Insert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UMediaSource**           MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7184A35F0              		 offset:6d35f0                        

void UMediaPlaylist::Insert(class UMediaSource** MediaSource, int* Index)
=======
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D8990              		 offset:718990                        

void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int Index)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Insert"));

	UMediaPlaylist_Insert_Params params;
	params.MediaSource = MediaSource;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlaylist.GetRandom
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A2E20              		 offset:6d2e20                        
=======
// FunctionAddress:0x00007FF6D70D81C0              		 offset:7181c0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class UMediaSource* UMediaPlaylist::GetRandom(int* InOutIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetRandom"));

	UMediaPlaylist_GetRandom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetPrevious
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A2D80              		 offset:6d2d80                        
=======
// FunctionAddress:0x00007FF6D70D8120              		 offset:718120                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class UMediaSource* UMediaPlaylist::GetPrevious(int* InOutIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetPrevious"));

	UMediaPlaylist_GetPrevious_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetNext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A2C10              		 offset:6d2c10                        
=======
// FunctionAddress:0x00007FF6D70D7FB0              		 offset:717fb0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class UMediaSource* UMediaPlaylist::GetNext(int* InOutIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetNext"));

	UMediaPlaylist_GetNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Get
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184A28A0              		 offset:6d28a0                        

class UMediaSource* UMediaPlaylist::Get(int* Index)
=======
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D7C40              		 offset:717c40                        

class UMediaSource* UMediaPlaylist::Get(int Index)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Get"));

	UMediaPlaylist_Get_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UMediaSource**           MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7184A2670              		 offset:6d2670                        

void UMediaPlaylist::Add(class UMediaSource** MediaSource)
=======
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D70D7A10              		 offset:717a10                        

void UMediaPlaylist::Add(class UMediaSource* MediaSource)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Add"));

	UMediaPlaylist_Add_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.FileMediaSource.SetFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FString*                path                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF7184A3FA0              		 offset:6d3fa0                        

void UFileMediaSource::SetFilePath(struct FString* path)
=======
// struct FString                 path                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D70D9340              		 offset:719340                        

void UFileMediaSource::SetFilePath(const struct FString& path)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.FileMediaSource.SetFilePath"));

	UFileMediaSource_SetFilePath_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaTexture.GetWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A35C0              		 offset:6d35c0                        
=======
// FunctionAddress:0x00007FF6D70D8960              		 offset:718960                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

int UMediaTexture::GetWidth()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetWidth"));

	UMediaTexture_GetWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A2BE0              		 offset:6d2be0                        
=======
// FunctionAddress:0x00007FF6D70D7F80              		 offset:717f80                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

int UMediaTexture::GetHeight()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetHeight"));

	UMediaTexture_GetHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetAspectRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF7184A2930              		 offset:6d2930                        
=======
// FunctionAddress:0x00007FF6D70D7CD0              		 offset:717cd0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float UMediaTexture::GetAspectRatio()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetAspectRatio"));

	UMediaTexture_GetAspectRatio_Params params;

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
