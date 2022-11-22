#pragma once

#ifndef FIRSTDLL_API
#define FIRSTDLL_API extern "C" __declspec(dllimport)   
#endif

FIRSTDLL_API int MathDll();
