cmake_minimum_required(VERSION 3.14)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add subdirectories
add_subdirectory("Headers")
add_subdirectory("cpp")

# Add the library
add_library(console_lib
    "cpp/console.cpp"
    "Headers/console.h"
)

# Include directories
target_include_directories(console_lib PRIVATE "Headers")