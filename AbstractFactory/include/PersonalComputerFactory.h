
#include "ComputerInterface.h"
#include "ComputerAbstractFactory.h"

namespace patterns
{
class PersonalComputerFactory : public ComputerAbstractFactory
{
public:
    PersonalComputerFactory(std::string ram, std::string hdd, std::string cpu);
    PersonalComputerFactory(const PersonalComputerFactory& other);
    PersonalComputerFactory(PersonalComputerFactory&& other);

    PersonalComputerFactory& operator=(const PersonalComputerFactory& other);
    PersonalComputerFactory& operator=(PersonalComputerFactory&& other);


    virtual ~PersonalComputerFactory(){}

    ComputerInterface* createComputer() override;


private:
    std::string RAM;
    std::string HDD;
    std::string CPU;
};

} // namespace patterns
