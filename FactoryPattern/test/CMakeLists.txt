

if(BUILD_TESTING)
    add_executable(factoryPatternTest ComputerFactory_test.cpp PersonalComputer_test.cpp ServerComputer_test.cpp)
    
    target_link_libraries(factoryPatternTest PUBLIC gtest gmock gtest_main)
    target_link_libraries(factoryPatternTest PUBLIC factoryPattern)
    target_include_directories(factoryPatternTest
                           PUBLIC "${PROJECT_BINARY_DIR}"
                           PUBLIC "${PROJECT_SOURCE_DIR}/FactoryPattern/include"
                           )

    add_test(NAME factoryTests COMMAND factoryPatternTest)
    include(GoogleTest)

    gtest_discover_tests(factoryPatternTest)
endif()