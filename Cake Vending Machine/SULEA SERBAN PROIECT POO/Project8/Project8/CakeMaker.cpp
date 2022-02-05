#include "CakeMaker.h"



Cake CakeMaker::takeCommand(RecipeCake recipe)
{
	Cake cake(recipe.getName());
	return cake;
}
CakeMaker::CakeMaker()
{

}