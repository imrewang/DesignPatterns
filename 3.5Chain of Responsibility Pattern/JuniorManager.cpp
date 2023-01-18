#include "JuniorManager.h"
JuniorManager::JuniorManager(const double& approvalLimit):AbstractManager()
{
	m_approvalLimit = approvalLimit;
}

void JuniorManager::handleRequest(const double& fee)
{
	cout << "Junior Manager: ";
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
