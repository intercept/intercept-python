
#include "PythonManager.hpp"

namespace sqf = intercept::sqf;
namespace client = intercept::client;
namespace python = boost::python;

void __cdecl intercept::pre_init() {

}

void __cdecl intercept::pre_start() {
	Py_Initialize();
	python::object main_module = python::import("__main__");
	python::object main_namespace = main_module.attr("__dict__");

	main_namespace["systemChat"] = &sqf::system_chat;
	python::exec("systemChat('Hello from Pythonland')", main_namespace);
}