#ifndef SENIORMANAGER_H
#define SENIORMANAGER_H

/*ConcreteHandler��JuniorManager IntermediateManager SeniorManager��ʵ��������*/

#include"AbstractManager.h"

class SeniorManager :public AbstractManager
{
public:
	SeniorManager(const double& approvalLimit);

protected:
	void handleRequest(const double& fee);
};

#endif // !SENIORMANAGER_H
