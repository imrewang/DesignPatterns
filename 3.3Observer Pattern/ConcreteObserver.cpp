#include "ConcreteObserver.h"
ConcreteObserver::ConcreteObserver(const string& telNo_)
{
	m_telNo_ = telNo_;
}

void ConcreteObserver::update(const string& name)
{
	cout << "Send msg to " << m_telNo_ << " : " << name << " is avalible." << endl;
	cout << m_telNo_ << " Operation: " << m_operation << " ." << endl;
}
