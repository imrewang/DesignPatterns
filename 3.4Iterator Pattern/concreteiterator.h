#ifndef CONCRETEITERATOR_H
#define CONCRETRITERATOR_H

/*ConcreteIterator �����������ʵ�ֵ������ӿ�*/

#include"iterator.h"
#include"aggregate.h"

//�����������ConcreteIterator ��
template<class Item>
class ConcreteIterator :public Iterator<Item>
{
public:
	ConcreteIterator(Aggregate<Item> *aggregate):m_aggregate(aggregate),m_current(0) {}
	~ConcreteIterator() {}

	void first() {
		m_current = 0;
	}
	void next() {
		if (m_current < m_aggregate->getSize()) {
			++m_current;
		}
	}
	Item* currentItem() {
		if (m_current < m_aggregate->getSize()) {
			return (m_aggregate->at(m_current));
		}
		else {
			return NULL;
		}
	}
	bool isDone() {
		return m_current >= m_aggregate->getSize();
	}

private:
	Aggregate<Item>* m_aggregate;
	int m_current;
};





#endif // !CONCRETEITERATOR_h
