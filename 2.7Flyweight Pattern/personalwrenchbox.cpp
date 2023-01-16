#include "personalwrenchbox.h"
void PersonalWrenchBox::Add(string size, Wrench* flyweight)
{
	m_wrenchbox.insert(pair<string, Wrench*>(size, flyweight));
}

void PersonalWrenchBox::Operation(string user)
{
	map<string, Wrench*>::iterator iter;
	for (iter = m_wrenchbox.begin(); iter != m_wrenchbox.end(); iter++) {
		iter->second->Operation(user);
	}
}
