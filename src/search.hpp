#pragma once

#include "shared.hpp"
#include <optional>

namespace intercept::search {
    class python_searcher {
    public:
		python_searcher();
        //This is here because it's easier to crossplatform n stuff
        static std::string get_command_line();
		std::vector<std::string> active_mod_folder_list;
    private:
        static std::vector<std::string> generate_pbo_list();
        
    };
}
