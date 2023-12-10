#[[

]]#

cmake_minimum_required(VERSION 3.27)


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
   GIT_TAG        release-1.11.0
)


 FetchContent_MakeAvailable(googletest)

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

target_link_libraries(DesignPattern PUBLIC gtest)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
