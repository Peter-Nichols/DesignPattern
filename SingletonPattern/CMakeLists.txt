# CMakeLists.txt
# Created on: Nov 7, 2023
# Author: Peter Nichols

add_library(singletonPattern STATIC)
target_sources(singletonPattern PRIVATE Singleton.cpp)
target_sources(singletonPattern PRIVATE TestSingletonPattern.cpp)

target_include_directories(singletonPattern PUBLIC "include")

add_subdirectory(test)
