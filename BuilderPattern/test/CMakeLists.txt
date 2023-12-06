

if(BUILD_TESTING)
    add_executable(myTest Test1_test.cpp)
    
    target_link_libraries(myTest PUBLIC gtest gtest_main)
    target_include_directories(myTest PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
    include(GoogleTest)
    gtest_discover_tests(myTest)
endif()
