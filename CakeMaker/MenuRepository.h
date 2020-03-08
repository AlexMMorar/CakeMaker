#pragma once
#include <string>
#include "IRecipe.h"
#include <vector>

class MenuRepository {

private:
	std::string pathToFile;
	std::vector<IRecipe*> products;

	void loadMenu();
public:
	MenuRepository();
	MenuRepository(std::string pathToFile);
	std::vector<IRecipe*> getMenu();
	IRecipe* getOrder(int id);
};