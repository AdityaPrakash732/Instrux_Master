cmake_minimum_required(VERSION 3.14)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(instrux)

add_subdirectory("Console")

add_library(console_app
    "instrux_console.cpp"
    "instrux_console.h"
)

# Include directories
target_include_directories(console_app PUBLIC "Console/Headers")

# Set target properties
set_target_properties(console_app PROPERTIES
    CXX_VISIBILITY_PRESET hidden
    VISIBILITY_INLINES_HIDDEN YES
)

add_executable(instrux "instrux_console.cpp")

# Link libraries
target_link_libraries(instrux PRIVATE console_lib)

# Add any necessary compile options
target_compile_options(console_app PRIVATE) # -Wall -Wextra -Werror)
