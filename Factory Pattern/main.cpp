//�ͻ���
#include"simplefactory.h"

int main() {
	Factory* factoryA = new BM111Factory();
	Factory* factoryB = new BM222Factory();
	BM* carA = factoryA->CreaterBMFactory();/*A.B, AΪһ��ʵ��������(Ҳ���Ƕ���)���߽ṹ��, BΪA��һ����Ա.*/
	BM* carB = factoryB->CreaterBMFactory();/*a->b, ��ָ��ָ�����Ա�������, �ȼ��� (*a).b��A ��ָ��ṹ��������ָ��, B��A�еĳ�Ա.*/
	carA->GetBM();/*BM* carA��*��->*/
	carB->GetBM();
	return 0;
}