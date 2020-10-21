// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ActiveRagdollActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_ActiveRagdollActor_C::SetServerPos()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos"));

	ABP_ActiveRagdollActor_C_SetServerPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MeshRef                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InVelocity                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_ActiveRagdollActor_C::InitClient(class USkeletalMeshComponent* MeshRef, const struct FVector& InVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient"));

	ABP_ActiveRagdollActor_C_InitClient_Params params;
	params.MeshRef = MeshRef;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_ActiveRagdollActor_C::InitServer(const struct FVector& InVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer"));

	ABP_ActiveRagdollActor_C_InitServer_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_ActiveRagdollActor_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript"));

	ABP_ActiveRagdollActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_ActiveRagdollActor_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay"));

	ABP_ActiveRagdollActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_ActiveRagdollActor_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick"));

	ABP_ActiveRagdollActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_ActiveRagdollActor_C::ExecuteUbergraph_BP_ActiveRagdollActor(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor"));

	ABP_ActiveRagdollActor_C_ExecuteUbergraph_BP_ActiveRagdollActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
