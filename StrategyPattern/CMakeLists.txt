#####################################################################
# CMakeLists.txt
# Created on: Dec 12, 2023
#Author: Peter Nichols
#####################################################################

add_library(strategyPattern STATIC)
target_sources(strategyPattern PRIVATE Item.cpp)
target_sources(strategyPattern PRIVATE ShoppingCart.cpp)
target_sources(strategyPattern PRIVATE CreditCardStrategy.cpp)
target_sources(strategyPattern PRIVATE PaypalStrategy.cpp)
target_sources(strategyPattern PRIVATE TestStrategyPattern.cpp)

target_include_directories(strategyPattern PUBLIC "include")
