#ifndef ABSTRACTMANAGER_H
#define ABSTRACTMANAGER_H

/*Handler��AbstractManager������ӿ�*/

#include<iostream>

using namespace std;


class AbstractManager {
public:
	AbstractManager();

	void setNextManager(AbstractManager* manager);
	virtual void handleRequest(const double& fee) = 0;

protected:
	AbstractManager* m_supervisorManager;//next respons chain��һ����Ӧ��
	double m_approvalLimit;//manager's limit of reimbursement�������޶�
};

#endif // !ABSTRACTMANAGER_H
