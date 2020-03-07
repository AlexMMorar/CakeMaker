#pragma once
#include <string>
#include "IRecipe.h"
#include <array>

class MenuRepository {

private:
	std::string pathToFile;

	void loadMenu();
public:
	MenuRepository();
	MenuRepository(std::string pathToFile);
	IRecipe* getMenu();
	IRecipe* getOrder(int id);

	
};