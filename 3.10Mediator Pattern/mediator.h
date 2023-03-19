#ifndef MEDIATOR_H
#define MEDIATOR_H

#include"object.h"
#include<string>

using namespace std;


class Person;


class Mediator
{
public:
	virtual void SetBMCustomer(Person* person);//设置产品1买家
	virtual void SetBZCustomer(Person* person);//设置产品2买家
	virtual void SetBMSeller(Person* person);//设置产品1卖家
	virtual void SenBZSeller(Person* person);//设置产品2买家
	virtual void SendMsg(string msg, Person* person);//消息传递接口
};


#endif // !MEDIATOR_H
