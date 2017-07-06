#pragma once

#include <intercept.hpp>
#include <boost/python.hpp>
#include "SQFModules.hpp"

int __cdecl intercept::api_version();
void __cdecl intercept::pre_init();
void __cdecl intercept::pre_start();

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
);