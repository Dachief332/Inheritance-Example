#pragma once
#include "Animal.h"
#include <iostream>
using namespace std;

class Dog : public Animal
{
public:
	string getAnimalType();
	void makeNoise();
	void doDoggyThings();

};