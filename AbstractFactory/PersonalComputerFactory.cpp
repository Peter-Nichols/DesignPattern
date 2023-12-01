
#include "PersonalComputerFactory.h"

#include "PersonalComputer.h"

/// @brief 
namespace patterns
{

/// @brief 
/// @param ram 
/// @param hdd 
/// @param cpu 
PersonalComputerFactory::PersonalComputerFactory(std::string ram, std::string hdd, std::string cpu)
{
    RAM = ram;
    HDD = hdd;
    CPU = cpu;
}

/// @brief 
/// @param other 
PersonalComputerFactory::PersonalComputerFactory(const PersonalComputerFactory& other) :
RAM(other.RAM),
HDD(other.HDD),
CPU(other.CPU)
{
    /*
    If there are pointer members, delete them to free memory
    copy other pointers to members pointers
    delete members of other pointers
    */

    /*
    this->RAM = other.RAM;
    this->HDD = other.HDD;
    this->CPU = other.CPU;
    */

}

/// @brief 
/// @param other 
PersonalComputerFactory::PersonalComputerFactory(PersonalComputerFactory&& other) :
RAM(other.RAM),
HDD(other.HDD),
CPU(other.CPU)
{
}

/// @brief 
/// @param other 
/// @return 
PersonalComputerFactory& PersonalComputerFactory::operator=(const PersonalComputerFactory& other)
{
    this->RAM = other.RAM;
    this->HDD = other.RAM;
    this->CPU = other.CPU;

    return *this;
}

/// @brief 
/// @param other 
/// @return 
PersonalComputerFactory& PersonalComputerFactory::operator=(PersonalComputerFactory&& other)
{
    this->RAM = other.RAM;
    this->HDD = other.RAM;
    this->CPU = other.CPU;

    return *this;
}

/// @brief 
/// @return 
ComputerInterface *PersonalComputerFactory::createComputer()
{
    return new PersonalComputer(RAM, HDD, CPU);
}

}