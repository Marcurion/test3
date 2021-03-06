﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t1362;
// System.Object
struct Object_t;

// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern "C" void UnhandledExceptionEventArgs__ctor_m8225 (UnhandledExceptionEventArgs_t1362 * __this, Object_t * ___exception, bool ___isTerminating, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C" Object_t * UnhandledExceptionEventArgs_get_ExceptionObject_m8226 (UnhandledExceptionEventArgs_t1362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern "C" bool UnhandledExceptionEventArgs_get_IsTerminating_m8227 (UnhandledExceptionEventArgs_t1362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
