#[[

]]#

cmake_minimum_required(VERSION 3.31.3)

#find_package(Catch2 REQUIRED)
#add_executable(tests test.cpp)
#target_link_libraries(tests PRIVATE Catch2::Catch2)

project(DesignPattern
    VERSION 1.0.0
    DESCRIPTION "A simple Practical approach to software design patterns using C++"
    LANGUAGES C CXX)

include(CTest)
enable_testing()

include(FetchContent)
FetchContent_Declare(
   googletest
   GIT_REPOSITORY https://github.com/google/googletest.git
   GIT_TAG        v1.15.2
)

 FetchContent_MakeAvailable(googletest)

 FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

 add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(SingletonPattern)
target_link_libraries(DesignPattern PUBLIC singletonPattern)
add_subdirectory(FactoryPattern)
target_link_libraries(DesignPattern PUBLIC factoryPattern)
add_subdirectory(AdapterPattern)
target_link_libraries(DesignPattern PUBLIC adapterPattern)
add_subdirectory(AbstractFactory)
target_link_libraries(DesignPattern PUBLIC abstractFactoryPattern)
add_subdirectory(BuilderPattern)
target_link_libraries(DesignPattern PUBLIC builderPattern)
add_subdirectory(PrototypePattern)
target_link_libraries(DesignPattern PUBLIC prototypePattern)
add_subdirectory(CompositePattern)
target_link_libraries(DesignPattern PUBLIC compositePattern)
add_subdirectory(TemplatePattern)
target_link_libraries(DesignPattern PUBLIC templatePattern)
add_subdirectory(BridgePattern)
target_link_libraries(DesignPattern PUBLIC bridgePattern)
add_subdirectory(ChainOfResponsibilityPattern)
target_link_libraries(DesignPattern PUBLIC chainOfResponsibilityPattern)
add_subdirectory(StrategyPattern)
target_link_libraries(DesignPattern PUBLIC strategyPattern)
add_subdirectory(VisitorPattern)
target_link_libraries(DesignPattern PUBLIC visitorPattern)

target_link_libraries(DesignPattern PUBLIC gtest)

set(CMAKE_BUILD_TYPE "Debug")

target_compile_options(DesignPattern PRIVATE -coverage)
target_link_options(DesignPattern PRIVATE -coverage)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
include(Catch)
#catch_discover_tests(tests)
