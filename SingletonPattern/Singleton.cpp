/*
 * Singleton.cpp
 *
 *  Created on: Nov 7, 2023
 *      Author: pierrebeldor
 */

#include "Singleton.h"

namespace patterns {

Singleton::Singleton() {
	// TODO Auto-generated constructor stub

}

Singleton::~Singleton() {
	// TODO Auto-generated destructor stub
}

Singleton::Singleton(const Singleton &other) {
	// TODO Auto-generated constructor stub

}

Singleton::Singleton(Singleton &&other) {
	// TODO Auto-generated constructor stub

}

Singleton& Singleton::operator=(const Singleton &other) {
	// TODO Auto-generated method stub

	return *this;
}

Singleton& Singleton::operator=(Singleton &&other) {
	// TODO Auto-generated method stub
	return *this;
}



////////////////

EagerInitializedSingleton* EagerInitializedSingleton::instance = nullptr;

EagerInitializedSingleton* EagerInitializedSingleton::getInstance()
{
	if (instance == nullptr)
	{
		instance = new EagerInitializedSingleton();
	}

	return instance;
}


Singleton2* Singleton2::instance2 = nullptr;


Singleton2::Singleton2(const std::string value) : valueid(value)
{
}


Singleton2* Singleton2::getInstance(const std::string value)
{
	if (instance2 == nullptr)
	{
		instance2 = new Singleton2(value);
	}

	return instance2;
}

SingletonSafe* SingletonSafe::instanceSafe = nullptr;
std::mutex SingletonSafe::mutex;

SingletonSafe::SingletonSafe(const std::string value) : valueid(value)
{
}


SingletonSafe* SingletonSafe::getInstance(const std::string value)
{
	std::lock_guard<std::mutex> lock(mutex);

	if (instanceSafe == nullptr)
	{
		instanceSafe = new SingletonSafe(value);
	}

	return instanceSafe;
}

} /* namespace patterns */
