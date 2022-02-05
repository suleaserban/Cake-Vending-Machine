#include "CarouselOfCakes.h"



bool CarouselOfCakes::addCake(Cake cake)
{
	if (capacity >= maxCapacity)
		return false;
	storage[capacity++] = cake;
	return true;
}

Cake CarouselOfCakes::getCake(string name)
{	
	unsigned int i = 0;
	Cake cake("");
	
	for (; i < capacity; i++)
		if (storage[i].getName() == name)
		{
			cake = storage[i];
			capacity--;
			break;
		}
	for (; i < capacity; i++)
		storage[i] = storage[i + 1];
	storage[i] = Cake("");
	return cake;
}
CarouselOfCakes::CarouselOfCakes()
{
	capacity = 0;
}


int CarouselOfCakes::getCurrentCapacity()
{
	return CarouselOfCakes::capacity;
}