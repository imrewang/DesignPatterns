#include "Memento.h"
Memo::Memo(string str):m_str(str)
{
}

string Memo::getState() const
{
	return m_str;
}

void Memo::setState(string& str)
{
	m_str = str;
}
