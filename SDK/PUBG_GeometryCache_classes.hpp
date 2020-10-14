#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GeometryCache_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GeometryCache.GeometryCache
// 0x0038 (0x0078 - 0x0040)
class UGeometryCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                   // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GeometryCache.GeometryCache"));

		return ptr;
	}

};


// Class GeometryCache.GeometryCacheActor
// 0x0008 (0x0408 - 0x0400)
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                   // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GeometryCache.GeometryCacheActor"));

		return ptr;
	}


	class UGeometryCacheComponent* GetGeometryCacheComponent();
};


// Class GeometryCache.GeometryCacheComponent
// 0x0070 (0x0B40 - 0x0AD0)
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                              GeometryCache;                                            // 0x0AD0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRunning;                                                 // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0AD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0ADA(0x0002) MISSED OFFSET
	float                                              StartTimeOffset;                                          // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumTracks;                                                // 0x0AE4(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0AE8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x0AEC(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GeometryCache.GeometryCacheComponent"));

		return ptr;
	}


	void Stop();
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
};


// Class GeometryCache.GeometryCacheTrack
// 0x0028 (0x0068 - 0x0040)
class UGeometryCacheTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GeometryCache.GeometryCacheTrack"));

		return ptr;
	}

};


// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0028 (0x0090 - 0x0068)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32_t                                           NumMeshSamples;                                           // 0x0068(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x006C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation"));

		return ptr;
	}


	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};


// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x0050 (0x00B8 - 0x0068)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0068(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GeometryCache.GeometryCacheTrack_TransformAnimation"));

		return ptr;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};


// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x0050 (0x00B8 - 0x0068)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0068(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation"));

		return ptr;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
