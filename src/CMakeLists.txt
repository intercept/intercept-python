cmake_minimum_required (VERSION 3.7)

set(PLUGIN_NAME InterceptPython)

project(${PLUGIN_NAME})

# Just for debug purpose
set(INTERCEPT_PATH D:/Daten/Programmieren/Arma/intercept/)
set(PYTHON_PATH D:/Programme/Tools/Python_x64/)
set(BOOST_PATH D:/Programme/Tools/Boost_raw)
set(PYTHON_VERSION 36)

set(INTERCEPT_LIB_PATH ${INTERCEPT_PATH}/build/win64/intercept_client/Debug/intercept_client.lib)
set(BOOST_LIB_PATH ${BOOST_PATH}/stage/lib/boost_python-vc141-mt-1_64.lib)
set(PYTHON_LIB_PATH ${PYTHON_PATH}/libs/python${PYTHON_VERSION}.lib)

if("${CMAKE_GENERATOR}" MATCHES "Visual Studio 15 2017 Win64")
	set( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /std:c++latest" )
	set( USE_64BIT_BUILD ON)
elseif("${CMAKE_GENERATOR}" MATCHES "Visual Studio 15 2017")
	set( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /std:c++latest" )
elseif("${CMAKE_CXX_COMPILER_ID}" MATCHES "MSVC")
	message(FATAL_ERROR "ERROR: You need a C++17 compatible compiler")
endif()

if(CMAKE_COMPILER_IS_GNUCXX)
	# This target defaults to 32-bit on linux
	SET(CMAKE_CXX_FLAGS "-std=c++11 -march=i686 -m32 -O2 -s -fPIC -fpermissive")

	if(ACRE_LINK_TYPE STREQUAL "static")
		set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")
		set(CMAKE_SHARED_LINKER_FLAGS "-static-libgcc -static-libstdc++")
	endif()
elseif(MSVC)
	if(ACRE_LINK_TYPE STREQUAL "static")
		set(CMAKE_CXX_FLAGS_DEBUG "/D _DEBUG /MTd /Zi /Ob0 /Od /RTC1" PARENT_SCOPE)
		set(CMAKE_CXX_FLAGS_MINSIZEREL     "/MT /O1 /Ob1 /D NDEBUG" PARENT_SCOPE)
		set(CMAKE_CXX_FLAGS_RELEASE       "/MT /O2 /Ob2 /D NDEBUG" PARENT_SCOPE)
		set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "/MT /Zi /O2 /Ob1 /D NDEBUG" PARENT_SCOPE)
	else()
		set(CMAKE_CXX_FLAGS_DEBUG "/D _DEBUG /MDd /Zi /Ob0 /Od /RTC1" PARENT_SCOPE)
		set(CMAKE_CXX_FLAGS_MINSIZEREL     "/MD /O1 /Ob1 /D NDEBUG" PARENT_SCOPE)
		set(CMAKE_CXX_FLAGS_RELEASE       "/MD /O2 /Ob2 /D NDEBUG" PARENT_SCOPE)
		set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "/MD /Zi /O2 /Ob1 /D NDEBUG" PARENT_SCOPE)
	endif()

	set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} /NODEFAULTLIB:libcmt.lib")
	set(CMAKE_EXE_LINKER_FLAGS_MINSIZEREL "${CMAKE_EXE_LINKER_FLAGS_MINSIZEREL} /NODEFAULTLIB:libcmt.lib")
	set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} /NODEFAULTLIB:libcmt.lib")
	set(CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO "${CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO} /NODEFAULTLIB:libcmt.lib")
endif()

file(GLOB SOURCES *.h *.hpp *.c *.cpp) # Grab all source files and stuff them into ${SOURCES}
file(GLOB INTERCEPT_CLIENT_SOURCES ${INTERCEPT_PATH}/src/client/headers/*.hpp ${INTERCEPT_PATH}/src/client/intercept/*.cpp)
file(GLOB INTERCEPT_CLIENT_MAIN_SOURCES  ${INTERCEPT_PATH}/src/client/headers/client/*.hpp ${INTERCEPT_PATH}/src/client/intercept/client/*.cpp)
file(GLOB INTERCEPT_CLIENT_SHARED_SOURCES  ${INTERCEPT_PATH}/src/client/headers/shared/*.hpp ${INTERCEPT_PATH}/src/client/intercept/shared/*.cpp)
file(GLOB INTERCEPT_CLIENT_SQF_SHARED_SOURCES ${INTERCEPT_PATH}/src/client/headers/client/sqf/*.hpp ${INTERCEPT_PATH}/src/client/intercept/client/sqf/*.cpp)
file(GLOB PYTHON_SOURCES ${PYTHON_PATH}/include/*.h)
file(GLOB BOOST_SOURCES ${BOOST_PATH}/boost/python.hpp ${BOOST_PATH}/boost/python/*.hpp ${BOOST_PATH}/boost/python/converter/*.hpp ${BOOST_PATH}/boost/python/detail/*.hpp ${BOOST_PATH}/boost/python/object/*.hpp ${BOOST_PATH}/boost/python/suit/*.hpp)

SOURCE_GROUP("interceptpython" FILES ${SOURCES})
SOURCE_GROUP("includes\\intercept" FILES ${INTERCEPT_CLIENT_HEADERS})
SOURCE_GROUP("includes\\intercept\\client" FILES ${INTERCEPT_CLIENT_MAIN_SOURCES})
SOURCE_GROUP("includes\\intercept\\shared" FILES ${INTERCEPT_CLIENT_SHARED_SOURCES})
SOURCE_GROUP("includes\\intercept\\client\\sqf" FILES ${INTERCEPT_CLIENT_SQF_SHARED_SOURCES})
SOURCE_GROUP("includes\\python" FILES ${PYTHON_SOURCES})
SOURCE_GROUP("includes\\boost" FILES ${BOOST_SOURCES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${INTERCEPT_PATH}/src/client/headers ${INTERCEPT_PATH}/src/client/headers/client ${INTERCEPT_PATH}/src/client/headers/client/sqf ${INTERCEPT_PATH}/src/client/headers/client/shared ${PYTHON_PATH}/include ${BOOST_PATH})

add_library( ${PLUGIN_NAME} SHARED ${SOURCES} ${INTERCEPT_CLIENT_HEADERS} ${INTERCEPT_CLIENT_MAIN_SOURCES} ${INTERCEPT_CLIENT_SHARED_SOURCES} ${INTERCEPT_CLIENT_SQF_SHARED_SOURCES} ${PYTHON_SOURCES} ${BOOST_SOURCES})

target_link_libraries(${PLUGIN_NAME} ${INTERCEPT_LIB_PATH} ${PYTHON_LIB_PATH} ${BOOST_LIB_PATH} ${LINK_LIBS})

#TODO make this neat!
configure_file(${BOOST_PATH}/stage/lib/boost_python3-vc141-mt-1_64.dll ${CMAKE_CURRENT_BINARY_DIR}/Debug/boost_python3-vc141-mt-1_64.dll COPYONLY) # Copy boost.Python.dll for now