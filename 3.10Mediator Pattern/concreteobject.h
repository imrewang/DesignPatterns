#ifndef CONCRETEOBJECT_H
#define CONCRETEOBJECT_H

#include"object.h"
#include"mediator.h"
#include<iostream>

//������������
class ConcreteBMCustomer:public Person {
private:
	Mediator* m_mediator;
public:
	void SendMsg(string msg);
	void GetMsg(string msg);
	void SetMediator(Mediator* mediator);
};

//������󱼳����
class ConcreteBZCustomer :public Person {
private:
	Mediator* m_mediator;
public:
	void SendMsg(string msg);
	void GetMsg(string msg);
	void SetMediator(Mediator* mediator);
};

//�������������
class ConcreteBMSellor :public Person {
private:
	Mediator* m_mediator;
public:
	void SendMsg(string msg);
	void GetMsg(string msg);
	void SetMediator(Mediator* mediator);
};

//������󱼳�����
class ConcreteBZSellor :public Person {
private:
	Mediator* m_mediator;
public:
	void SendMsg(string msg);
	void GetMsg(string msg);
	void SetMediator(Mediator* mediator);
};







#endif // !CONCRETEOBJECT_H
