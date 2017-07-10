cmake_minimum_required (VERSION 3.7)

set(PLUGIN_NAME InterceptPython)

project(${PLUGIN_NAME})

if("${CMAKE_GENERATOR}" MATCHES "Visual Studio 15 2017 Win64")
	set( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /std:c++latest" )
	set( USE_64BIT_BUILD ON)
elseif("${CMAKE_GENERATOR}" MATCHES "Visual Studio 15 2017")
	set( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /std:c++latest" )
elseif("${CMAKE_CXX_COMPILER_ID}" MATCHES "MSVC")
	message(FATAL_ERROR "ERROR: You need a C++17 compatible compiler")
endif()

# Just for debug purpose
if ("$ENV{INTERCEPT_PATH}" STREQUAL "")
	set(INTERCEPT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../intercept/)
else()
	set(INTERCEPT_PATH $ENV{INTERCEPT_PATH})
endif()

if(USE_64BIT_BUILD)
	set(PYTHON_PATH $ENV{PYTHON_PATH_64})
else()
	set(PYTHON_PATH $ENV{PYTHON_PATH_86})
endif()

set(PYTHON_VERSION 36)
STRING(REGEX REPLACE "\\\\" "/" PYTHON_PATH ${PYTHON_PATH}) 

set(PYTHON_LIB_PATH ${PYTHON_PATH}/libs/python${PYTHON_VERSION}.lib)

# Log infos
message(STATUS "Intercept path: ${INTERCEPT_PATH}" )
message(STATUS "Python path: ${PYTHON_PATH}" )

# Find and configure boost
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 

# find_package(Boost 1.64.0  REQUIRED COMPONENTS python) Find is nice.. But we can read the enviroment variable ourself and make it vs compatible with that...
if ("$ENV{Boost_DIR}" STREQUAL "")
	if (NOT "$ENV{BOOST_ROOT}" STREQUAL "")
		set(ENV{Boost_DIR} $ENV{BOOST_ROOT})
	elseif (NOT "$ENV{BOOSTROOT}" STREQUAL "")
		set(ENV{Boost_DIR} $ENV{BOOSTROOT})
	endif()
endif()

set(BOOST_PATH $ENV{Boost_DIR})
STRING(REGEX REPLACE "\\\\" "/" BOOST_PATH ${BOOST_PATH}) 
message(STATUS "Boost path: ${BOOST_PATH}")
if(USE_64BIT_BUILD)
	set(BOOST_LIB_DIR ${BOOST_PATH}/lib/win64)
else()
	set(BOOST_LIB_DIR ${BOOST_PATH}/lib/win32)
endif()

message(STATUS "Pythonlib path: ${PYTHON_LIB_PATH}")
message(STATUS "Boostlib search path: ${BOOST_LIB_DIR}")

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
		set(CMAKE_CXX_FLAGS_DEBUG "/D _DEBUG /MDd /Zi /Ob0 /Od /RTC1")
		set(CMAKE_CXX_FLAGS_MINSIZEREL     "/MD /O1 /Ob1 /D NDEBUG")
		set(CMAKE_CXX_FLAGS_RELEASE       "/MD /O2 /Ob2 /D NDEBUG")
		set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "/MD /Zi /O2 /Ob1 /D NDEBUG")
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

#file(GLOB BOOST_SOURCES ${BOOST_PATH}/libs/python/src/*.cpp)
#file(GLOB BOOST_CONVERTER_SOURCES ${BOOST_PATH}/libs/python/src/converter/*.cpp)
#file(GLOB BOOST_OBJECT_SOURCES ${BOOST_PATH}/libs/python/src/object/*.cpp)

SOURCE_GROUP("interceptpython" FILES ${SOURCES})
SOURCE_GROUP("includes\\intercept" FILES ${INTERCEPT_CLIENT_HEADERS})
SOURCE_GROUP("includes\\intercept\\client" FILES ${INTERCEPT_CLIENT_MAIN_SOURCES})
SOURCE_GROUP("includes\\intercept\\shared" FILES ${INTERCEPT_CLIENT_SHARED_SOURCES})
SOURCE_GROUP("includes\\intercept\\client\\sqf" FILES ${INTERCEPT_CLIENT_SQF_SHARED_SOURCES})

# Set defines to enable deprecated stuff (make Boost c++17 "compatible")
add_definitions(-D_HAS_AUTO_PTR_ETC) # Possible other defines: _HAS_FUNCTION_ASSIGN _HAS_OLD_IOSTREAMS_MEMBERS _HAS_TR1_NAMESPACE
add_definitions(-DBOOST_LIB_NAME=boost_python -DBOOST_PYTHON_STATIC_LIB)

link_directories(${BOOST_LIB_DIR})

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${INTERCEPT_PATH}/src/client/headers ${INTERCEPT_PATH}/src/client/headers/client ${INTERCEPT_PATH}/src/client/headers/client/sqf ${INTERCEPT_PATH}/src/client/headers/client/shared ${PYTHON_PATH}/include ${BOOST_PATH})

add_library(${PLUGIN_NAME} SHARED ${SOURCES} ${INTERCEPT_CLIENT_HEADERS} ${INTERCEPT_CLIENT_MAIN_SOURCES} ${INTERCEPT_CLIENT_SHARED_SOURCES} ${INTERCEPT_CLIENT_SQF_SHARED_SOURCES} ${BOOST_SOURCES} ${BOOST_CONVERTER_SOURCES} ${BOOST_OBJECT_SOURCES})

target_link_libraries(${PLUGIN_NAME} ${PYTHON_LIB_PATH} ${LINK_LIBS})

#TODO make this neat!
# configure_file(${BOOST_PATH}/stage/lib/boost_python3-vc141-mt-1_64.dll ${CMAKE_CURRENT_BINARY_DIR}/Debug/boost_python3-vc141-mt-1_64.dll COPYONLY) # Copy boost.Python.dll for now