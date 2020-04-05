#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PrefabAsset_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrefabAsset.PrefabActor.SetPrefab
struct APrefabActor_SetPrefab_Params
{
<<<<<<< HEAD
	class UPrefabAsset**                               NewPrefab;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceRevertEvenDisconnected;                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UPrefabAsset*                                NewPrefab;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceRevertEvenDisconnected;                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PrefabAsset.PrefabActor.SetMobility
struct APrefabActor_SetMobility_Params
{
<<<<<<< HEAD
	TEnumAsByte<EComponentMobility>*                   InMobility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	TEnumAsByte<EComponentMobility>                    InMobility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PrefabAsset.PrefabActor.GetPrefab
struct APrefabActor_GetPrefab_Params
{
	class UPrefabAsset*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrefabAsset.PrefabActor.DestroyPrefabActor
struct APrefabActor_DestroyPrefabActor_Params
{
<<<<<<< HEAD
	bool*                                              bDestroyAttachedChildren;                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bDestroyAttachedChildren;                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
