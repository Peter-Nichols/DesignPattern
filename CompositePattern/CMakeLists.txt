
add_library(compositePattern STATIC)
target_sources(compositePattern PRIVATE Drawing.cpp)
target_sources(compositePattern PRIVATE Triangle.cpp)
target_sources(compositePattern PRIVATE Circle.cpp)
target_sources(compositePattern PRIVATE TestCompositePattern.cpp)

target_include_directories(compositePattern PUBLIC "include")

add_subdirectory(test)
