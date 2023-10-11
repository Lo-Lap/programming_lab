# CMakeList.txt : CMake project for Calculator_main_v.f, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project( Calculator_main)
set(CMAKE_CXX_STANDARD 20)
# Add source to this project's executable.

set(PROJECT_HEADERS Calculator_main.h, calcul.h)
add_executable(Calculator_main ${PROJECT_SOURCE_DIR}/ Calculator_main.cpp calcul.cpp "dll_read.cpp" "dll_read.h")

