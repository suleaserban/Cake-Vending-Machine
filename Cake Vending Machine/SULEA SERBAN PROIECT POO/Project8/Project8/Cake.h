#pragma once
#include<string>
using namespace std;
#include<iostream>

class Cake
{
private:

	string name;

public:

	Cake();
	Cake(string name);
	string getName();
};