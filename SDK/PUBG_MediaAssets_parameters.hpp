#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MediaAssets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MediaAssets.MediaOverlays.GetTexts
struct UMediaOverlays_GetTexts_Params
{
	TArray<struct FMediaPlayerOverlay>                 OutTexts;                                                 // (Parm, OutParm, ZeroConstructor)
<<<<<<< HEAD
	struct FTimespan*                                  Time;                                                     // (Parm)
=======
	struct FTimespan                                   Time;                                                     // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.MediaOverlays.GetSubtitles
struct UMediaOverlays_GetSubtitles_Params
{
	TArray<struct FMediaPlayerOverlay>                 OutSubtitles;                                             // (Parm, OutParm, ZeroConstructor)
<<<<<<< HEAD
	struct FTimespan*                                  Time;                                                     // (Parm)
=======
	struct FTimespan                                   Time;                                                     // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.MediaOverlays.GetCaptions
struct UMediaOverlays_GetCaptions_Params
{
	TArray<struct FMediaPlayerOverlay>                 OutCaptions;                                              // (Parm, OutParm, ZeroConstructor)
<<<<<<< HEAD
	struct FTimespan*                                  Time;                                                     // (Parm)
=======
	struct FTimespan                                   Time;                                                     // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.MediaPlayer.SupportsSeeking
struct UMediaPlayer_SupportsSeeking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SupportsScrubbing
struct UMediaPlayer_SupportsScrubbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SupportsRate
struct UMediaPlayer_SupportsRate_Params
{
<<<<<<< HEAD
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Unthinned;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unthinned;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetVideoTexture
struct UMediaPlayer_SetVideoTexture_Params
{
<<<<<<< HEAD
	class UMediaTexture**                              NewTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UMediaTexture*                               NewTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.MediaPlayer.SetSoundWave
struct UMediaPlayer_SetSoundWave_Params
{
<<<<<<< HEAD
	class UMediaSoundWave**                            NewSoundWave;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UMediaSoundWave*                             NewSoundWave;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.MediaPlayer.SetRate
struct UMediaPlayer_SetRate_Params
{
<<<<<<< HEAD
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetOverlays
struct UMediaPlayer_SetOverlays_Params
{
<<<<<<< HEAD
	class UMediaOverlays**                             NewOverlays;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UMediaOverlays*                              NewOverlays;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.MediaPlayer.SetLooping
struct UMediaPlayer_SetLooping_Params
{
<<<<<<< HEAD
	bool*                                              Looping;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               Looping;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
struct UMediaPlayer_SetDesiredPlayerName_Params
{
<<<<<<< HEAD
	struct FName*                                      PlayerName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FName                                       PlayerName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.MediaPlayer.SelectTrack
struct UMediaPlayer_SelectTrack_Params
{
<<<<<<< HEAD
	EMediaPlayerTrack*                                 TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Seek
struct UMediaPlayer_Seek_Params
{
<<<<<<< HEAD
	struct FTimespan*                                  Time;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FTimespan                                   Time;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Rewind
struct UMediaPlayer_Rewind_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Reopen
struct UMediaPlayer_Reopen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Previous
struct UMediaPlayer_Previous_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Play
struct UMediaPlayer_Play_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Pause
struct UMediaPlayer_Pause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenUrl
struct UMediaPlayer_OpenUrl_Params
{
<<<<<<< HEAD
	struct FString*                                    URL;                                                      // (Parm, ZeroConstructor)
=======
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenSource
struct UMediaPlayer_OpenSource_Params
{
<<<<<<< HEAD
	class UMediaSource**                               MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
struct UMediaPlayer_OpenPlaylistIndex_Params
{
<<<<<<< HEAD
	class UMediaPlaylist**                             InPlaylist;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UMediaPlaylist*                              InPlaylist;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenPlaylist
struct UMediaPlayer_OpenPlaylist_Params
{
<<<<<<< HEAD
	class UMediaPlaylist**                             InPlaylist;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UMediaPlaylist*                              InPlaylist;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenFile
struct UMediaPlayer_OpenFile_Params
{
<<<<<<< HEAD
	struct FString*                                    FilePath;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Next
struct UMediaPlayer_Next_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsReady
struct UMediaPlayer_IsReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsPreparing
struct UMediaPlayer_IsPreparing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsPlaying
struct UMediaPlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsPaused
struct UMediaPlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsLooping
struct UMediaPlayer_IsLooping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetUrl
struct UMediaPlayer_GetUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetTrackLanguage
struct UMediaPlayer_GetTrackLanguage_Params
{
<<<<<<< HEAD
	EMediaPlayerTrack*                                 TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetTrackDisplayName
struct UMediaPlayer_GetTrackDisplayName_Params
{
<<<<<<< HEAD
	EMediaPlayerTrack*                                 TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetTime
struct UMediaPlayer_GetTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetSelectedTrack
struct UMediaPlayer_GetSelectedTrack_Params
{
<<<<<<< HEAD
	EMediaPlayerTrack*                                 TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetReverseRates
struct UMediaPlayer_GetReverseRates_Params
{
<<<<<<< HEAD
	bool*                                              Unthinned;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               Unthinned;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FFloatRange                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetRate
struct UMediaPlayer_GetRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetPlayerName
struct UMediaPlayer_GetPlayerName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetNumTracks
struct UMediaPlayer_GetNumTracks_Params
{
<<<<<<< HEAD
	EMediaPlayerTrack*                                 TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetForwardRates
struct UMediaPlayer_GetForwardRates_Params
{
<<<<<<< HEAD
	bool*                                              Unthinned;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               Unthinned;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FFloatRange                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetDuration
struct UMediaPlayer_GetDuration_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
struct UMediaPlayer_GetDesiredPlayerName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Close
struct UMediaPlayer_Close_Params
{
};

// Function MediaAssets.MediaPlayer.CanPlayUrl
struct UMediaPlayer_CanPlayUrl_Params
{
<<<<<<< HEAD
	struct FString*                                    URL;                                                      // (Parm, ZeroConstructor)
=======
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.CanPlaySource
struct UMediaPlayer_CanPlaySource_Params
{
<<<<<<< HEAD
	class UMediaSource**                               MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.CanPause
struct UMediaPlayer_CanPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.RemoveAt
struct UMediaPlaylist_RemoveAt_Params
{
<<<<<<< HEAD
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.MediaPlaylist.Remove
struct UMediaPlaylist_Remove_Params
{
<<<<<<< HEAD
	class UMediaSource**                               MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.MediaPlaylist.Num
struct UMediaPlaylist_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Insert
struct UMediaPlaylist_Insert_Params
{
<<<<<<< HEAD
	class UMediaSource**                               MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.MediaPlaylist.GetRandom
struct UMediaPlaylist_GetRandom_Params
{
	int                                                InOutIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.GetPrevious
struct UMediaPlaylist_GetPrevious_Params
{
	int                                                InOutIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.GetNext
struct UMediaPlaylist_GetNext_Params
{
	int                                                InOutIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Get
struct UMediaPlaylist_Get_Params
{
<<<<<<< HEAD
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UMediaSource*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Add
struct UMediaPlaylist_Add_Params
{
<<<<<<< HEAD
	class UMediaSource**                               MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.FileMediaSource.SetFilePath
struct UFileMediaSource_SetFilePath_Params
{
<<<<<<< HEAD
	struct FString*                                    path;                                                     // (Parm, ZeroConstructor)
=======
	struct FString                                     path;                                                     // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MediaAssets.MediaTexture.GetWidth
struct UMediaTexture_GetWidth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaTexture.GetHeight
struct UMediaTexture_GetHeight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaTexture.GetAspectRatio
struct UMediaTexture_GetAspectRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
