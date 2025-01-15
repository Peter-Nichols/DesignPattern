

if(BUILD_TESTING)
    add_executable(abstractFactoryPatternTest
        ComputerAbstractFactory_test.cpp
        ComputerFactory_test.cpp
        PersonalComputerFactory_test.cpp
        ServerFactory_test.cpp)
    
    target_link_libraries(abstractFactoryPatternTest PUBLIC gtest gmock gtest_main)
    target_link_libraries(abstractFactoryPatternTest PUBLIC abstractFactoryPattern)
    target_include_directories(abstractFactoryPatternTest
                           PUBLIC "${PROJECT_BINARY_DIR}"
                           PUBLIC "${PROJECT_SOURCE_DIR}/AbstractFactoryPattern/include"
                            )

    add_test(NAME abstractFactoryTests COMMAND abstractFactoryPatternTest)
    include(GoogleTest)

    gtest_discover_tests(abstractFactoryPatternTest)
endif()