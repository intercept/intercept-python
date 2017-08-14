class CfgPatches {
    class InterceptPython_Example_FollowPlayer {
        name = "Intercept Python Example - Follow Player";
        units[] = { "" };
        weapons[] = {};
        requiredVersion = 0.1;
		version = 0.1;
        requiredAddons[] = {"InteceptPython_Core"};
        author = "Intercept Python Team";
        authors[] = {"Zakant"};
        url = "https://github.com/intercept/intercept-python";
    };
};

class InterceptPython {
	class FollowPlayer {
		EntryPoint = "followPlayer";
	};
};
