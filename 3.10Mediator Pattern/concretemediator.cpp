#include "concretemediator.h"
void ConcretrMediator2ndCarSalesShop::SetBMCustomer(Person* person)
{
	m_BMCustomer = person;
}

void ConcretrMediator2ndCarSalesShop::SetBZCustomer(Person* person)
{
	m_BZCustomer = person;
}

void ConcretrMediator2ndCarSalesShop::SetBMSeller(Person* person)
{
	m_BMSeller = person;
}

void ConcretrMediator2ndCarSalesShop::SenBZSeller(Person* person)
{
	m_BZSeller = person;
}

void ConcretrMediator2ndCarSalesShop::SendMsg(string msg, Person* person)
{
	//�������Ϊ���飬��ô��������������������Ϣ
	if (person == m_BMCustomer)
	{
		m_BMSeller->GetMsg(msg);
	}
	else if (person == m_BZCustomer)
	{
		m_BZSeller->GetMsg(msg);
	}
	else if (person == m_BMSeller)
	{
		m_BMCustomer->GetMsg(msg);
	}
	else if (person == m_BZSeller)
	{
		m_BZCustomer->GetMsg(msg);
	}
}
