#####################################################################
# CMakeLists.txt
# Created on: Nov 7, 2023
#Author: Peter Nichols
#####################################################################

add_library(prototypePattern STATIC)
target_sources(prototypePattern PRIVATE Employees.cpp)
target_sources(prototypePattern PRIVATE TestPrototypePattern.cpp)

target_include_directories(prototypePattern PUBLIC "include")
