//�ͻ���

/*#include<QCoreApplication>*/
#include"simplefactory.h"

int main(int argc, char* argv[]) {
	/*argc
	���������ܵĲ�����������argc��¼���û������г����������������Ĳ����ܵĸ�����
	*/
	/*argv[ ]
	��argc�����������е�0�������ǿ�ִ�г���/�ļ���ȫ���������Ĳ������û�������Ĳ�����
	*/
	SimpleFactory bmFactory;
	BM* car1 = bmFactory.CreaterBM("BM111");
	BM* car2 = bmFactory.CreaterBM("BM222");
	car1->GetBM();
	car2->GetBM();
	return 0;
}
