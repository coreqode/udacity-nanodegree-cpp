cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(lesson-02)

# compile for c++11:
set (CMAKE_CXX_STANDARD 17)

# debug:
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_BUILD_TYPE RelWithDebInfo)
#cmake -DCMAKE_BUILD_TYPE=Debug ..
#cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo ..

# generate the executables:
add_executable(debug src/debug.cpp)
