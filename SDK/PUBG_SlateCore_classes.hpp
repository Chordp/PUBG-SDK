#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SlateCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SlateCore.SlateWidgetStyleContainerBase"));

		return ptr;
	}

};


// Class SlateCore.FontBulkData
// 0x00A0 (0x00C8 - 0x0028)
class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SlateCore.FontBulkData"));

		return ptr;
	}

};


// Class SlateCore.FontFaceInterface
// 0x0000 (0x0028 - 0x0028)
class UFontFaceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SlateCore.FontFaceInterface"));

		return ptr;
	}

};


// Class SlateCore.FontProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UFontProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SlateCore.FontProviderInterface"));

		return ptr;
	}

};


// Class SlateCore.SlateTypes
// 0x0000 (0x0028 - 0x0028)
class USlateTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SlateCore.SlateTypes"));

		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (0x0028 - 0x0028)
class USlateWidgetStyleContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SlateCore.SlateWidgetStyleContainerInterface"));

		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                              // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SlateCore.SlateWidgetStyleAsset"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
