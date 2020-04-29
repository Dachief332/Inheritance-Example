#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

#include <iostream>
using namespace std;

int main()
{
	class doKittythings;
	class doDoggythings;

	Dog x;
	Cat y;
	y.setName("Louis");
	cout << "---------Test For cat Class---------" << endl;
	cout << y.getName() << endl;
	cout << y.getAnimalType() << endl;
	y.makeNoise();
	y.doKittyThings();

	x.setName("Molly");
	cout << "---------Test For dog Class---------" << endl;
	cout << x.getName() << endl;
	cout << x.getAnimalType() << endl;
	x.makeNoise();
	x.doDoggyThings();

	system("pause");
	return 0;
}