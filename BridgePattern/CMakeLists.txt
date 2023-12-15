
add_library(bridgePattern STATIC)
target_sources(bridgePattern PRIVATE Pentagon.cpp)
target_sources(bridgePattern PRIVATE Rectangle.cpp)
target_sources(bridgePattern PRIVATE AbstractShape.cpp)
target_sources(bridgePattern PRIVATE GreenColor.cpp)
target_sources(bridgePattern PRIVATE RedColor.cpp)
target_sources(bridgePattern PRIVATE TestBridgePattern.cpp)

target_include_directories(bridgePattern PUBLIC "include")

target_link_libraries(bridgePattern PUBLIC compositePattern)

add_subdirectory(test)
