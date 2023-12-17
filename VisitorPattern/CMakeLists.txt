#####################################################################
# CMakeLists.txt
# Created on: Dec 15, 2023
#Author: Peter Nichols
#####################################################################

add_library(visitorPattern STATIC)
target_sources(visitorPattern PRIVATE Book.cpp)
target_sources(visitorPattern PRIVATE Fruit.cpp)
target_sources(visitorPattern PRIVATE ShoppingCartVisitorImpl.cpp)
target_sources(visitorPattern PRIVATE ShoppingCartClient.cpp)
target_sources(visitorPattern PRIVATE TestVisitorPattern.cpp)

target_include_directories(visitorPattern PUBLIC "include")
