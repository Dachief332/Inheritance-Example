#pragma once
#include "Animal.h"
#include <iostream>
using namespace std;

class Cat : public Animal
{
public:
	string getAnimalType();
	void makeNoise();
	void doKittyThings();

};