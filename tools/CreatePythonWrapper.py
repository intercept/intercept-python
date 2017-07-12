import sys
import os
import glob
import os.path
import re
import datetime
import CppHeaderParser
import codecs

skipedCategories = ["common_helpers", "actions", "deprecated", "sqf"]
requireCast = False # Indicates if static_casts should always be used or only if overloads exists

def main(argv):
    print("Creating wrapper code for sqf")

    functionList = {}
    allFunctions = []
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
        # if os.path.basename(f)[:-4] in skipedCategories:
            # continue
        functionList[os.path.basename(f)[:-4]] = []
        try:
            with codecs.open(f, 'r', 'utf-8') as headerFile:
                headerData = headerFile.read()
            headerData = headerData.replace('enum class', 'enum') # Enum classes are nice ... but not recognized as enums!
            print('Parsing header {}'.format(f))
            header = CppHeaderParser.CppHeader(headerData[1:], argType='string') # We have to remove the byte order mark \ufeff
        except Exception as e:
            print(e)
            sys.exit(1)
        functionList[os.path.basename(f)[:-4]] = header
        allFunctions += header.functions
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

        # Write the categories
        for category in functionList:
            if(not category in skipedCategories):
                print('Writing header {}'.format(category))
                sqfHeader = functionList[category]
                header.write('BOOST_PYTHON_MODULE(__sqf_{})\n{}\n'.format(category, '{'))
                # Write the categories functions
                for f in sqfHeader.functions:
                    if f['name'].startswith('operator') or f['namespace'].endswith('__helpers::'): # Operators and helpers are skipped
                        continue
                    static_cast = "&{}"
                    if requireCast or existOverload(f, allFunctions):
                        static_cast = "static_cast<{}(*)({})>(&{})".format(f['returns'], ','.join([x['type'] for x in f['parameters']]), '{}')
                    header.write('\tboost::python::def("{}", {});\n'.format(getPythonicName(f['name']), static_cast.format(f['name'])))
                # Write the categories enums
                for e in sqfHeader.enums:
                    header.write('\tboost::python::enum_<{}>("{}")'.format(e['name'], getPythonicName(e['name'])))
                    for v in e['values']:
                        header.write('\n\t\t.value("{}", static_cast<{}>({}))'.format(v['name'], e['name'], v['value']))
                    header.write(';\n')
                # Write the categories classes / structs
                for c in sqfHeader.classes:
                    cls = sqfHeader.classes[c]
                    cFunctions = list(cls['methods']['public'])
                    primarConstructor = getPrimaryConstructor(cFunctions)
                    header.write('\tboost::python::class_<{}>("{}"'.format(c, getPythonicName(c)))
                    if primarConstructor != None:
                        cFunctions.remove(primarConstructor)
                        header.write(', boost::python::init<{}>())'.format(','.join([x['type'] for x in primarConstructor['parameters']])))
                    else:
                        header.write(')')
                    for cFunc in cFunctions:
                        if cFunc['name'].startswith('__'): # Skip double underscores. Those are considered internal!
                            continue
                        if cFunc['constructor']:
                            if cFunc['name'].startswith('operator') or len([y for y in [x['type'].replace(' ', '') for x in cFunc['parameters']] if y.endswith('&&')]) > 0: # Ignore custom conversions and move constructors
                                continue
                            header.write('\n\t\t.def(boost::python::init<{}>())'.format(','.join([x['type'] for x in cFunc['parameters']])))
                        else:
                            if cFunc['name'].startswith('operator') or cFunc['rtnType'] == '),': # Operators are - for now - not supported
                                continue
                            fullFunctionName = '{}::{}'.format(c, cFunc['name'])
                            if requireCast or existOverload(cFunc, cFunctions):
                                functionReferenc = 'static_cast<{}(*)({})>(&{})'.format(cFunc['returns'], ','.join([x['type'] for x in cFunc['parameters']]), fullFunctionName)
                            else:
                                functionReferenc = '&{}'.format(fullFunctionName)
                            header.write('\n\t\t.def("{}", {})'.format(getPythonicName(cFunc['name']), functionReferenc))
                            if cFunc['static']:
                                header.write('.staticmethod("{}")'.format(getPythonicName(cFunc['name'])))
                    for props in cls['properties']['public']:
                        if not props['name'].startswith('__'): # Skip double underscores. Those are considered internal!
                            header.write('\n\t\t.def_readwrite("{}", &{}::{})'.format(getPythonicName(props['name']), c, props['name']))
                    header.write(';\n')
                header.write('}\n\n')
        
        # Write the function that adds the inittabs
        header.write("inline void addSQFModules() {\n")
        for cat in functionList:
            if(not cat in skipedCategories):
                header.write('\tPyImport_AppendInittab("__sqf_{}", &PyInit___sqf_{});\n'.format(cat, cat))
        header.write("}\n")
    print("Done")

def existOverload(function, allFunctions):
    newFuncList = list(allFunctions)
    newFuncList.remove(function)
    for f in newFuncList:
        if f['name'] == function['name']:
            return True
    return False

def getPythonicName(cname):
    parts = [x.title() for x in cname.split('_')]
    parts[0] = parts[0].lower()
    return "".join(parts)

def getPrimaryConstructor(functionList):
    for f in functionList:
        if f['constructor']:
            return f
    return None

# data = getEntriesFromFile(r"F:\Daten\Programmieren\Arma\intercept\src\client\headers\client\sqf\eden.hpp")
if __name__ == "__main__":
	main(sys.argv)