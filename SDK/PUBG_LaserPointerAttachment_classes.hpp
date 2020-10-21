#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LaserPointerAttachment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LaserPointerAttachment.LaserPointerAttachment_C
// 0x0000 (0x0C50 - 0x0C50)
class ULaserPointerAttachment_C : public UTslLaserPointerAttachment
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass LaserPointerAttachment.LaserPointerAttachment_C"));

		return ptr;
	}


	void OnSpectatingChanged(bool bIsSpectating);
	void ActivateLaser();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
