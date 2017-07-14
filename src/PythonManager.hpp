#pragma once

#include <intercept.hpp>
#include <boost/python.hpp>
#include "boostHelper.hpp"
#include "SQFModules.hpp"
#include "SQFTypes.hpp"
#include "search.hpp"

int __cdecl intercept::api_version();
void __cdecl intercept::pre_init();
void __cdecl intercept::pre_start();

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
);