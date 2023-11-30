

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../FactoryPattern/include")

add_library(abstractFactoryPattern STATIC
    ComputerAbstractFactory.cpp
    PersonalComputerFactory.cpp
    ServerFactory.cpp
    ComputerFactory.cpp
    TestAbstractFactoryPattern.cpp)

target_link_libraries(abstractFactoryPattern factoryPattern)

#target_include_directories(abstractFactory INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/include")
