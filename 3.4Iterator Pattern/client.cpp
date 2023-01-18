/*
迭代器模式主要意图是：
提供一种方法顺序访问一个聚合对象中的各个元素，且不需要暴露该对象的内部表示。
*/

/*有一个ConcreteAggregate对象用来保存数据，新建一个针对其的迭代器用来遍历所有数据*/

#include<iostream>
#include"concreteaggregate.h"
#include"concreteiterator.h"


/* 
Iterator: 迭代器接口， 是系统提供，含义hasNext, next, remove
ConcreteIterator: 具体的迭代器类，管理迭代
Aggregate: 一个统一的聚合接口，将客户端和具体聚合解耦
ConcreteAggregate: 具体的聚合持有对象集合，并提供一个方法， 返回一个迭代器，该迭代器可以正确遍历集合
Client: 客户端，通过Iterator和Aggregate依赖子类
*/


/*迭代器模式就是分离了集合对象的遍历行为，抽象出一个迭代器类来负责，
这样既可以做到不暴露集合的内部结构，又可让外部代码透明地访问集合内部的数据。*/

int main() {
	cout << "Template is int." << endl;
	Aggregate<int>* aggr = new ConcreteAggregate<int>;
	int num = 3;
	aggr->push(num--);
	aggr->push(num--);
	aggr->push(num--);
	Iterator<int>* iter = aggr->createIterator();
	for (iter->first(); !iter->isDone(); iter->next()) {
		cout << "Num is " << *(iter->currentItem()) << endl;
	}



	cout << "Template is float." << endl;
	Aggregate< float>* aggr1 = new ConcreteAggregate< float>;
	float num1 = 9.5;
	aggr1->push(num1--);
	aggr1->push(num1--);
	aggr1->push(num1--);
	Iterator<float>* iter1 = aggr1->createIterator();
	for (iter1->first(); !iter1->isDone(); iter1->next()) {
		cout << "Num is " << *(iter1->currentItem()) << endl;
	}
	return 0;
}