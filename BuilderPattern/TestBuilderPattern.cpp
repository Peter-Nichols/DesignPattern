

#include "TestBuilderPattern.h"

#include <iostream>

#include "Computer.h"


namespace patterns
{
void TestBuilderPattern::BuildAndPrintComputer()
{
    ComputerBuilder* builder = new ComputerBuilder("4 GB", "500 GB", "2.5 GHz");
    
    Computer computer = builder->build();
    
    std::cout << "Before enabling Bluetooth and Grtaphics card\n";
    computer.print();

    Computer computer2 = builder->setGraphicCardEnabled(true)->setBluetoothEnabled(true)->build();

    std::cout << "After enabling Bluetooth and Graphics card\n";
    computer2.print();
}

} // namespace patterns
