
#include "PythonManager.hpp"

namespace sqf = intercept::sqf;
namespace client = intercept::client;
namespace python = boost::python;

python::object main_module;
python::object main_namespace;

int __cdecl intercept::api_version() {
	return 1;
}

void __cdecl intercept::pre_init() {

}

void __cdecl intercept::pre_start() {
	sqf::system_chat("Intercept Python was loaded!");
	Py_Initialize();
	main_module = python::import("__main__");
	main_namespace = main_module.attr("__dict__");
	main_namespace["systemChat"] = &sqf::system_chat;
	python::exec("systemChat('Hello from Pythonland')", main_namespace);
}

void __cdecl intercept::on_frame() {
	sqf::system_chat("Hello from c++");
}

// Normal Windows DLL junk...
BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}