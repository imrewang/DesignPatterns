#ifndef INTERMEDIATEMANAGER_H
#define INTERMEDIATEMANAGER_H

/*ConcreteHandler��JuniorManager IntermediateManager SeniorManager��ʵ��������*/

#include"AbstractManager.h"

class IntermediateManager :public AbstractManager
{
public:
	IntermediateManager(const double& approvalLimit);

protected:
	void handleRequest(const double& fee);
};

#endif // !INTERMEDIATEMANAGER_H
