# CMakeLists.txt
# Created on: Nov 7, 2023
#Author: Peter Nichols


include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

add_library(factoryPattern STATIC ComputerFactory.cpp ServerComputer.cpp PersonalComputer.cpp TestFactoryPattern.cpp)
