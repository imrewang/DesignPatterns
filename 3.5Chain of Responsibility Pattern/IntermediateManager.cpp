#include "IntermediateManager.h"

IntermediateManager::IntermediateManager(const double& approvalLimit)//:AbstractManager()
//在创建子类对象时候，如果子类的构造函数没有显示调用父类的构造函数且父类自己提供了无参构造函数，则会调用父类自己的无参构造函数。
{
	m_approvalLimit = approvalLimit;
	cout << "IntermediateManager::IntermediateManager" << m_approvalLimit << endl;
}

void IntermediateManager::handleRequest(const double& fee)
{
	cout << "Intermediate Manager: ";
	if (fee <= m_approvalLimit)
	{
		cout << "Success approval fee." << endl;
	}
	else if (0 == m_supervisorManager)
	{
		cout << "Sorry I can't approval." << endl;
	}
	else
	{
		cout << "Hand to my supervisor." << endl;
		m_supervisorManager->handleRequest(fee);
	}
}
