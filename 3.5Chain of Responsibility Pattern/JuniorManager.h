#ifndef JUNIORMANAGER_H
#define JUNIORMANAGER_H

/*ConcreteHandler��JuniorManager IntermediateManager SeniorManager��ʵ��������*/

#include"AbstractManager.h"

class JuniorManager :public AbstractManager
{
public:
	JuniorManager(const double& approvalLimit);

protected:
	void handleRequest(const double& fee);
};
	

#endif // !JUNIORMANAGER_H
