#pragma once
#include "MenuRepository.h"
#include "CommandTaker.h"


class CommandPanel {

private:
	MenuRepository menu;
	CommandTaker commandTaker;

public: 

	CommandPanel();
	void showProducts();
	void selectProduct(int id);
	void selectProduct(int id, int numberOfProducts);
	void showProductsInCarousel();
};