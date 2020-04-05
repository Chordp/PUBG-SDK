#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AndroidPermission_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
struct UAndroidPermissionFunctionLibrary_CheckPermission_Params
{
<<<<<<< HEAD
	struct FString*                                    permission;                                               // (Parm, ZeroConstructor)
=======
	struct FString                                     permission;                                               // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
struct UAndroidPermissionFunctionLibrary_AcquirePermissions_Params
{
<<<<<<< HEAD
	TArray<struct FString>*                            Permissions;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	TArray<struct FString>                             Permissions;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UAndroidPermissionCallbackProxy*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
