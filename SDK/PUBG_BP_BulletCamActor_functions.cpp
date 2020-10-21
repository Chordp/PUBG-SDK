// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_BulletCamActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BulletCamActor.BP_BulletCamActor_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslWeapon_Trajectory*   NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_BulletCamActor_C::Init(class ATslWeapon_Trajectory* NewParam)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_BulletCamActor.BP_BulletCamActor_C.Init"));

	ABP_BulletCamActor_C_Init_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_BulletCamActor_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript"));

	ABP_BulletCamActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_BulletCamActor_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick"));

	ABP_BulletCamActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_BulletCamActor_C::ExecuteUbergraph_BP_BulletCamActor(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor"));

	ABP_BulletCamActor_C_ExecuteUbergraph_BP_BulletCamActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
