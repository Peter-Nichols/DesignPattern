#pragma once


#include "ComputerInterface.h"


namespace patterns
{
class ComputerAbstractFactory
{
public:
/*
    ComputerAbstractFactory(std::string ram, std::string hdd, std::string cpu);
    ComputerAbstractFactory(const ComputerAbstractFactory& other);
    ComputerAbstractFactory(ComputerAbstractFactory&& other);

    ComputerAbstractFactory& operator=(const ComputerAbstractFactory& other);
    ComputerAbstractFactory& operator=(ComputerAbstractFactory&& other);
*/


    virtual ~ComputerAbstractFactory() = default;

    virtual ComputerInterface* createComputer() = 0;


private:
/*
    std::string RAM;
    std::string HDD;
    std::string CPU;
*/
};

} // namespace patterns