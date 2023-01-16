//�û�Client

/*
Flyweight ������Ԫ�ӿ�
ConcreteFlyWeight ������Ԫ�ӿڵ�����Ԫ��ʵ�֣��ö���ʱ�ɹ���ģ��д���״̬�������ڲ���
ComplexFlyWeight ������Ԫ�ӿڸ�����Ԫ��ʵ�֣��ö��󲻿ɹ����������ڲ�����ԪԪ�ؿɹ���
FlyWeightFactory ����������Ԫ����
Client �û�
*/

/*
FlyWeightFactory���𴴽��͹�����Ԫ��Ԫ��
��һ���ͻ�������ʱ��������Ҫ��鵱ǰ��������Ƿ��з��������Ķ���
����У��ͷ����Ѿ����ڵĶ������û�У��򴴽�һ���¶���FlyWeight�ǳ��ࡣ
*/

#include"toolshop.h"

/*
��Ԫģʽ����Ҫ�ŵ��ǣ���ͬ����ֻҪ����һ�ݣ��⽵����ϵͳ�ж�����������Ӷ�������ϵͳ��ϸ���ȶ�����ڴ������ѹ����
*/

/*��Ԫģʽ�ı��ʣ� ������벻�䣬��#�����乲��#*/


int main() {
	//������Ԫ
	ToolShop* flyweightFactory1 = new ToolShop;
	Wrench* smallWrench = flyweightFactory1->Factory("Small");
	smallWrench->Operation("Mike");
	Wrench* mediumWrench = flyweightFactory1->Factory("Medium");
	mediumWrench->Operation("Sara");
	Wrench* largeWrench = flyweightFactory1->Factory("Large");
	largeWrench->Operation("Steven");
	Wrench* smallWrench1 = flyweightFactory1->Factory("Small");
	smallWrench1->Operation("Jane");



	printf("--------------ָ���ַ��ӡ-----------------\n");
	
	// ����ָ���ַ��ӡ
	printf("smallWrench address: {%p}\n", smallWrench);
	printf("mediumWrench address: {%p}\n", mediumWrench);
	printf("largeWrench address: {%p}\n", largeWrench);
	printf("smallWrench1 address: {%p}\n", smallWrench1);
	

	cout << "-------------------------------" << endl;
	cout << "Simple FlyWeight Obj is same ? " << endl;
	if (smallWrench == smallWrench1) {
		cout << "ConcreteWrench1 and ConcreteWrench2 Is same" << endl;
	}
	else {
		cout << "Is different" << endl;
	}
	cout <<endl<< "################################" << endl<<endl;


	//������Ԫ
	list<string> compositeState;
	compositeState.push_back("Small");
	compositeState.push_back("Medium");
	compositeState.push_back("Large");
	compositeState.push_back("Small");
	compositeState.push_back("Medium");

	ToolShop* complexFlyWeightFactory = new ToolShop();
	Wrench* complexfly1 = complexFlyWeightFactory->Factory(compositeState);
	Wrench* complexfly2 = complexFlyWeightFactory->Factory(compositeState);

	complexfly1->Operation("Mike1");
	complexfly2->Operation("Sara1");
	
	cout << endl<< "Complex FlyWeight Obj is same ? " << endl;
	if (complexfly1 == complexfly2) {
		cout << "Is same" << endl;
	}
	else {
		cout << "PersonalWrenchBox1 and PersonalWrenchBox2 Is different" << endl;
	}

	
	return 0;
}