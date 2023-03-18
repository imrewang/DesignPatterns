#include "ConcreteVisitor.h"
Doctor::Doctor()
{
}

void Doctor::visitHospital(Hospital* place)
{
	string str = place->getName();
	cout << "Doctor visit " << str << " for service patient." << endl;
}

void Doctor::visitRestaurant(Restaurant* place)
{
	string str = place->getName();
	cout << "Doctor visit " << str << " to eat a meal." << endl;
}

Chef::Chef()
{
}

void Chef::visitHospital(Hospital* place)
{
	string str = place->getName();
	cout << "Chef visit " << str << " get medical advice." << endl;
}

void Chef::visitRestaurant(Restaurant* place)
{
	string str = place->getName();
	cout << "Chef visit " << str << " for cooking." << endl;
}
