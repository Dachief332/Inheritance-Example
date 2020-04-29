#pragma once
#include <iostream>
using namespace std;

class Animal 
{
private:
	string name;

public:
	virtual string getAnimalType();
	string getName();
	void setName(string name);
	virtual void makeNoise();

};