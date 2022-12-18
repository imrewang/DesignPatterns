//类适配器Adapter

/*
Target 定义Client使用的特定接口
Client 需要适配的
Adaptee 一个已经存在的接口
Adapter 对Adaptee与Target接口进行适配的适配器 deque
*/


#ifndef ADAPTER_H
#define ADAPTER_H

#include"deque.h"
#include"stack.h"

//Adapter 适配器
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
