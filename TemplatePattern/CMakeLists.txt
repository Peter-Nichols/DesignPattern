#########################################################################
# CMakeLists.txt
# Created on: Dec 11, 2023
#Author: Peter Nichols
########################################################################

add_library(templatePattern STATIC)
target_sources(templatePattern PRIVATE HouseTemplate.cpp)
target_sources(templatePattern PRIVATE GlassHouse.cpp)
target_sources(templatePattern PRIVATE WoodenHouse.cpp)
target_sources(templatePattern PRIVATE TestTemplatePattern.cpp)

target_include_directories(templatePattern PUBLIC "include")


add_subdirectory(test)
