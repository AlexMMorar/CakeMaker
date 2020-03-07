#pragma once
#include "Cake.h"
#include "IRecipe.h"
#include "CommandRepository.h"
#include "CakeMaker.h"
#include "CarouselOfCakes.h"

class CommandTaker {

private:
	CommandRepository repo;
	CakeMaker cakeMaker;
	CarouselOfCakes storage;

	bool checkCarouselOfCakes();
	bool refillCarousel();
public:
	CommandTaker();
	Cake takeCommand(IRecipe *recipe);
	Cake* takeCommand(IRecipe *recipe, int nrOfCakes);
	Cake* getCakesFromCarousel();
};