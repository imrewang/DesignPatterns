#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

//具体观察者角色/具体订阅者(Concrete Observer)： 
//实现抽象观察者角色，观察者接收到消息后，即进行update（更新方法）操作，对接收到的数据进行处理。

#include"AbstractObserver.h"

class ConcreteObserver :public AbstractObserver {
public:
	ConcreteObserver(const string& telNo_);
	void update(const string& name);
};


#endif // !CONCRETEOBSERVER_H
