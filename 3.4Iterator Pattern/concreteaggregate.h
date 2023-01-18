#ifndef CONCRETEAGGREGATE_H
#define CONCRETEAGGREGATE_H

/*ConcreteAggregate ����ۺϣ�ʵ�ִ�����Ӧ���������󣬱���ۺ�����*/

#include"aggregate.h"
#include<vector>

using namespace std;

template<class Item>
class ConcreteIterator;

//����ۺϣ�ConcreteAggregate��
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
