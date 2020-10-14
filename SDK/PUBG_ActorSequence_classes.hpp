#pragma once

// PUBG (8.3.5.39) SDK

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
// 0x0030 (0x0370 - 0x0340)
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0348(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ActorSequence.ActorSequence"));

		return ptr;
	}

};


// Class ActorSequence.ActorSequenceComponent
// 0x0040 (0x0250 - 0x0210)
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0210(0x0028) (Edit)
	class UActorSequence*                              Sequence;                                                 // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorSequencePlayer*                        SequencePlayer;                                           // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoPlay;                                                // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ActorSequence.ActorSequenceComponent"));

		return ptr;
	}

};


// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x0710 - 0x0710)
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

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
