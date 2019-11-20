cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(lesson-03)

# compile for c++11:
set (CMAKE_CXX_STANDARD 11)

# generate the executables:
add_executable(aStar src/aStar.cpp)