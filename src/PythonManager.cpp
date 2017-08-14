
#include "PythonManager.hpp"

#include <iostream>
#include <fstream>


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
	addSQFModules();
	addSQFTypeModules();
	Py_Initialize();
	main_module = python::import("__main__");
	main_namespace = main_module.attr("__dict__");

	auto searcher = intercept::search::python_searcher();
	main_namespace["__ModFolders__"] = python::toPythonList(searcher.active_mod_folder_list); // Not sure about this one



	try
	{
		python::exec("import sys\n"
			"import os\n"
			"import os.path\n"
			"for m in __ModFolders__:\n"
			"\tpath = os.path.join(m, 'python')\n"
			"\tif os.path.isdir(path):\n"
			"\t\tsys.path.append(path)", main_namespace);

		// Getting the entry points here
		game_value entry_return;
		auto entriePointList = python::list();
		__SQF(
			private _cfgClasses;
			private _result = [];
			_cfgClasses = "true" configClasses (configfile >> "InterceptPython");
			{
				_result append [getText(_x >> "EntryPoint")];
			} forEach _cfgClasses;
			_result
		).capture("", entry_return);
		entry_return.to_array().for_each([&entriePointList](game_value v)
		{
			entriePointList.append(static_cast<std::string>(v));
		});
		main_namespace["__EntriePoints__"] = entriePointList;

		python::exec("import sqf.chat\n"
			"import runpy\n"
			"sqf.chat.systemChat('Python initilized!')\n"
			"sqf.chat.systemChat('Running module entries...')\n"
			"for e in __EntriePoints__:\n"
			"\trunpy.run_module(e)", main_namespace);
	}
	catch (python::error_already_set &) {
		PyErr_Print();
	}
}

void __cdecl intercept::on_frame() {
	// sqf::system_chat("Hello from c++");
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