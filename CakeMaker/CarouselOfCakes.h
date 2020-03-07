#pragma once
#include<string>
#include"Cake.h"

class CarouselOfCakes {

private:
	Cake* cakeStorage;
	static const int maxCapacity = 10;
	static const int lowLimit = 3;
public:
	CarouselOfCakes();
	bool addCake(Cake cake);
	Cake getCake(std::string);
	int getCurrentCapacity();
};
