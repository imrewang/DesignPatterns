#ifndef ABSTRACTSUBJECT_H
#define ABSTRACTSUBJECT_H

//���󱻹۲��߽�ɫ/���������ɫ/���󷢲���(Abstract Subject)�� 
//һ����һ��������ͽӿ���ʵ�֡� ���������ӡ�ɾ���Լ�֪ͨ�۲��߶���ķ�����ְ����ǹ����֪ͨ�۲��ߡ����й۲��߶���ļ���

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
