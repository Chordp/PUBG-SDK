#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct PoseCharacterAttachments.PoseCharacterAttachments
// 0x0010
struct FPoseCharacterAttachments
{
	class USceneComponent*                             Component_2_B4D8E7E24EE39E5CD0B044B226EF8D0C;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName_5_B4FDAA2D4655317EE5253F8A009EC469;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
