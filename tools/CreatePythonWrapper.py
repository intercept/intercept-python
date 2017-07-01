import sys
import os
import shutil
import glob
import ntpath
import os.path
import re
import datetime

def main(argv):
    print ("Creating wrapper code for sqf")
    functionDict = {}
    if len(argv) > 1:
        interceptPath = argv[1]
    else:
        interceptPath = '..\\..\\intercept'
    headerPath = os.path.join(interceptPath, 'src\\client\\headers\\client\\sqf\\*.hpp')
    print('Intercept header path: {}'.format(headerPath[:-6]))
    for f in glob.glob(headerPath):
        entries = getEntriesFromFile(f)
        for x in entries:
            functionDict[x] = getPythonicName(x)
    print('Found {} functions'.format(len(functionDict)))
    resultHeaderPath = os.path.join('..\\src', 'PythonSqfWrapper.hpp')
    resultCodePath = os.path.join('..\\src', 'PythonSqfWrapper.cpp')
    print("Header path: {}\nCode path: {}".format(resultHeaderPath, resultCodePath))
    if os.path.exists(resultHeaderPath):
        os.remove(resultHeaderPath)
    if os.path.exists(resultCodePath):
        os.remove(resultCodePath)
        
    now = datetime.datetime.now().strftime('%d.%m.%Y %H:%M:%S')
    with open(resultHeaderPath, 'w') as header:
        header.write('// Created automatically from python script at {}\n\n'.format(now))
        header.write('#pragma once\n')
        header.write('#include <intercept.hpp>\n')
        header.write('#include <boost/python.hpp>\n')
        header.write('void addSqfFunctions(object obj);')
    with open(resultCodePath, 'w') as code:
        code.write('// Created automatically from python script at {}\n\n'.format(now))
        code.write('#include "PythonSqfWrapper.hpp"\n')
        code.write('void addSqfFunctions(object obj) {\n')
        for f in functionDict:
            code.write('\tobj["{}"] = &sqf::{};\n'.format(functionDict[f], f))
        code.write('}\n')
    print("Done")

cnamePattern = re.compile(' \w+\(')
def getEntriesFromFile(path):
    with open(path, "r") as header:
        return [x[1:-1] for x in cnamePattern.findall(header.read())]


def getPythonicName(cname):
    parts = [x.title() for x in cname.split('_')]
    parts[0] = parts[0].lower()
    return "".join(parts)

if __name__ == "__main__":
	main(sys.argv)