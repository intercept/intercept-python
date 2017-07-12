#pragma once
#include <intercept.hpp>
#include <boost/python.hpp>

using namespace intercept;
using namespace intercept::sqf;
using namespace intercept::types;

BOOST_PYTHON_MODULE(__sqf_types)
{
	boost::python::class_<game_data>("GameData");
	boost::python::class_<object>("Object");
}

inline void addSQFTypeModules() {
	PyImport_AppendInittab("__sqf_types", &PyInit___sqf_types);
}