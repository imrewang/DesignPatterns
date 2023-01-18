#ifndef CONCRETEAGGREGATE_H
#define CONCRETEAGGREGATE_H

/*ConcreteAggregate 具体聚合，实现创建相应迭代器对象，保存聚合数据*/

#include"aggregate.h"
#include<vector>

using namespace std;

template<class Item>
class ConcreteIterator;

//具体聚合（ConcreteAggregate）
template<class Item>
class ConcreteAggregate :public Aggregate<Item>
{
public:
	ConcreteAggregate() {}
	~ConcreteAggregate() {}

	int getSize() {
		return m_data.size();
	}
	void push(Item item) {
		m_data.push_back(item);
	}
	Item* at(const int nIndex) {
		return &m_data[nIndex];
	}
	Iterator<Item>* createIterator() {
		return new ConcreteIterator<Item>(this);
	}
private:
	vector<Item> m_data;
};



#endif // !CONCRETEAGGREGATE_H
