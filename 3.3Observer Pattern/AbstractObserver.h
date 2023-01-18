#ifndef ABSTRACTOBSERVER_H
#define ABSTRACTOBSERVER_H

//抽象观察者角色 / 抽象订阅者(Abstract Observer)： 
//为所有的具体观察者定义在收到通知时更新自己的方法

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
