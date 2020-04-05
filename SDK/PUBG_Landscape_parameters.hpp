#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Landscape_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Landscape.LandscapeProxy.EditorApplySpline
struct ALandscapeProxy_EditorApplySpline_Params
{
<<<<<<< HEAD
	class USplineComponent**                           InSplineComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             StartWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartSideFalloff;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndSideFalloff;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartRoll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndRoll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumSubdivisions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRaiseHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLowerHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ULandscapeLayerInfoObject**                  PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USplineComponent*                            InSplineComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartSideFalloff;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndSideFalloff;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartRoll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndRoll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSubdivisions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRaiseHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLowerHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ULandscapeLayerInfoObject*                   PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscapeProxy_ChangeLODDistanceFactor_Params
{
<<<<<<< HEAD
	float*                                             InLODDistanceFactor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              InLODDistanceFactor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
