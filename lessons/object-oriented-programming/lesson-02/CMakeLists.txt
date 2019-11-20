cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(lesson-02)

# compile for c++11:
set (CMAKE_CXX_STANDARD 17)

# generate the executables:
add_executable(structureBasics	src/structureBasics.cpp)
