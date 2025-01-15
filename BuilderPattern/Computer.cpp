/*
 * Computer.cpp
 *
 *  Created on: Nov 8, 2023
 *  Author: Peter Nichols
 */

#include "Computer.h"

#include <iostream>
#include <string>

namespace patterns {

Computer::Computer()
{

}

Computer::Computer(ComputerBuilder builder)
{
	this->HDD = builder.getHDD();
	this->RAM = builder.getRAM();
	this->CPU = builder.getCPU();
	this->isBluetoothEnabled = builder.isIsBluetoothEnabled();
	this->isGraphicCardEnabled = builder.isIsGraphicCardEnabled();
}

Computer::Computer(const Computer &other)
{
	this->RAM = other.RAM;
	this->HDD = other.HDD;
	this->CPU = other.CPU;
}

Computer::Computer(Computer &&other)
{

}

Computer& Computer::operator=(const Computer &other) {
	return *this;
}

Computer& Computer::operator=(Computer &&other) {
	return *this;
}

void Computer::setHDD(const std::string &hdd)
{
    HDD = hdd;
}

void Computer::setCPU(const std::string &cpu)
{
    CPU = cpu;
}

void Computer::setRAM(const std::string &ram)
{
    RAM = ram;
}


std::string& Computer::getHDD()
{
	return HDD;
}

std::string& Computer::getCPU()
{
	return CPU;
}

std::string& Computer::getRAM()
{
	return RAM;
}

void Computer::print() const
{
	std::cout << "Buider Pattern Computer class\n\t RAM: " << RAM << "  HDD: " << HDD << "  CPU: "  << CPU
			  << "  Graphics enabled: " << isGraphicCardEnabled << "  Bluetooth Enabled: " << isBluetoothEnabled << "\n";
}


void Computer::setIsBluetoothEnabled(bool isBluetoothEnabled)
{
	this->isBluetoothEnabled = isBluetoothEnabled;
}

void Computer::setIsGraphicCardEnabled(bool isGraphicCardEnabled)
{
	this->isGraphicCardEnabled = isGraphicCardEnabled;
}

bool Computer::isIsBluetoothEnabled() const
{
	return isBluetoothEnabled;
}

bool Computer::isIsGraphicCardEnabled() const
{
	return isGraphicCardEnabled;
}

} /* namespace patterns */
