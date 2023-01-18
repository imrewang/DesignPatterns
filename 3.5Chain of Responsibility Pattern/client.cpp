/*
假设我们工作中花费了一笔费用需要报销，
提交费用报销单时首先由直属上级领导审批是否可以报销，
如果额度超了权限这个报销单就会传到再上一级领导，直到有人接收处理。
*/

/*
该设计模式的参与者分别是：
Handler（AbstractManager）抽象接口
ConcreteHandler（JuniorManager IntermediateManager SeniorManager）实例处理者
Client 用户
*/

#include"JuniorManager.h"
#include"IntermediateManager.h"
#include"SeniorManager.h"

/*将所有处理者连成一条链，收到请求要么处理要么传给下一个处理者。*/

/*一个请求需要被多个对象中的某一个处理，但是到底是哪个对象必须在运行时根据条件决定。*/


int main() {
	AbstractManager* juniorManager = new JuniorManager(5000);
	AbstractManager* intermediateManager = new IntermediateManager(20000);
	AbstractManager* seniorManager = new SeniorManager(50000);


	juniorManager->setNextManager(intermediateManager);
	intermediateManager->setNextManager(seniorManager);

	int fee = 600;
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << "approval " << fee << endl;
		juniorManager->handleRequest(fee);
		fee *= 10;
	}
	return 0;


}