

if(BUILD_TESTING)
    add_executable(singletonTest Singleton_test.cpp)
    
    target_link_libraries(singletonTest PUBLIC gtest gmock gtest_main)
    target_link_libraries(singletonTest PUBLIC singletonPattern)
    target_include_directories(singletonTest
                           PUBLIC "${PROJECT_BINARY_DIR}"
                           PUBLIC "${PROJECT_SOURCE_DIR}/SingletonPattern/include"
                           )

    add_test(NAME SingletonTest COMMAND singletonTest)
    include(GoogleTest)

    gtest_discover_tests(singletonTest)
endif()