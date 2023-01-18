#include "IntermediateManager.h"

IntermediateManager::IntermediateManager(const double& approvalLimit)//:AbstractManager()
//�ڴ����������ʱ���������Ĺ��캯��û����ʾ���ø���Ĺ��캯���Ҹ����Լ��ṩ���޲ι��캯���������ø����Լ����޲ι��캯����
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
