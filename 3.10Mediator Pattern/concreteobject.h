#ifndef CONCRETEOBJECT_H
#define CONCRETEOBJECT_H

#include"object.h"
#include"mediator.h"
#include<iostream>

//具体对象宝马买家
class ConcreteBMCustomer:public Person {
private:
	Mediator* m_mediator;
public:
	void SendMsg(string msg);
	void GetMsg(string msg);
	void SetMediator(Mediator* mediator);
};

//具体对象奔驰买家
class ConcreteBZCustomer :public Person {
private:
	Mediator* m_mediator;
public:
	void SendMsg(string msg);
	void GetMsg(string msg);
	void SetMediator(Mediator* mediator);
};

//具体对象宝马卖家
class ConcreteBMSellor :public Person {
private:
	Mediator* m_mediator;
public:
	void SendMsg(string msg);
	void GetMsg(string msg);
	void SetMediator(Mediator* mediator);
};

//具体对象奔驰卖家
class ConcreteBZSellor :public Person {
private:
	Mediator* m_mediator;
public:
	void SendMsg(string msg);
	void GetMsg(string msg);
	void SetMediator(Mediator* mediator);
};







#endif // !CONCRETEOBJECT_H
