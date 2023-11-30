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
 add_subdirectory(SingletonPattern)
 add_subdirectory(FactoryPattern)
 add_subdirectory(AbstractFactory)
 
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
    PUBLIC singletonPattern
    PUBLIC factoryPattern
    PUBLIC abstractFactoryPattern
    PUBLIC gtest)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_BINARY_DIR}
    PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/SingletonPattern/include
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/FactoryPattern/include
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/AbstractFactory/include
    )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
