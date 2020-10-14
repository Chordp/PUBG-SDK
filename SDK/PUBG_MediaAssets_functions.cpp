// PUBG (8.3.5.39) SDK

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
// struct FTimespan               Time                           (Parm)
// FunctionAddress:0x00007FF62D8ACE10              		 offset:4ddce10                       

void UMediaOverlays::GetTexts(const struct FTimespan& Time, TArray<struct FMediaPlayerOverlay>* OutTexts)
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
// struct FTimespan               Time                           (Parm)
// FunctionAddress:0x00007FF6296BD7F0              		 offset:bed7f0                        

void UMediaOverlays::GetSubtitles(const struct FTimespan& Time, TArray<struct FMediaPlayerOverlay>* OutSubtitles)
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
// struct FTimespan               Time                           (Parm)
// FunctionAddress:0x00007FF629B76900              		 offset:10a6900                       

void UMediaOverlays::GetCaptions(const struct FTimespan& Time, TArray<struct FMediaPlayerOverlay>* OutCaptions)
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
// FunctionAddress:0x00007FF62A235A20              		 offset:1765a20                       

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
// FunctionAddress:0x00007FF62A0E4220              		 offset:1614220                       

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
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62C8CA6F0              		 offset:3dfa6f0                       

bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
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
// class UMediaTexture*           NewTexture                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF628D60F50              		 offset:290f50                        

void UMediaPlayer::SetVideoTexture(class UMediaTexture* NewTexture)
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
// class UMediaSoundWave*         NewSoundWave                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62BC20150              		 offset:3150150                       

void UMediaPlayer::SetSoundWave(class UMediaSoundWave* NewSoundWave)
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
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF629A08E50              		 offset:f38e50                        

bool UMediaPlayer::SetRate(float Rate)
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
// class UMediaOverlays*          NewOverlays                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62A679560              		 offset:1ba9560                       

void UMediaPlayer::SetOverlays(class UMediaOverlays* NewOverlays)
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
// bool                           Looping                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62A6A4F80              		 offset:1bd4f80                       

bool UMediaPlayer::SetLooping(bool Looping)
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
// struct FName                   PlayerName                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62AA4B100              		 offset:1f7b100                       

void UMediaPlayer::SetDesiredPlayerName(const struct FName& PlayerName)
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
// EMediaPlayerTrack              TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF629A1DCA0              		 offset:f4dca0                        

bool UMediaPlayer::SelectTrack(EMediaPlayerTrack TrackType, int TrackIndex)
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
// struct FTimespan               Time                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF629B1FF60              		 offset:104ff60                       

bool UMediaPlayer::Seek(const struct FTimespan& Time)
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
// FunctionAddress:0x00007FF62962BA30              		 offset:b5ba30                        

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
// FunctionAddress:0x00007FF62D79A820              		 offset:4cca820                       

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
// FunctionAddress:0x00007FF62D83AA20              		 offset:4d6aa20                       

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
// FunctionAddress:0x00007FF62D929070              		 offset:4e59070                       

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
// FunctionAddress:0x00007FF62C7419A0              		 offset:3c719a0                       

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
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF629C77470              		 offset:11a7470                       

bool UMediaPlayer::OpenUrl(const struct FString& URL)
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
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6292E25C0              		 offset:8125c0                        

bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
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
// class UMediaPlaylist*          InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF628B3AFF0              		 offset:6aff0                         

bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index)
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
// class UMediaPlaylist*          InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF628F24D20              		 offset:454d20                        

bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
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
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62C595D10              		 offset:3ac5d10                       

bool UMediaPlayer::OpenFile(const struct FString& FilePath)
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
// FunctionAddress:0x00007FF629684F30              		 offset:bb4f30                        

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
// FunctionAddress:0x00007FF629BAC9A0              		 offset:10dc9a0                       

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
// FunctionAddress:0x00007FF62C427CA0              		 offset:3957ca0                       

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
// FunctionAddress:0x00007FF629EB7880              		 offset:13e7880                       

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
// FunctionAddress:0x00007FF6290B3A90              		 offset:5e3a90                        

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
// FunctionAddress:0x00007FF62D00E310              		 offset:453e310                       

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
// FunctionAddress:0x00007FF628C1F340              		 offset:14f340                        

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
// EMediaPlayerTrack              TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6290B3980              		 offset:5e3980                        

struct FString UMediaPlayer::GetTrackLanguage(EMediaPlayerTrack TrackType, int TrackIndex)
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
// EMediaPlayerTrack              TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF62C803B30              		 offset:3d33b30                       

struct FText UMediaPlayer::GetTrackDisplayName(EMediaPlayerTrack TrackType, int TrackIndex)
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
// FunctionAddress:0x00007FF62A39CE90              		 offset:18cce90                       

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
// EMediaPlayerTrack              TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62C3E2160              		 offset:3912160                       

int UMediaPlayer::GetSelectedTrack(EMediaPlayerTrack TrackType)
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
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFloatRange             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6299D53C0              		 offset:f053c0                        

struct FFloatRange UMediaPlayer::GetReverseRates(bool Unthinned)
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
// FunctionAddress:0x00007FF62BBADDB0              		 offset:30dddb0                       

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
// FunctionAddress:0x00007FF62D713970              		 offset:4c43970                       

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
// EMediaPlayerTrack              TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B9D9990              		 offset:2f09990                       

int UMediaPlayer::GetNumTracks(EMediaPlayerTrack TrackType)
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
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFloatRange             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF62D234480              		 offset:4764480                       

struct FFloatRange UMediaPlayer::GetForwardRates(bool Unthinned)
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
// FunctionAddress:0x00007FF628E33B10              		 offset:363b10                        

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
// FunctionAddress:0x00007FF62BDC05D0              		 offset:32f05d0                       

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
// FunctionAddress:0x00007FF62C296010              		 offset:37c6010                       

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
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62A893030              		 offset:1dc3030                       

bool UMediaPlayer::CanPlayUrl(const struct FString& URL)
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
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62C024AC0              		 offset:3554ac0                       

bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
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
// FunctionAddress:0x00007FF62C024A90              		 offset:3554a90                       

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
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62C38CD10              		 offset:38bcd10                       

void UMediaPlaylist::RemoveAt(int Index)
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
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B8FD610              		 offset:2e2d610                       

void UMediaPlaylist::Remove(class UMediaSource* MediaSource)
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
// FunctionAddress:0x00007FF628EB9A50              		 offset:3e9a50                        

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
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF628E20ED0              		 offset:350ed0                        

void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int Index)
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
// FunctionAddress:0x00007FF629FB9620              		 offset:14e9620                       

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
// FunctionAddress:0x00007FF62C7B7D40              		 offset:3ce7d40                       

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
// FunctionAddress:0x00007FF62C837D90              		 offset:3d67d90                       

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
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF629EDE5F0              		 offset:140e5f0                       

class UMediaSource* UMediaPlaylist::Get(int Index)
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
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629F53140              		 offset:1483140                       

void UMediaPlaylist::Add(class UMediaSource* MediaSource)
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
// struct FString                 path                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF629E0F2E0              		 offset:133f2e0                       

void UFileMediaSource::SetFilePath(const struct FString& path)
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
// FunctionAddress:0x00007FF62CCB82B0              		 offset:41e82b0                       

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
// FunctionAddress:0x00007FF62C86B840              		 offset:3d9b840                       

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
// FunctionAddress:0x00007FF62B88E7B0              		 offset:2dbe7b0                       

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
