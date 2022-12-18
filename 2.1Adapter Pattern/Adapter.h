//��������Adapter

/*
Target ����Clientʹ�õ��ض��ӿ�
Client ��Ҫ�����
Adaptee һ���Ѿ����ڵĽӿ�
Adapter ��Adaptee��Target�ӿڽ�������������� deque
*/


#ifndef ADAPTER_H
#define ADAPTER_H

#include"deque.h"
#include"stack.h"

//Adapter ������
class Adapter :public Deque, public Stack {
public:
	Adapter(){}

	void stack_push(int n) {
		cout << "Adapter: push: " << endl;
		this->deque_push_back(n);
	}

	void stack_pop() {
		cout << "Adapter: pop: " << endl;
		this->deque_pop_back();
	}
};



#endif // !ADAPTER_H
