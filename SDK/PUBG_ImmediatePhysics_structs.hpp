#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_AnimGraphRuntime_classes.hpp"
#include "PUBG_CoreUObject_classes.hpp"
#include "PUBG_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImmediatePhysics.AnimNode_RigidBody
// 0x0258 (0x0350 - 0x00F8)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideWorldGravity;                                     // 0x0100(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x010C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWorldGeometry;                                     // 0x010D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bComponentSpaceSimulation;                                // 0x010E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideWorldGravity;                                    // 0x010F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CachedBoundsScale;                                        // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x23C];                                     // 0x0114(0x023C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
