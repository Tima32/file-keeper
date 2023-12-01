#include <iostream>
#include <fstream>
#include "settings.hpp"

using std::cerr;
using std::ifstream;
using std::exception;
using std::string;

const char* fk::settings::path = "/etc/file-keeper/settings.json";

void fk::settings::load()
{
    ifstream settings_f;
    settings_f.exceptions( std::ifstream::failbit | std::ifstream::badbit );
    settings_f.open(path);

    std::string str((std::istreambuf_iterator<char>(settings_f)),
                std::istreambuf_iterator<char>());

    std::cout << str << std::endl;
}
