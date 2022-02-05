#pragma once
#include <cstdlib>
#include <ctime>
#include "RecipeCake.h"
#include "CakeMaker.h"
#include "CarouselOfCakes.h"


class CommandTaker
{
private:
	RecipeCake carouselRecipe;
	CakeMaker cakeMaker;
	CarouselOfCakes carousel;
	bool checkCarouselOfCakes();
	void refillCarousel();
public:
	CommandTaker();

	Cake takeCommand(RecipeCake recipe);

	Cake* takeCommand(RecipeCake recipe, int nrOfCakes);

	Cake takeCommand(string nameOfCake);

	Cake* getCakesFromCarousel();
};