cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(lesson-02)

# compile for c++11:
set (CMAKE_CXX_STANDARD 11)

# generate the executables:
add_executable(vectorBasics	src/vectorBasics.cpp)
add_executable(readBoardFile src/readBoardFile.cpp)