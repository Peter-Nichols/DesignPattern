/***************************************************************************
 * Computer.h
 *
 * Created on: Nov 8, 2023
 * Author: Peter Nichols
 ***************************************************************************/

#ifndef DESIGNPATTERNS_BUILDERPATTERN_COMPUTER_H_
#define DESIGNPATTERNS_BUILDERPATTERN_COMPUTER_H_

#include <string>
#include <memory>

#include "ComputerInterface.h"

namespace patterns {

/*
 *
 */

class ComputerBuilder;

class Computer : public ComputerInterface {
public:

	explicit Computer(ComputerBuilder builder);
	Computer();
	virtual ~Computer() = default;
	Computer(const Computer &other);
	Computer(Computer &&other);
	Computer& operator=(const Computer &other);
	Computer& operator=(Computer &&other);


    std::string& getHDD() override;
    std::string& getRAM() override;
    std::string& getCPU() override;

	bool isIsBluetoothEnabled() const;
	bool isIsGraphicCardEnabled() const;
	
	void setHDD(const std::string &hdd) override;
	void setCPU(const std::string &cpu) override;
	void setRAM(const std::string &ram) override;
	void print() const override;

	void setIsBluetoothEnabled(bool isBluetoothEnabled);
	void setIsGraphicCardEnabled(bool isGraphicCardEnabled);

private:
	std::string HDD;
	std::string RAM;
	std::string CPU;

	bool isGraphicCardEnabled;
	bool isBluetoothEnabled;
};

//Builder class
class ComputerBuilder
{
public:
    ComputerBuilder(const std::string& hdd, const std::string& ram, const std::string& cpu) :
	HDD(hdd), RAM(ram), CPU(cpu), isBluetoothEnabled(false), isGraphicCardEnabled(false)
	{
	}
	
	void createNewComputer()
	{
	}

	ComputerBuilder* setGraphicCardEnabled(bool isGraphicCardEnabled)
	{
		this->isGraphicCardEnabled = isGraphicCardEnabled;
		return this;
	}

	ComputerBuilder* setBluetoothEnabled(bool isBluetoothEnabled)
	{
		this->isBluetoothEnabled = isBluetoothEnabled;
		return this;
	}

	Computer build()
	{
		return Computer(*this);
	}

	void setIsBluetoothEnabled(bool isBluetoothEnabled)
	{
		this->isBluetoothEnabled = isBluetoothEnabled;
	}

	void setIsGraphicCardEnabled(bool isGraphicCardEnabled)
	{
		this->isGraphicCardEnabled = isGraphicCardEnabled;
	}

	void setHDD(const std::string &hdd)
	{
		this->HDD = hdd;
	}

	void setRAM(const std::string &ram)
	{
		this->RAM = ram;
	}

	void setCPU(const std::string &cpu)
	{
		this->CPU = cpu;
	}

	const std::string& getHDD() const
	{
		return HDD;
	}

	bool isIsBluetoothEnabled() const
	{
		return isBluetoothEnabled;
	}

	bool isIsGraphicCardEnabled() const
	{
		return isGraphicCardEnabled;
	}

	const std::string& getRAM() const
	{
		return RAM;
	}

protected:
	Computer computer;

private:
	//Required fields
	std::string HDD;
	std::string RAM;
	std::string CPU;

	//Optional parameters
	bool isGraphicCardEnabled;
	bool isBluetoothEnabled;
};

} /* namespace patterns */

#endif /* DESIGNPATTERNS_BUILDERPATTERN_COMPUTER_H_ */
