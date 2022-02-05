#include "CommandPanel.h"
#include "Windows.h"
CommandPanel::CommandPanel()
{
	menu.push_back(RecipeCake("Fanta", 1));
	menu.push_back(RecipeCake("Snikers", 2));
	menu.push_back(RecipeCake("Indiana", 3));
	menu.push_back(RecipeCake("Bucuresti", 4));
	menu.push_back(RecipeCake("Kinder", 5));
	menu.push_back(RecipeCake("Tort", 6));
	menu.push_back(RecipeCake("Negresa", 7));
	menu.push_back(RecipeCake("Dobos", 8));
	menu.push_back(RecipeCake("Tiramisu", 3));
	menu.push_back(RecipeCake("Urda", 5));
	menu.push_back(RecipeCake("Savarina", 4));
	menu.push_back(RecipeCake("Branzoaica", 5));
}

void CommandPanel::showProducts()
{
	system("CLS");
	printf("-----------------MENIU-----------------\n");
	for (list<RecipeCake>::iterator i = menu.begin(); i != menu.end(); ++i)
		cout << " " << i->getName() << " dureaza " << i->getTime() << " secunde\n";
}
void CommandPanel::showProductsInCarousel()
{
	Cake* cakes = commandTaker.getCakesFromCarousel();
	system("CLS");
	cout << "  Caruselul este:    \n";
	do {
		cout << "  " << cakes->getName() << endl;
		*cakes++;
	} while (cakes->getName() != "");
}

void CommandPanel::selectProduct(string name)
{
	RecipeCake recipe = RecipeCake("", 0);
	for (list<RecipeCake>::iterator i = menu.begin(); i != menu.end(); ++i)
		if (i->getName() == name)
			recipe = RecipeCake(i->getName(), i->getTime());
	if (recipe.getName() == "")
	{
		system("CLS");
		cout << "prajitura nu este in meniu";
		Sleep(5000);
	}
	else {
		commandTaker.takeCommand(recipe);
		system("CLS");
		cout << "";
		Sleep(5000);
	}
}


void CommandPanel::selectProduct(string name, int numberOfProducts)
{
	RecipeCake recipe = RecipeCake("", 0);
	for (list<RecipeCake>::iterator i = menu.begin(); i != menu.end(); ++i)
		if (i->getName() == name)
			recipe = RecipeCake(i->getName(), i->getTime());
	if (recipe.getName() == "")
	{
		system("CLS");
		cout << "prajitura nu este in meniu";
		Sleep(5000);
	}
	else {
		commandTaker.takeCommand(recipe, numberOfProducts);
		system("CLS");
		cout << "Pofta mare!!!";
		Sleep(5000);
	}
}

