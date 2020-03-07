#include "CommandTaker.h"

bool CommandTaker::checkCarouselOfCakes()
{
	return false;
}

bool CommandTaker::refillCarousel()
{
	return false;
}

CommandTaker::CommandTaker()
{
}

Cake CommandTaker::takeCommand(IRecipe* recipe)
{
	return Cake();
}

Cake* CommandTaker::takeCommand(IRecipe* recipe, int nrOfCakes)
{
	return nullptr;
}


Cake* CommandTaker::getCakesFromCarousel()
{
	return nullptr;
}
