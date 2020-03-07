#include "CakeMaker.h"

CakeMaker::CakeMaker()
{
}

Cake CakeMaker::takeCommand(IRecipe* recipe)
{
	return Cake();
}

Cake CakeMaker::takeCommand(std::string name)
{
	return Cake();
}
