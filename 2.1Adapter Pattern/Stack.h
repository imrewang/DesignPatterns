//Adapter对应于Queue和Stack

#ifndef STACK_H
#define STACK_H

#include"Sequence.h"
#include"Deque.h"

//类适配器
class Stack:public Sequence {
public:
	Stack() { m_num = new Deque; }

	void sequence_pop() {
		cout << "Stack: pop: " << endl;;
		m_num->deque_pop_back();
	}

	void sequence_push(int n) {
		cout << "Stack: push: " << endl;;
		m_num->deque_push_back(n);
	}


private:
	Deque* m_num;
};

#endif // !STACK_H
