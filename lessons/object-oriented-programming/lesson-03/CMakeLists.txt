cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(lesson-03)

# compile for c++11:
set (CMAKE_CXX_STANDARD 17)

# generate the executables:
add_executable(advancedObjOri	src/advancedObjOri.cpp)
add_executable(inheritanceExercise src/inheritanceExercise.cpp)
add_executable(classHierarchyExercise src/classHierarchyExercise.cpp)
add_executable(review src/review.cpp)
add_executable(genericProgramming src/genericProgramming.cpp)
add_executable(operatorOverloading src/operatorOverloading.cpp)
add_executable(virtualFunctions src/virtualFunctions.cpp)
add_executable(sortFunction src/sortFunction.cpp)