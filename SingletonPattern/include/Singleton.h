/*
 * Singleton.h
 *
 *  Created on: Nov 7, 2023
 *      Author: pierrebeldor
 */

#ifndef DESIGNPATTERNS_SINGLETONPATTERN_SINGLETON_H_
#define DESIGNPATTERNS_SINGLETONPATTERN_SINGLETON_H_

#include <string>
#include  <mutex>

namespace patterns {

/*
 *
 */
class Singleton {
private:

public:
	Singleton();
	virtual ~Singleton();
	Singleton(const Singleton &other);
	Singleton(Singleton &&other);
	Singleton& operator=(const Singleton &other);
	Singleton& operator=(Singleton &&other);
};


class EagerInitializedSingleton
{
private:
	//Private constructor to avoid client application using the constructor
	EagerInitializedSingleton() {}

	static EagerInitializedSingleton* instance; // = nullptr; // = new EagerInitializedSingleton();

public:

	//Singleton should not be cloneable.
	EagerInitializedSingleton(Singleton& other) = delete;

	//Singleton should not be assignabled.
	void operator=(const EagerInitializedSingleton& other) = delete;

	static EagerInitializedSingleton* getInstance();
};

//EagerInitializedSingleton* EagerInitializedSingleton::instance = nullptr;

//EagerInitializedSingleton* EagerInitializedSingleton::getInstance();
//{
//	if (instance == nullptr)
//	{
//		instance = new EagerInitializedSingleton();
//	}

//	return instance;
//}


class Singleton2
{
private:
	static Singleton2* instance2;
	std::string valueid;
	Singleton2(const std::string value);


protected:


public:
	static Singleton2* getInstance(const std::string value);
	
	std::string getValue() const
	{
		return valueid;
	}
};


class SingletonSafe
{
private:
	static SingletonSafe* instanceSafe;
	static std::mutex mutex;
	std::string valueid;
	SingletonSafe(const std::string value);


protected:


public:
	static SingletonSafe* getInstance(const std::string value);
	std::string getValue() const
	{
		return valueid;
	}
};


} /* namespace patterns */

#endif /* DESIGNPATTERNS_SINGLETONPATTERN_SINGLETON_H_ */
