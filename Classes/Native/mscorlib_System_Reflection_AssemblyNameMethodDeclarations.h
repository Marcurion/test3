﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.AssemblyName
struct AssemblyName_t999;
// System.String
struct String_t;
// System.Version
struct Version_t422;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t315;
// System.Byte[]
struct ByteU5BU5D_t108;
// System.Object
struct Object_t;
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AssemblyName::.ctor()
extern "C" void AssemblyName__ctor_m5841 (AssemblyName_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName__ctor_m5842 (AssemblyName_t999 * __this, SerializationInfo_t315 * ___si, StreamingContext_t316  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
extern "C" String_t* AssemblyName_get_Name_m5843 (AssemblyName_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C" int32_t AssemblyName_get_Flags_m5844 (AssemblyName_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C" String_t* AssemblyName_get_FullName_m5845 (AssemblyName_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C" Version_t422 * AssemblyName_get_Version_m5846 (AssemblyName_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C" void AssemblyName_set_Version_m5847 (AssemblyName_t999 * __this, Version_t422 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
extern "C" String_t* AssemblyName_ToString_m5848 (AssemblyName_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C" bool AssemblyName_get_IsPublicKeyValid_m5849 (AssemblyName_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern "C" ByteU5BU5D_t108* AssemblyName_InternalGetPublicKeyToken_m5850 (AssemblyName_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern "C" ByteU5BU5D_t108* AssemblyName_ComputePublicKeyToken_m5851 (AssemblyName_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C" void AssemblyName_SetPublicKey_m5852 (AssemblyName_t999 * __this, ByteU5BU5D_t108* ___publicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C" void AssemblyName_SetPublicKeyToken_m5853 (AssemblyName_t999 * __this, ByteU5BU5D_t108* ___publicKeyToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName_GetObjectData_m5854 (AssemblyName_t999 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern "C" void AssemblyName_OnDeserialization_m5855 (AssemblyName_t999 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
