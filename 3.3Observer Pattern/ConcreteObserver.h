#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

//����۲��߽�ɫ/���嶩����(Concrete Observer)�� 
//ʵ�ֳ���۲��߽�ɫ���۲��߽��յ���Ϣ�󣬼�����update�����·������������Խ��յ������ݽ��д���

#include"AbstractObserver.h"

class ConcreteObserver :public AbstractObserver {
public:
	ConcreteObserver(const string& telNo_);
	void update(const string& name);
};


#endif // !CONCRETEOBSERVER_H
