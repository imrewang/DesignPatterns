#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

#include"mediator.h"

class ConcretrMediator2ndCarSalesShop:public Mediator
{
private:
	//此处保存的指针可用数组来代替，这样能实现单对多的对象交互
	Person* m_BMCustomer;
	Person* m_BZCustomer;
	Person* m_BMSeller;
	Person* m_BZSeller;
public:
	virtual void SetBMCustomer(Person* person);//设置产品1买家
	virtual void SetBZCustomer(Person* person);//设置产品2买家
	virtual void SetBMSeller(Person* person);//设置产品1卖家
	virtual void SenBZSeller(Person* person);//设置产品2买家
	virtual void SendMsg(string msg, Person* person);//消息传递接口
};


#endif // !CONCRETEMEDIATOR_h
