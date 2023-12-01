#include <iostream>
#include "settings.hpp"

using std::cout;
using std::endl;
using std::string;

const char* program_name_c {"file_keeper_control"};
const char* program_short_name_c {"fkc"};

// commands
int command_help()
{
    cout << "TODO help" << endl;
    return 0;
}

int command_track(int argc, char** argv)
{
    try {
        fk::settings s;
        s.load();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return -1;
    }
    return 0;
}

int main(int argc, char** argv)
{
    int ret_status = 0;

    if (argc < 2) {
        command_help();
        ret_status = -1;
        return -1;
    }

    const string command { argv[1] };
    if (command == "--help") {
        ret_status = command_help();
    } else if (command == "track") {
        ret_status = command_track(argc, argv);
    } else if (command == "untrack") {

    } else {
        cout << program_name_c << ": '" << command << "' is not a " <<
            program_name_c << " command. " <<
            "See '" << program_short_name_c << " --help'." << endl;
            ret_status = -1;
    }

    return ret_status;
}