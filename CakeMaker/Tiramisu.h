#pragma once
#include "IRecipe.h"
#include <string>

class Tiramisu : public IRecipe {


private: 
	int id;
	std::string name;
	std::string origin;

public:
	Tiramisu(int id, std::string name, std::string origin);
	int getId();
	std::string getName();
	std::string getOrigin();
};