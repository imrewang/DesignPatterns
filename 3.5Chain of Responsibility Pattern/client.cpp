/*
�������ǹ����л�����һ�ʷ�����Ҫ������
�ύ���ñ�����ʱ������ֱ���ϼ��쵼�����Ƿ���Ա�����
�����ȳ���Ȩ������������ͻᴫ������һ���쵼��ֱ�����˽��մ���
*/

/*
�����ģʽ�Ĳ����߷ֱ��ǣ�
Handler��AbstractManager������ӿ�
ConcreteHandler��JuniorManager IntermediateManager SeniorManager��ʵ��������
Client �û�
*/

#include"JuniorManager.h"
#include"IntermediateManager.h"
#include"SeniorManager.h"

/*�����д���������һ�������յ�����Ҫô����Ҫô������һ�������ߡ�*/

/*һ��������Ҫ����������е�ĳһ���������ǵ������ĸ��������������ʱ��������������*/


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