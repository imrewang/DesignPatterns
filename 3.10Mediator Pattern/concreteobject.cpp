#include "concreteobject.h"
void ConcreteBMCustomer::SendMsg(string msg)
{
	m_mediator->SendMsg(msg, this);
}

void ConcreteBMCustomer::GetMsg(string msg)
{
	cout << "ConcreteBMCustomer::GetMsg BMCustomer get message from CarSalesShop: " << msg << endl;
}

void ConcreteBMCustomer::SetMediator(Mediator* mediator)
{
	m_mediator = mediator;
}

void ConcreteBZCustomer::SendMsg(string msg)
{
	m_mediator->SendMsg(msg, this);
}

void ConcreteBZCustomer::GetMsg(string msg)
{
	cout << "ConcreteBZCustomer::GetMsg BZCustomer get message from CarSalesShop: " << msg << endl;
}

void ConcreteBZCustomer::SetMediator(Mediator* mediator)
{
	m_mediator = mediator;
}

void ConcreteBMSellor::SendMsg(string msg)
{
	m_mediator->SendMsg(msg, this);
}

void ConcreteBMSellor::GetMsg(string msg)
{
	cout << "ConcreteBMSellor::GetMsg BMSellor get message from CarSalesShop: " << msg << endl;
}

void ConcreteBMSellor::SetMediator(Mediator* mediator)
{
	m_mediator = mediator;
}

void ConcreteBZSellor::SendMsg(string msg)
{
	m_mediator->SendMsg(msg, this);
}

void ConcreteBZSellor::GetMsg(string msg)
{
	cout << "ConcreteBZSellor::GetMsg BZSellor get message from CarSalesShop: " << msg << endl;
}

void ConcreteBZSellor::SetMediator(Mediator* mediator)
{
	m_mediator = mediator;
}
