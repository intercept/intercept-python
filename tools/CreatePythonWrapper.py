import sys
import os
import glob
import os.path
import re
import datetime
import CppHeaderParser
import codecs

skipedCategories = ["common_helpers", "actions", "deprecated"]

def main(argv):
    print("Creating wrapper code for sqf")

    functionList = {}
    if len(argv) > 1:
        interceptPath = argv[1]
    else:
        interceptPath = '..\\..\\intercept'
    headerPath = os.path.join(interceptPath, 'src\\client\\headers\\client\\sqf\\*.hpp')
    print('Intercept header path: {}'.format(headerPath[:-6]))
    resultHeaderPath = os.path.join('..\\src', 'SQFModules.hpp')
    print("Output header path: {}".format(resultHeaderPath))
    print('Parsing header... This may take a while!')
    for f in glob.glob(headerPath):
        functionList[os.path.basename(f)[:-4]] = []
        try:
            with codecs.open(f, 'r', 'utf-8') as headerFile:
                headerData = headerFile.read()
            print('Parsing header {}'.format(f))
            header = CppHeaderParser.CppHeader(headerData[1:], argType='string') # We have to remove the byte order mark \ufeff
        except Exception as e:
            print(e)
            sys.exit(1)
        functionList[os.path.basename(f)[:-4]] = header
    print("Parsing done")
    print("Writing headers...")
    if os.path.exists(resultHeaderPath):
        os.remove(resultHeaderPath)
        
    now = datetime.datetime.now().strftime('%d.%m.%Y %H:%M:%S')
    with open(resultHeaderPath, 'w') as header:
        header.write('// Created automatically from python script at {}\n\n'.format(now))
        header.write('#pragma once\n')
        header.write('#include <intercept.hpp>\n')
        header.write('#include <boost/python.hpp>\n\n')

        # Not nice, but best solution for now! Will also include those namespaces into the main file
        header.write('using namespace intercept;\n')
        header.write('using namespace intercept::sqf;\n')
        header.write('using namespace intercept::types;\n\n')

        # Write the function that adds the inittabs
        header.write("inline void addSQFModules() {\n")
        for cat in functionList:
            if(not cat in skipedCategories):
                header.write('\tPyImport_AppendInittab("__sqf_{}", &PyInit___sqf_{});\n'.format(cat, cat))
        header.write("}\n\n")

        # Write the categories
        for category in functionList:
            if(not category in skipedCategories):
                print('Writing header {}'.format(category))
                sqfHeader = functionList[category]
                header.write('BOOST_PYTHON_MODULE(__sqf_{})\n{}\n'.format(category, '{'))
                # Write the categories functions
                for f in sqfHeader.functions:
                    static_cast = "&{}"
                    if existOverload(f, sqfHeader):
                        static_cast = "static_cast<{}(*)({})>(&{})".format(f['rtnType'], ','.join([x['type'] for x in f['parameters']]), '{}')
                    header.write('\tboost::python::def("{}", {});\n'.format(getPythonicName(f['name']), static_cast.format(f['name'])))
                # Write the categories enums
                for e in sqfHeader.enums:
                    pass
                # Write the categories classes
                for c in sqfHeader.classes:
                    pass
                header.write('}\n\n')
        
    print("Done")

def existOverload(function, header):
    newFuncList = list(header.functions)
    newFuncList.remove(function)
    for f in newFuncList:
        if f['name'] == function['name']:
            return True
    return False

def getPythonicName(cname):
    parts = [x.title() for x in cname.split('_')]
    parts[0] = parts[0].lower()
    return "".join(parts)

# data = getEntriesFromFile(r"F:\Daten\Programmieren\Arma\intercept\src\client\headers\client\sqf\eden.hpp")
if __name__ == "__main__":
	main(sys.argv)