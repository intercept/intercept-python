Intercept Python Tools
======

Tools used to prepare the build of Intercept Python.


### Used enviroment variables
 - `BOOST_ROOT`: Path to the boost root dir. Used by `BuildBoost.py`.
 - `PYTHON_PATH_64`: Path to python x64 installation. Used by `BuildBoost.py`.
 - `PYTHON_PATH_86`: path to python x86 installation. Used by `BuildBoost.py`.
 
 
### Used packages
`CreatePythonWrapper.py` requires the pip package `CppHeaderParser`.

### Usefull commandline options
For `BuildBoost.py` the available commandline options are:
 - `--no64`: Prevents the x64 version from building. Usefull if no python x64 is installed.
 - `--no86`: Prevents the x86 version from building. Usefull if no python x86 is installed.
 - `--noDebug`: Don't create debug build. Speeds up compile time.
 - `--noRelease`: Don't create release build. Speeds up compile time. (NOT RECOMMENDED)

## Maintainers

The people responsible for merging changes to this component or answering potential questions.

- [Zakant](https://github.com/Zakant)