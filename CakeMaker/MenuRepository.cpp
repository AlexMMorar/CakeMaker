#include "MenuRepository.h"
#include "Tiramisu.h"


MenuRepository::MenuRepository()
{
	loadMenu();
}

void MenuRepository::loadMenu()
{
	products.push_back(new Tiramisu(1, "Tiramisu", "Olanda"));
}

MenuRepository::MenuRepository(std::string pathToFile)
{

}

std::vector<IRecipe*> MenuRepository::getMenu()
{
	return products;
}

IRecipe* MenuRepository::getOrder(int id)
{
	IRecipe* rep = nullptr;

	for (int i = 0; i < products.size(); i++)
	{
		if (products.at(i)->getId() == id)
			rep = products.at(i);
	}

	return rep;
}
