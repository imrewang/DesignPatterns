#ifndef OBJECT_H
#define OBJECT_H

#include<string>
#include"mediator.h"

using namespace std;

class Mediator;

class Person {
public:
	virtual void SendMsg(string msg);
	virtual void GetMsg(string msg);
	virtual void SetMediator(Mediator* mediator);
};


#endif // !OBJECT_H
