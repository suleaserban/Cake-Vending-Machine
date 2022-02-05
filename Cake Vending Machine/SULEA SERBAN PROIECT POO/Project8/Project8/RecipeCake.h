#pragma once
#include<iostream>
#include<string>
using namespace std;

class RecipeCake
{
private:
	string name;
	int time;
	RecipeCake* urm;
public:
	RecipeCake();
	RecipeCake(string name, int time);
	string getName();
	int getTime();
};