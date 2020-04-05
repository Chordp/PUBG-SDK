// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_EasyAntiCheatCommon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<unsigned char>*         Message                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF71C5C1160              		 offset:47f1160                       

void UEasyAntiCheatNetComponent::ServerMessage(TArray<unsigned char>* Message)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage"));

	UEasyAntiCheatNetComponent_ServerMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<unsigned char>*         Message                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF71C5C10B0              		 offset:47f10b0                       

void UEasyAntiCheatNetComponent::ClientMessage(TArray<unsigned char>* Message)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage"));

	UEasyAntiCheatNetComponent_ClientMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
