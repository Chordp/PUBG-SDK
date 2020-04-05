#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CoreUObject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoreUObject.Object
// 0x0028
class UObject
{
public:
	static FUObjectArray*                              GObjects;                                                 // 0x0000(0x0000)
	void*                                              Vtable;                                                   // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            ObjectFlags;                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static inline TUObjectArray& GetGlobalObjects()
	{
		return GObjects->ObjObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Object"));

		return ptr;
	}


<<<<<<< HEAD
	void ExecuteUbergraph(int* EntryPoint);
=======
	void ExecuteUbergraph(int EntryPoint);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};


// Class CoreUObject.Interface
// 0x0000 (0x0028 - 0x0028)
class UInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Interface"));

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.Package
// 0x0130 (0x0158 - 0x0028)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0028(0x0130) MISSED OFFSET
=======
// Class CoreUObject.Field
// 0x0008 (0x0030 - 0x0028)
class UField : public UObject
{
public:
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Package"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Field"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.Field
// 0x0008 (0x0030 - 0x0028)
class UField : public UObject
{
public:
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
=======
// Class CoreUObject.Property
// 0x0048 (0x0078 - 0x0030)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Field"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Property"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.Struct
// 0x00B0 (0x00E0 - 0x0030)
class UStruct : public UField
{
public:
	class UStruct*                                     SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	char                                               pad_0048[64];                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
=======
// Class CoreUObject.MapProperty
// 0x0038 (0x00B0 - 0x0078)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Struct"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.MapProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.Class
// 0x01D8 (0x02B8 - 0x00E0)
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x00E0(0x01D8) MISSED OFFSET

	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}
=======
// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (0x0080 - 0x0078)
class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Class"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastDelegateProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.LinkerPlaceholderClass
// 0x01A0 (0x0458 - 0x02B8)
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x02B8(0x01A0) MISSED OFFSET
=======
// Class CoreUObject.NameProperty
// 0x0000 (0x0078 - 0x0078)
class UNameProperty : public UProperty
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderClass"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.NameProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.LinkerPlaceholderExportObject
// 0x00B0 (0x00D8 - 0x0028)
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET
=======
// Class CoreUObject.NumericProperty
// 0x0000 (0x0078 - 0x0078)
class UNumericProperty : public UProperty
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderExportObject"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.NumericProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.Function
// 0x0038 (0x0118 - 0x00E0)
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int8_t                                             NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	char                                               pad_008F[1];                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCId;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCResponseId;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
=======
// Class CoreUObject.ObjectPropertyBase
// 0x0008 (0x0080 - 0x0078)
class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Function"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectPropertyBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.LinkerPlaceholderFunction
// 0x01A0 (0x02B8 - 0x0118)
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0118(0x01A0) MISSED OFFSET
=======
// Class CoreUObject.ObjectProperty
// 0x0000 (0x0080 - 0x0080)
class UObjectProperty : public UObjectPropertyBase
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderFunction"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.MetaData
// 0x00A0 (0x00C8 - 0x0028)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
=======
// Class CoreUObject.EncryptedObjectProperty
// 0x0000 (0x0080 - 0x0080)
class UEncryptedObjectProperty : public UObjectPropertyBase
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.MetaData"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.EncryptedObjectProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.GCObjectReferencer
// 0x0038 (0x0060 - 0x0028)
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET
=======
// Class CoreUObject.SetProperty
// 0x0028 (0x00A0 - 0x0078)
class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.GCObjectReferencer"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.SetProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.TextBuffer
// 0x0028 (0x0050 - 0x0028)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
=======
// Class CoreUObject.StrProperty
// 0x0000 (0x0078 - 0x0078)
class UStrProperty : public UProperty
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.TextBuffer"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.StrProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.ScriptStruct
// 0x0010 (0x00F0 - 0x00E0)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
=======
// Class CoreUObject.StructProperty
// 0x0008 (0x0080 - 0x0078)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ScriptStruct"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.StructProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.DelegateFunction
// 0x0000 (0x0118 - 0x0118)
class UDelegateFunction : public UFunction
=======
// Class CoreUObject.UInt16Property
// 0x0000 (0x0078 - 0x0078)
class UUInt16Property : public UNumericProperty
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.DelegateFunction"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt16Property"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.DynamicClass
// 0x0068 (0x0320 - 0x02B8)
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02B8(0x0068) MISSED OFFSET
=======
// Class CoreUObject.UInt32Property
// 0x0000 (0x0078 - 0x0078)
class UUInt32Property : public UNumericProperty
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.DynamicClass"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt32Property"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.PackageMap
// 0x00B8 (0x00E0 - 0x0028)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET
=======
// Class CoreUObject.UInt64Property
// 0x0000 (0x0078 - 0x0078)
class UUInt64Property : public UNumericProperty
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.PackageMap"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt64Property"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.Enum
// 0x0040 (0x0070 - 0x0030)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
=======
// Class CoreUObject.WeakObjectProperty
// 0x0000 (0x0080 - 0x0080)
class UWeakObjectProperty : public UObjectPropertyBase
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Enum"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.WeakObjectProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.Property
// 0x0048 (0x0078 - 0x0030)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET
=======
// Class CoreUObject.Package
// 0x0130 (0x0158 - 0x0028)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0028(0x0130) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Property"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Package"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.MapProperty
// 0x0038 (0x00B0 - 0x0078)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET
=======
// Class CoreUObject.Struct
// 0x00B0 (0x00E0 - 0x0030)
class UStruct : public UField
{
public:
	class UStruct*                                     SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	char                                               pad_0048[64];                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.MapProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Struct"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (0x0080 - 0x0078)
class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
=======
// Class CoreUObject.Class
// 0x01D0 (0x02B0 - 0x00E0)
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x00E0(0x01D0) MISSED OFFSET

	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastDelegateProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Class"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.NameProperty
// 0x0000 (0x0078 - 0x0078)
class UNameProperty : public UProperty
=======
// Class CoreUObject.TextProperty
// 0x0000 (0x0078 - 0x0078)
class UTextProperty : public UProperty
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.NameProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.TextProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.NumericProperty
// 0x0000 (0x0078 - 0x0078)
class UNumericProperty : public UProperty
{
public:
=======
// Class CoreUObject.Enum
// 0x0040 (0x0070 - 0x0030)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.NumericProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Enum"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.ObjectPropertyBase
// 0x0008 (0x0080 - 0x0078)
class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
=======
// Class CoreUObject.ScriptStruct
// 0x0010 (0x00F0 - 0x00E0)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectPropertyBase"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ScriptStruct"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.ObjectProperty
// 0x0000 (0x0080 - 0x0080)
class UObjectProperty : public UObjectPropertyBase
{
public:
=======
// Class CoreUObject.ObjectRedirector
// 0x0008 (0x0030 - 0x0028)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectRedirector"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.EncryptedObjectProperty
// 0x0000 (0x0080 - 0x0080)
class UEncryptedObjectProperty : public UObjectPropertyBase
{
public:
=======
// Class CoreUObject.ArrayProperty
// 0x0008 (0x0080 - 0x0078)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.EncryptedObjectProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ArrayProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.SetProperty
// 0x0028 (0x00A0 - 0x0078)
class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET
=======
// Class CoreUObject.AssetObjectProperty
// 0x0000 (0x0080 - 0x0080)
class UAssetObjectProperty : public UObjectPropertyBase
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.SetProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.AssetObjectProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.StrProperty
// 0x0000 (0x0078 - 0x0078)
class UStrProperty : public UProperty
{
public:
=======
// Class CoreUObject.AssetClassProperty
// 0x0008 (0x0088 - 0x0080)
class UAssetClassProperty : public UAssetObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.StrProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.AssetClassProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.StructProperty
// 0x0008 (0x0080 - 0x0078)
class UStructProperty : public UProperty
=======
// Class CoreUObject.BoolProperty
// 0x0008 (0x0080 - 0x0078)
class UBoolProperty : public UProperty
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.StructProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.BoolProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.UInt16Property
// 0x0000 (0x0078 - 0x0078)
class UUInt16Property : public UNumericProperty
{
public:
=======
// Class CoreUObject.ByteProperty
// 0x0008 (0x0080 - 0x0078)
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt16Property"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ByteProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.UInt32Property
// 0x0000 (0x0078 - 0x0078)
class UUInt32Property : public UNumericProperty
{
public:
=======
// Class CoreUObject.ClassProperty
// 0x0008 (0x0088 - 0x0080)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt32Property"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ClassProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.UInt64Property
// 0x0000 (0x0078 - 0x0078)
class UUInt64Property : public UNumericProperty
{
public:
=======
// Class CoreUObject.DelegateProperty
// 0x0008 (0x0080 - 0x0078)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt64Property"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.DelegateProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.WeakObjectProperty
// 0x0000 (0x0080 - 0x0080)
class UWeakObjectProperty : public UObjectPropertyBase
=======
// Class CoreUObject.DoubleProperty
// 0x0000 (0x0078 - 0x0078)
class UDoubleProperty : public UNumericProperty
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.WeakObjectProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.DoubleProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.EnumProperty
// 0x0010 (0x0088 - 0x0078)
class UEnumProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
=======
// Class CoreUObject.FloatProperty
// 0x0000 (0x0078 - 0x0078)
class UFloatProperty : public UNumericProperty
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.EnumProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.FloatProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.ObjectRedirector
// 0x0008 (0x0030 - 0x0028)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
=======
// Class CoreUObject.IntProperty
// 0x0000 (0x0078 - 0x0078)
class UIntProperty : public UNumericProperty
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectRedirector"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.IntProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.ArrayProperty
// 0x0008 (0x0080 - 0x0078)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
=======
// Class CoreUObject.Int16Property
// 0x0000 (0x0078 - 0x0078)
class UInt16Property : public UNumericProperty
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ArrayProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Int16Property"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.AssetObjectProperty
// 0x0000 (0x0080 - 0x0080)
class UAssetObjectProperty : public UObjectPropertyBase
=======
// Class CoreUObject.Int64Property
// 0x0000 (0x0078 - 0x0078)
class UInt64Property : public UNumericProperty
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.AssetObjectProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Int64Property"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.AssetClassProperty
// 0x0008 (0x0088 - 0x0080)
class UAssetClassProperty : public UAssetObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
=======
// Class CoreUObject.Int8Property
// 0x0000 (0x0078 - 0x0078)
class UInt8Property : public UNumericProperty
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.AssetClassProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Int8Property"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.BoolProperty
// 0x0008 (0x0080 - 0x0078)
class UBoolProperty : public UProperty
=======
// Class CoreUObject.InterfaceProperty
// 0x0008 (0x0080 - 0x0078)
class UInterfaceProperty : public UProperty
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.BoolProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.InterfaceProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.ByteProperty
// 0x0008 (0x0080 - 0x0078)
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
=======
// Class CoreUObject.LazyObjectProperty
// 0x0000 (0x0080 - 0x0080)
class ULazyObjectProperty : public UObjectPropertyBase
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ByteProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.LazyObjectProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.ClassProperty
// 0x0008 (0x0088 - 0x0080)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
=======
// Class CoreUObject.LinkerPlaceholderClass
// 0x01A0 (0x0450 - 0x02B0)
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x02B0(0x01A0) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.ClassProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderClass"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.DelegateProperty
// 0x0008 (0x0080 - 0x0078)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
=======
// Class CoreUObject.LinkerPlaceholderExportObject
// 0x00B0 (0x00D8 - 0x0028)
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.DelegateProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderExportObject"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.DoubleProperty
// 0x0000 (0x0078 - 0x0078)
class UDoubleProperty : public UNumericProperty
{
public:
=======
// Class CoreUObject.Function
// 0x0040 (0x0120 - 0x00E0)
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int8_t                                             NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	char                                               pad_008F[1];                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCId;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCResponseId;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.DoubleProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Function"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.FloatProperty
// 0x0000 (0x0078 - 0x0078)
class UFloatProperty : public UNumericProperty
{
public:
=======
// Class CoreUObject.LinkerPlaceholderFunction
// 0x01A0 (0x02C0 - 0x0120)
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0120(0x01A0) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.FloatProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderFunction"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.IntProperty
// 0x0000 (0x0078 - 0x0078)
class UIntProperty : public UNumericProperty
{
public:
=======
// Class CoreUObject.MetaData
// 0x00A0 (0x00C8 - 0x0028)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.IntProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.MetaData"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.Int16Property
// 0x0000 (0x0078 - 0x0078)
class UInt16Property : public UNumericProperty
{
public:
=======
// Class CoreUObject.TextBuffer
// 0x0028 (0x0050 - 0x0028)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Int16Property"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.TextBuffer"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.Int64Property
// 0x0000 (0x0078 - 0x0078)
class UInt64Property : public UNumericProperty
=======
// Class CoreUObject.DelegateFunction
// 0x0000 (0x0120 - 0x0120)
class UDelegateFunction : public UFunction
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Int64Property"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.DelegateFunction"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.Int8Property
// 0x0000 (0x0078 - 0x0078)
class UInt8Property : public UNumericProperty
{
public:
=======
// Class CoreUObject.DynamicClass
// 0x0068 (0x0318 - 0x02B0)
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02B0(0x0068) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.Int8Property"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.DynamicClass"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.InterfaceProperty
// 0x0008 (0x0080 - 0x0078)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
=======
// Class CoreUObject.PackageMap
// 0x00B8 (0x00E0 - 0x0028)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.InterfaceProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.PackageMap"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.LazyObjectProperty
// 0x0000 (0x0080 - 0x0080)
class ULazyObjectProperty : public UObjectPropertyBase
{
public:
=======
// Class CoreUObject.GCObjectReferencer
// 0x0038 (0x0060 - 0x0028)
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.LazyObjectProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.GCObjectReferencer"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class CoreUObject.TextProperty
// 0x0000 (0x0078 - 0x0078)
class UTextProperty : public UProperty
{
public:
=======
// Class CoreUObject.EnumProperty
// 0x0010 (0x0088 - 0x0078)
class UEnumProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class CoreUObject.TextProperty"));
=======
			ptr = UObject::FindClass(_xor_("Class CoreUObject.EnumProperty"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
