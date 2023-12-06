# CMakeLists.txt
# Created on: Nov 7, 2023
#Author: Peter Nichols


add_subdirectory(test)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../FactoryPattern/include")

add_library(builderPattern STATIC Computer.cpp TestBuilderPattern.cpp)
