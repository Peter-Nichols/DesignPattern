

if(BUILD_TESTING)
    add_executable(builderPatternTest Computer_test.cpp TestBuilderPattern_test.cpp)
    
    target_link_libraries(builderPatternTest PUBLIC gtest gmock gtest_main)
    target_link_libraries(builderPatternTest PUBLIC builderPattern)
    target_include_directories(builderPatternTest
                           PUBLIC "${PROJECT_BINARY_DIR}"
                           PUBLIC "${PROJECT_SOURCE_DIR}/BuilderPattern/include"
                           #PUBLIC "${PROJECT_SOURCE_DIR}/FactoryPattern/include"
                           )

    add_test(NAME builderTests COMMAND builderPatternTest)
    include(GoogleTest)

    gtest_discover_tests(builderPatternTest)
endif()
