#ifndef MEDIATOR_H
#define MEDIATOR_H

#include"object.h"
#include<string>

using namespace std;


class Person;


class Mediator
{
public:
	virtual void SetBMCustomer(Person* person);//���ò�Ʒ1���
	virtual void SetBZCustomer(Person* person);//���ò�Ʒ2���
	virtual void SetBMSeller(Person* person);//���ò�Ʒ1����
	virtual void SenBZSeller(Person* person);//���ò�Ʒ2���
	virtual void SendMsg(string msg, Person* person);//��Ϣ���ݽӿ�
};


#endif // !MEDIATOR_H
