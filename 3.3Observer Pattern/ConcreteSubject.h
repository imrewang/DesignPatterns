#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

//���屻�۲��߽�ɫ����/�����ɫ/���巢����(ConcreteSubject)�� 
//һ��̳г��󱻹۲��ߣ�ʵ���Լ������ҵ���߼���������״̬�����ı�ʱ��������ע����Ĺ۲��߷���֪ͨ��


#include"AbstractSubject.h"

class ConcreteSubject :public AbstractSubject {
public:
	ConcreteSubject(const string& name);
};


#endif // !CONCRETESUBJECT_H
