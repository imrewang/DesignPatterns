#include "AbstractObserver.h"
void AbstractObserver::setOperation(const string& operation)
{
	m_operation = operation;
}

void AbstractObserver::setTelNo_(const string& telNo_)
{
	m_telNo_ = telNo_;
}

string AbstractObserver::telNo_() const
{
	return m_telNo_;
}
