#pragma once
#include <string>


class IRecipe {

public:
	virtual std::string getName() = 0;
	virtual std::string getOrigin() = 0;
	virtual int getId() = 0;
};