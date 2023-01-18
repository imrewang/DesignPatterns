#ifndef AGGREGATE_H
#define AGGREGATE_H

/*Aggregate ����ۺϣ����崴����Ӧ����������Ľӿ�*/

#include"iterator.h"
//����ۺϣ�Aggregate��
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
