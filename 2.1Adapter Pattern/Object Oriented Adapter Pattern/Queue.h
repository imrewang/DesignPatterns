//Adapter对应于Queue和Stack

#ifndef QUEUE_H
#define QUEUE_H

#include"Deque.h"
#include"Sequence.h"

//类适配器
class Queue :public Sequence {
public:
	Queue() { m_num = new Deque; }

	void sequence_pop() {
		cout << "Queue: pop: " << endl;;
		m_num->deque_pop_front();
	}

	void sequence_push(int n) {
		cout << "Queue: push: " << endl;;
		m_num->deque_push_back(n);
	}


private:
	Deque* m_num;
};

#endif // !QUEUE_H
