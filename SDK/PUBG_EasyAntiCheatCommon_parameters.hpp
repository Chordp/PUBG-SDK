#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_EasyAntiCheatCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
struct UEasyAntiCheatNetComponent_ServerMessage_Params
{
<<<<<<< HEAD
	TArray<unsigned char>*                             Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
=======
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
struct UEasyAntiCheatNetComponent_ClientMessage_Params
{
<<<<<<< HEAD
	TArray<unsigned char>*                             Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
=======
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
