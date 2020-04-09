#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MediaAssets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MediaAssets.MediaOverlays
// 0x0090 (0x00C0 - 0x0030)
class UMediaOverlays : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaOverlays"));

		return ptr;
	}

};


// Class MediaAssets.MediaPlayer
// 0x0140 (0x0170 - 0x0030)
class UMediaPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEndReached;                                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaClosed;                                            // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                            // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpenFailed;                                        // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackResumed;                                        // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackSuspended;                                      // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               PlayOnOpen;                                               // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	unsigned char                                      Shuffle : 1;                                              // 0x00AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      Loop : 1;                                                 // 0x00AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	class UMediaOverlays*                              Overlays;                                                 // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMediaPlaylist*                              PlayList;                                                 // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PlaylistIndex;                                            // 0x00C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	class UMediaSoundWave*                             SoundWave;                                                // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMediaTexture*                               VideoTexture;                                             // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x98];                                      // 0x00D8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaPlayer"));

		return ptr;
	}


	bool STATIC_SupportsSeeking();
	bool STATIC_SupportsScrubbing();
	bool STATIC_SupportsRate(float Rate, bool Unthinned);
	void STATIC_SetVideoTexture(class UMediaTexture* NewTexture);
	void STATIC_SetSoundWave(class UMediaSoundWave* NewSoundWave);
	bool STATIC_SetRate(float Rate);
	void STATIC_SetOverlays(class UMediaOverlays* NewOverlays);
	bool STATIC_SetLooping(bool Looping);
	void STATIC_SetDesiredPlayerName(const struct FName& PlayerName);
	bool STATIC_SelectTrack(EMediaPlayerTrack TrackType, int TrackIndex);
	bool STATIC_Seek(const struct FTimespan& Time);
	bool STATIC_Rewind();
	bool STATIC_Reopen();
	bool STATIC_Previous();
	bool STATIC_Play();
	bool STATIC_Pause();
	bool STATIC_OpenUrl(const struct FString& URL);
	bool STATIC_OpenSource(class UMediaSource* MediaSource);
	bool STATIC_OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index);
	bool STATIC_OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool STATIC_OpenFile(const struct FString& FilePath);
	bool STATIC_Next();
	bool STATIC_IsReady();
	bool STATIC_IsPreparing();
	bool STATIC_IsPlaying();
	bool STATIC_IsPaused();
	bool STATIC_IsLooping();
	struct FString STATIC_GetUrl();
	struct FString STATIC_GetTrackLanguage(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText STATIC_GetTrackDisplayName(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FTimespan STATIC_GetTime();
	int STATIC_GetSelectedTrack(EMediaPlayerTrack TrackType);
	struct FFloatRange STATIC_GetReverseRates(bool Unthinned);
	float STATIC_GetRate();
	struct FName STATIC_GetPlayerName();
	int STATIC_GetNumTracks(EMediaPlayerTrack TrackType);
	struct FFloatRange STATIC_GetForwardRates(bool Unthinned);
	struct FTimespan STATIC_GetDuration();
	struct FName STATIC_GetDesiredPlayerName();
	void STATIC_Close();
	bool STATIC_CanPlayUrl(const struct FString& URL);
	bool STATIC_CanPlaySource(class UMediaSource* MediaSource);
	bool STATIC_CanPause();
};


// Class MediaAssets.MediaPlaylist
// 0x0010 (0x0040 - 0x0030)
class UMediaPlaylist : public UObject
{
public:
	TArray<class UMediaSource*>                        Items;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaPlaylist"));

		return ptr;
	}


	void STATIC_RemoveAt(int Index);
	void STATIC_Remove(class UMediaSource* MediaSource);
	int STATIC_Num();
	void STATIC_Insert(class UMediaSource* MediaSource, int Index);
	class UMediaSource* STATIC_GetRandom(int* InOutIndex);
	class UMediaSource* STATIC_GetPrevious(int* InOutIndex);
	class UMediaSource* STATIC_GetNext(int* InOutIndex);
	class UMediaSource* STATIC_Get(int Index);
	void STATIC_Add(class UMediaSource* MediaSource);
};


// Class MediaAssets.MediaSoundWave
// 0x00D8 (0x0360 - 0x0288)
class UMediaSoundWave : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0288(0x0008) MISSED OFFSET
	int                                                AudioTrackIndex;                                          // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC0];                                      // 0x02A0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaSoundWave"));

		return ptr;
	}

};


// Class MediaAssets.MediaSource
// 0x0008 (0x0038 - 0x0030)
class UMediaSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaSource"));

		return ptr;
	}

};


// Class MediaAssets.BaseMediaSource
// 0x0008 (0x0040 - 0x0038)
class UBaseMediaSource : public UMediaSource
{
public:
	struct FName                                       PlayerName;                                               // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.BaseMediaSource"));

		return ptr;
	}

};


// Class MediaAssets.FileMediaSource
// 0x0018 (0x0058 - 0x0040)
class UFileMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     FilePath;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PrecacheFile;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.FileMediaSource"));

		return ptr;
	}


	void STATIC_SetFilePath(const struct FString& path);
};


// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0050 - 0x0040)
class UStreamMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     StreamUrl;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.StreamMediaSource"));

		return ptr;
	}

};


// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0040 - 0x0038)
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.PlatformMediaSource"));

		return ptr;
	}

};


// Class MediaAssets.MediaTexture
// 0x00E0 (0x01B0 - 0x00D0)
class UMediaTexture : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	struct FLinearColor                                ClearColor;                                               // 0x00DC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x00F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VideoTrackIndex;                                          // 0x00F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB4];                                      // 0x00FC(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaTexture"));

		return ptr;
	}


	int STATIC_GetWidth();
	int STATIC_GetHeight();
	float STATIC_GetAspectRatio();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
