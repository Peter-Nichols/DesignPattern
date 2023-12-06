/*
 * Computer.h
 *
 * Created on: Nov 8, 2023
 * Author: Peter Nichols
 */

#ifndef DESIGNPATTERNS_BUILDERPATTERN_BUILDER_H_
#define DESIGNPATTERNS_BUILDERPATTERN_BUILDER_H_

#include <string>

namespace patterns {
class Builder
{
public:
	virtual void addFirstName(std::string fname) = 0;
	virtual void addLastName(std::string lname) = 0;
	virtual void addDOB(std::string DOB) = 0;
	virtual void addAddress(std::string address) = 0;

};

} /* namespace patterns */

#endif /* DESIGNPATTERNS_BUILDERPATTERN_BUILDER_H_ */
