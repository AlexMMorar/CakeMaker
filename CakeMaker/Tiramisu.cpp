#include "./Tiramisu.h"

Tiramisu::Tiramisu(int id, std::string name, std::string origin)
{
	this->id = id;
	this->name = name;
	this->origin = origin;
}

int Tiramisu::getId()
{
	return id;
}

std::string Tiramisu::getName()
{
	return name;
}

std::string Tiramisu::getOrigin()
{
	return origin;
}
