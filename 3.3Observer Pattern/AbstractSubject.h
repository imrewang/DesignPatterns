#ifndef ABSTRACTSUBJECT_H
#define ABSTRACTSUBJECT_H

//抽象被观察者角色/抽象主题角色/抽象发布者(Abstract Subject)： 
//一般用一个抽象类和接口来实现。 定义了增加、删除以及通知观察者对象的方法，职责就是管理和通知观察者。持有观察者对象的集合

#include"AbstractObserver.h"
#include<list>

class AbstractSubject {
public:
	AbstractSubject();
	void attach(AbstractObserver* observer);
	void remove(AbstractObserver* observer);
	void notify();
	virtual void setStatus(const Status& status);
protected:
	Status m_status;
	string m_name;

	virtual Status getStatus()const;
private:
	list<AbstractObserver*> m_observers;
};


#endif // !ABSTRACTSUBJECCT_H
