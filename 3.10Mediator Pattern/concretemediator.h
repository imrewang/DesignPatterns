#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

#include"mediator.h"

class ConcretrMediator2ndCarSalesShop:public Mediator
{
private:
	//�˴������ָ��������������棬������ʵ�ֵ��Զ�Ķ��󽻻�
	Person* m_BMCustomer;
	Person* m_BZCustomer;
	Person* m_BMSeller;
	Person* m_BZSeller;
public:
	virtual void SetBMCustomer(Person* person);//���ò�Ʒ1���
	virtual void SetBZCustomer(Person* person);//���ò�Ʒ2���
	virtual void SetBMSeller(Person* person);//���ò�Ʒ1����
	virtual void SenBZSeller(Person* person);//���ò�Ʒ2���
	virtual void SendMsg(string msg, Person* person);//��Ϣ���ݽӿ�
};


#endif // !CONCRETEMEDIATOR_h
