import sys, os, shutil, glob, ntpath
import os.path

configString = "using python : {} : {} : {} : {} ;"
compileString = 'bjam --user-config=autobuild-config.jam --with-python python-debugging=off threading=multi link={} variant={} address-model={} cxxflags="/std:c++latest" define=_HAS_AUTO_PTR_ETC stage'

def main(argv):
	print("Building Boost.Python")
	if(not 'BOOST_ROOT' in os.environ):
		print("Cant find boost. Set 'BOOST_ROOT' enviroment variable to your boost root!")
		return
	else:
		boostPath = os.environ['BOOST_ROOT']
	print("Boost path is: {}".format(boostPath))
	os.chdir(boostPath)
	# Creating output folder
	if not os.path.exists('lib'):
		os.makedirs('lib')
	
	# Checking if bjam is present. Run bootstrap otherwise!
	if not os.path.exists('bjam.exe'):
		print("First boost run")
		print("Running bootstrap.bat and continue afterwards!")
		os.system("bootstrap.bat")
	
	print("Searching for python")
	build64 = not '--no64' in argv
	build86 = not '--no86' in argv
	
	buildDebug = not '--noDebug' in argv
	buildRelease = not '--noRelease' in argv
	
	if (build64):
		if('PYTHON_PATH_64' in os.environ):
			python_x64 = os.environ['PYTHON_PATH_64']
			print("Found Python x64: {}".format(python_x64))
		else:
			print("Cant find python x64. Set 'PYTHON_PATH_64' enviroment variable to your python x64 installation!")
			return
	else:
		print("Disabled x64 building")
	if (build86):
		if('PYTHON_PATH_86' in os.environ):
			python_x86 = os.environ['PYTHON_PATH_86']	
			print("Found Python x86: {}".format(python_x86))
		else:
			print("Cant find python x86. Set 'PYTHON_PATH_86' enviroment variable to your python x86 installation!")
			return
	else:
		print("Disabled x86 building")
	
	if(build64):
		print("Building Boost.Python x64")
		build(boostPath, python_x64, 64, buildDebug, buildRelease)
	if(build86):
		print("Building Boost.Python x86")
		build(boostPath, python_x86, 32, buildDebug, buildRelease)

def build(boostPath, pythonPath, architecture, buildDebug, buildRelease):
	configPath = os.path.join(boostPath, 'autobuild-config.jam')
	
	try:
		os.remove(configPath) # Remove old config
	except OSError:
		pass
	try:
		shutil.rmtree('./stage') # Remove old stage
	except OSError:
		pass
	shutil.copyfile(os.path.join(boostPath, 'tools', 'build', 'example', 'user-config.jam'), configPath) # Grab the config template and copy it
	
	with open(configPath, "a") as config: # For now version is hardcoded!
		config.write(configString.format('3.6', pythonPath.replace('\\', '\\\\'), os.path.join(pythonPath, 'include').replace('\\', '\\\\'), os.path.join(pythonPath, 'libs').replace('\\', '\\\\')))
	
	if(buildDebug):
		print("Building Debug")
		os.system(compileString.format('shared', 'debug', str(architecture)))
		os.system(compileString.format('static', 'debug', str(architecture)))
	if(buildRelease):
		print("Building Release")
		os.system(compileString.format('shared', 'release', str(architecture)))
		os.system(compileString.format('static', 'release', str(architecture)))
	
	# Clean	up output
	outputFolder = os.path.join('lib', 'win{}'.format(str(architecture)))
	if (os.path.exists(outputFolder)):
		shutil.rmtree(outputFolder)
	os.makedirs(outputFolder)
	# Copy results into ouput
	for f in glob.glob(r'./stage/lib/*'):
		print("Copying from {} to {}".format(f, os.path.join(outputFolder, ntpath.basename(f))))
		shutil.copy(f, os.path.join(outputFolder, ntpath.basename(f)))
	# And copy all libs without `python3`
	for f in glob.glob(r'./stage/lib/*.lib'):
		shutil.copy(f, os.path.join(outputFolder, ntpath.basename(f).replace('python3', 'python')))
	shutil.rmtree('./stage') # Remove stage as its not needed anymore
	print("Compilation completed")
	
if __name__ == "__main__":
	main(sys.argv)