#pragma once

#ifdef MODULE_DLL_BUILD_DLL
#define __MODULE_DLL_EXPORT__ __declspec(dllexport)
#else
#define __MODULE_DLL_EXPORT__ __declspec(dllimport)
#endif

