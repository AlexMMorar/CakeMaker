#pragma once
#include "IRecipe.h"
#include "Cake.h"

class CakeMaker {

private:

public:
	CakeMaker();
	Cake takeCommand(IRecipe* recipe);
	Cake takeCommand(std::string name);
};