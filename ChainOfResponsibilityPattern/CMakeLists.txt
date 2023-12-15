#####################################################################
# CMakeLists.txt
# Created on: Dec 12, 2023
# Author: Peter Nichols
#####################################################################

add_library(chainOfResponsibilityPattern STATIC)
target_sources(chainOfResponsibilityPattern PRIVATE Currency.cpp)
target_sources(chainOfResponsibilityPattern PRIVATE Dollar50Dispense.cpp)
target_sources(chainOfResponsibilityPattern PRIVATE Dollar20Dispense.cpp)
target_sources(chainOfResponsibilityPattern PRIVATE Dollar10Dispense.cpp)
target_sources(chainOfResponsibilityPattern PRIVATE ATMDispenseChain.cpp)
target_sources(chainOfResponsibilityPattern PRIVATE TestChainOfResponsibilityPattern.cpp)

target_include_directories(chainOfResponsibilityPattern PUBLIC "include")