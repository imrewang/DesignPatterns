#ifndef ABSTRACTOBSERVER_H
#define ABSTRACTOBSERVER_H

//����۲��߽�ɫ / ��������(Abstract Observer)�� 
//Ϊ���еľ���۲��߶������յ�֪ͨʱ�����Լ��ķ���

#include<string>
#include<iostream>

using namespace std;

enum Status
{
	STATUS_NOTHING = 0,
	STATUS_AVALIABLE
};

class AbstractObserver {
public:
	virtual void update(const string& name) = 0;
	virtual void setOperation(const string& operation);
	virtual void setTelNo_(const string& telNo_);
	string telNo_() const;
protected:
	string m_operation;
	string m_telNo_;
};


#endif // !ABSTRACTOBSERVER_h
