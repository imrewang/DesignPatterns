#ifndef ABSTRACTVISITOR_H
#define ABSTRACTVISTTOR_H

#include<string>



using namespace std;

class Hospital;
class Restaurant;

class AbstractVisitor
{
public:
	virtual void visitHospital(Hospital* place) = 0;
	virtual void visitRestaurant(Restaurant* place) = 0;
};

#endif // !ABSTRACTVISITOR_H
