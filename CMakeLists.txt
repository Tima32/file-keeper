cmake_minimum_required(VERSION 2.8)

set(LIBRARY_OUTPUT_PATH ./bin/lib)
set(EXECUTABLE_OUTPUT_PATH ./bin)

project(fkc)
add_executable(fkc 
    src/control/control-main.cpp
    src/settings/settings.cpp
    )
target_include_directories(fkc PRIVATE src/settings)


# ---------
