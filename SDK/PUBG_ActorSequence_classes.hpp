#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ActorSequence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ActorSequence.ActorSequence
// 0x0030 (0x0360 - 0x0330)
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0338(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ActorSequence.ActorSequence"));

		return ptr;
	}

};


// Class ActorSequence.ActorSequenceComponent
// 0x0040 (0x0240 - 0x0200)
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0200(0x0028) (Edit)
	class UActorSequence*                              Sequence;                                                 // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorSequencePlayer*                        SequencePlayer;                                           // 0x0230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoPlay;                                                // 0x0238(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0239(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ActorSequence.ActorSequenceComponent"));

		return ptr;
	}

};


// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x0700 - 0x0700)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ActorSequence.ActorSequencePlayer"));

		return ptr;
	}


	void STATIC_Stop();
	void STATIC_StartPlayingNextTick();
	void STATIC_SetPlayRate(float PlayRate);
	void STATIC_SetPlaybackRange(float NewStartTime, float NewEndTime);
	void STATIC_SetPlaybackPosition(float NewPlaybackPosition);
	void STATIC_PlayReverse();
	void STATIC_PlayLooping(int NumLoops);
	void STATIC_Play();
	void STATIC_Pause();
	bool STATIC_IsPlaying();
	float STATIC_GetPlayRate();
	float STATIC_GetPlaybackStart();
	float STATIC_GetPlaybackPosition();
	float STATIC_GetPlaybackEnd();
	float STATIC_GetLength();
	TArray<class UObject*> STATIC_GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void STATIC_ChangePlaybackDirection();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
