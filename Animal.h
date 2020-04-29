#pragma once
#include <iostream>
using namespace std;

class Animal 
{
private:
	string name;

public:
	virtual inline string getAnimalType() = 0;
	string inline getName();
	void inline setName(string name);
	virtual void inline makeNoise() = 0;

};
