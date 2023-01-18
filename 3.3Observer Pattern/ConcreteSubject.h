#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

//具体被观察者角色具体/主题角色/具体发布者(ConcreteSubject)： 
//一般继承抽象被观察者，实现自己本身的业务逻辑，当主题状态发生改变时，向所有注册过的观察者发起通知。


#include"AbstractSubject.h"

class ConcreteSubject :public AbstractSubject {
public:
	ConcreteSubject(const string& name);
};


#endif // !CONCRETESUBJECT_H
