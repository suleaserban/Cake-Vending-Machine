#pragma once
#include <list>
#include "CommandTaker.h"
#include "RecipeCake.h"


class CommandPanel
{
private:
	list<RecipeCake> menu;
	CommandTaker commandTaker;
public:
	CommandPanel();

	void showProducts();
	void selectProduct(string name);
	void selectProduct(string name, int numberOfProducts);

	void showProductsInCarousel();
};