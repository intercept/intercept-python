#pragma once

#include <boost/python.hpp>
#include <intercept.hpp>

namespace boost::python
{
	template <class T>
	boost::python::list toPythonList(std::vector<T> vector) {
		typename std::vector<T>::iterator iter;
		boost::python::list list;
		for (iter = vector.begin(); iter != vector.end(); ++iter) {
			list.append(*iter);
		}
		return list;
	}
}