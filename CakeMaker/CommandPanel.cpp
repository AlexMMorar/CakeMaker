#include <iostream>
#include "CommandPanel.h"

using namespace std;

CommandPanel::CommandPanel() {
	cout << "Constructor" << endl;
}

void CommandPanel::showProducts() {
	cout << "---------Show products in Menu--------" << endl;
	std::vector<IRecipe*>products = menu.getMenu();
	for (int i = 0; i < products.size(); i++) {
		
		cout << " Id: " << products.at(i)->getId() << endl;
		cout << " Name: " << products.at(i)->getName() << endl;
		cout << " Origin: " << products.at(i)->getOrigin() << endl;
	}

	cout << "-------------End presentation ---------" << endl;

}

void CommandPanel::selectProduct(int id) {

}


void CommandPanel::selectProduct(int id, int numberOfProducts) {

}

void CommandPanel::showProductsInCarousel() {

}
