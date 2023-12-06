# CMakeLists.txt
# Created on: Nov 7, 2023
#Author: Peter Nichols


add_library(factoryPattern STATIC)
target_sources(factoryPattern PRIVATE ComputerFactory.cpp)
target_sources(factoryPattern PRIVATE ServerComputer.cpp)
target_sources(factoryPattern PRIVATE PersonalComputer.cpp)
target_sources(factoryPattern PRIVATE TestFactoryPattern.cpp)
target_include_directories(factoryPattern PUBLIC "include")

#add_subdirectory(test)
