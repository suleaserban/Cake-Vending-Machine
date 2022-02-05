#include "Windows.h"
#include "CommandTaker.h"


CommandTaker::CommandTaker()
{
	refillCarousel();
}

Cake CommandTaker::takeCommand(RecipeCake recipe)
{
	Cake prajitura;
	prajitura = carousel.getCake(recipe.getName());
	if (prajitura.getName() == "")
	{
		
		return cakeMaker.takeCommand(recipe);
	}
	else {
		system("CLS");
		cout << "Prajitura dorita se afla in carousel.";
		Sleep(5000);
	}
	if (!checkCarouselOfCakes())
	{
		
		refillCarousel();
	}
	return prajitura;
}
void CommandTaker::refillCarousel()
{
	string name[] = { "Fanta","Snikers","Indiana","Bucuresti","Kinder","Tort","Negresa","Dobos","Tiramisu","Urda","Savarina","Branzoaica" };
	bool ok = true;
	while (ok)
	{
		
		RecipeCake recipe(name[carousel.getCurrentCapacity()+1], 0);
		ok = carousel.addCake(cakeMaker.takeCommand(recipe));
	}
}

Cake* CommandTaker::takeCommand(RecipeCake recipe, int nrOfCakes)
{
	Cake cakes[20];
	for (int i = 0; i < nrOfCakes; i++)
	{
		for (int time = recipe.getTime() ; time > 0; time--)
		{
			system("CLS");
			cout << "Asteptati va rog";
			Sleep(1000);
		}
		cakes[i] = cakeMaker.takeCommand(recipe);
	}
	return cakes;
}



Cake* CommandTaker::getCakesFromCarousel()
{
	return carousel.storage;
}
Cake CommandTaker::takeCommand(string nameOfCake) { return Cake(); }

bool CommandTaker::checkCarouselOfCakes()
{
	if (carousel.getCurrentCapacity() <= 3)
		return false;
	else
		return true;
}