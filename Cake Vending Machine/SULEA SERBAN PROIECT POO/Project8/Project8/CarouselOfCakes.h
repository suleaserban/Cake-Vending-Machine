#pragma once
#include "Cake.h"

class CarouselOfCakes
{
private:
	unsigned int capacity;
	 unsigned int maxCapacity = 10;
	 unsigned int lowLimit = 3;
public:

	CarouselOfCakes();
	bool addCake(Cake cake);
	Cake getCake(string name);
	int getCurrentCapacity();
	Cake storage[13];
};