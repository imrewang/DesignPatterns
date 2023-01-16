//用户Client

/*
Flyweight 抽象享元接口
ConcreteFlyWeight 抽象享元接口单纯享元的实现，该对象时可共享的，切储存状态必须是内部的
ComplexFlyWeight 抽象享元接口复合享元的实现，该对象不可共享，但是其内部的享元元素可共享
FlyWeightFactory 创建管理享元对象
Client 用户
*/

/*
FlyWeightFactory负责创建和管理享元单元，
当一个客户端请求时，工厂需要检查当前对象池中是否有符合条件的对象，
如果有，就返回已经存在的对象，如果没有，则创建一个新对象，FlyWeight是超类。
*/

#include"toolshop.h"

/*
享元模式的主要优点是：相同对象只要保存一份，这降低了系统中对象的数量，从而降低了系统中细粒度对象给内存带来的压力。
*/

/*享元模式的本质： 分离变与不变，并#将不变共享#*/


int main() {
	//单纯享元
	ToolShop* flyweightFactory1 = new ToolShop;
	Wrench* smallWrench = flyweightFactory1->Factory("Small");
	smallWrench->Operation("Mike");
	Wrench* mediumWrench = flyweightFactory1->Factory("Medium");
	mediumWrench->Operation("Sara");
	Wrench* largeWrench = flyweightFactory1->Factory("Large");
	largeWrench->Operation("Steven");
	Wrench* smallWrench1 = flyweightFactory1->Factory("Small");
	smallWrench1->Operation("Jane");



	printf("--------------指针地址打印-----------------\n");
	
	// 增加指针地址打印
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


	//复合享元
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