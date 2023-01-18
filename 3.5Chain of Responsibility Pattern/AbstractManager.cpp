#include "AbstractManager.h"
AbstractManager::AbstractManager() :m_supervisorManager(0),m_approvalLimit(0)
{
	cout << "AbstractManager::AbstractManager()"<<m_approvalLimit << endl;
}

void AbstractManager::setNextManager(AbstractManager* manager)
{
	m_supervisorManager = manager;
}
