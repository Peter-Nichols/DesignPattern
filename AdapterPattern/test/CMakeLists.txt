

if(BUILD_TESTING)
    add_executable(adapterPatternTest Socket_test.cpp SocketClassAdapterImpl_test.cpp SocketObjectAdapterImpl_test.cpp Volt_test.cpp)
    
    target_link_libraries(adapterPatternTest PUBLIC gtest gmock gtest_main)
    target_link_libraries(adapterPatternTest PUBLIC adapterPattern)
    target_include_directories(adapterPatternTest
                           PUBLIC "${PROJECT_BINARY_DIR}"
                           PUBLIC "${PROJECT_SOURCE_DIR}/AdapterPattern/include"
                           )

    add_test(NAME adapterTests COMMAND adapterPatternTest)
    include(GoogleTest)

    gtest_discover_tests(adapterPatternTest)
endif()