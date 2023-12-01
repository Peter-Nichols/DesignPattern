#pragma once

#include "ComputerAbstractFactory.h"

namespace patterns
{

class ServerFactory : public ComputerAbstractFactory
{
public:
    ServerFactory(const std::string& ram, const std::string& hdd, const std::string& cpu);

    virtual ~ServerFactory() = default;

    ComputerInterface* createComputer() override;

private:
    std::string RAM;
    std::string HDD;
    std::string CPU;
};

} // namespace patterns
