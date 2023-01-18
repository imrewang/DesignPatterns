#ifndef AGGREGATE_H
#define AGGREGATE_H

/*Aggregate 抽象聚合，定义创建相应迭代器对象的接口*/

#include"iterator.h"
//抽象聚合（Aggregate）
template<class Item>
class Aggregate
{
public:
	Aggregate(){}
	virtual ~Aggregate(){}

	virtual int getSize() = 0;
	virtual void push(Item item) = 0;
	virtual Item* at(const int nIndex) = 0;
	virtual Iterator<Item>* createIterator() = 0;
};


#endif // !AGGREGATE_H
