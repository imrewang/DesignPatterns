#ifndef ABSTRACTMANAGER_H
#define ABSTRACTMANAGER_H

/*Handler（AbstractManager）抽象接口*/

#include<iostream>

using namespace std;


class AbstractManager {
public:
	AbstractManager();

	void setNextManager(AbstractManager* manager);
	virtual void handleRequest(const double& fee) = 0;

protected:
	AbstractManager* m_supervisorManager;//next respons chain下一个响应链
	double m_approvalLimit;//manager's limit of reimbursement经理报销限额
};

#endif // !ABSTRACTMANAGER_H
