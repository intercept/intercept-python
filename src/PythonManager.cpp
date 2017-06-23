
#include "PythonManager.hpp"

namespace sqf = intercept::sqf;
namespace client = intercept::client;
namespace python = boost::python;

python::object main_module;
python::object main_namespace;

void __cdecl intercept::pre_init() {

}

void __cdecl intercept::pre_start() {
	sqf::system_chat("Intercept Python was loaded!");
	Py_Initialize();
	main_module = python::import("__main__");
	main_namespace = main_module.attr("__dict__");
	main_namespace["systemChat"] = &sqf::system_chat;
	
}

void __cdecl intercept::on_frame() {
	python::exec("systemChat('Hello from Pythonland')", main_namespace);
}