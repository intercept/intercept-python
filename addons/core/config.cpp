class CfgPatches {
    class InterceptPython_Core {
        name = "Intercept Python - Core";
        units[] = { "" };
        weapons[] = {};
        requiredVersion = 0.1;
		version = 0.1;
        requiredAddons[] = {"Intercept_Core"};
        author = "Intercept Python Team";
        authors[] = {"Zakant","Overfl0"};
        url = "https://github.com/intercept/intercept-python";
    };
};

class Intercept {
    class InterceptPython {
        class InterceptPython_Core {
            pluginName = "InterceptPython";
        };
    };
};
