# CMakeLists.txt
# Created on: Nov 7, 2023
#Author: Peter Nichols

add_library(builderPattern STATIC)
target_sources(builderPattern PRIVATE Computer.cpp)
target_sources(builderPattern PRIVATE TestBuilderPattern.cpp)
target_include_directories(builderPattern PUBLIC "include")

target_link_libraries(builderPattern PUBLIC factoryPattern)

add_subdirectory(test)
