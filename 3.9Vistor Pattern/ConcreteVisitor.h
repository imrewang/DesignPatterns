#ifndef CONCRETEVISITOR_H
#define CONCRETEVISITOR_H


#include"AbstractVisitor.h"
#include"ConcreteElement.h"

#include<iostream>


class Doctor : public AbstractVisitor
{
public:
	Doctor();
	virtual void visitHospital(Hospital* place);
	virtual void visitRestaurant(Restaurant* place);
};


class Chef : public AbstractVisitor
{
public:
	Chef();
	virtual void visitHospital(Hospital* place);
	virtual void visitRestaurant(Restaurant* place);
};



#endif // !CONCRETEVISITOR_H
