#include "AbstractSubject.h"
AbstractSubject::AbstractSubject():m_status(STATUS_NOTHING)
{
}

void AbstractSubject::attach(AbstractObserver* observer)
{
	m_observers.push_back(observer);
}

void AbstractSubject::remove(AbstractObserver* observer)
{
	list<AbstractObserver*>::iterator iter;
	for (iter = m_observers.begin(); iter != m_observers.end(); iter++) {
		if ((*iter) == observer) {
			cout << observer->telNo_() << " Observer removed.\n" << endl;
			m_observers.erase(iter);
			return;
		}
	}
	return;
}

void AbstractSubject::notify()
{
	if (STATUS_NOTHING == m_status) {
		return;
	}

	list<AbstractObserver*>::iterator iter;

	for (iter = m_observers.begin(); iter != m_observers.end(); iter++) {
		(*iter)->update(m_name);
	}
}

void AbstractSubject::setStatus(const Status& status)
{
	m_status = status;
}

Status AbstractSubject::getStatus() const
{
	return m_status;
}
