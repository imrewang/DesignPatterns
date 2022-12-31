//可有子对象的节点 composite
//实现


#include "organization.h"
Organization::Organization(const string& department)
{
	m_department = department;
}

Organization::~Organization()
{
	for (vector<Component*>::iterator i = m_leaf.begin(); i < m_leaf.end(); i++) {
		delete* i;
	}
	m_leaf.clear();
}

void Organization::jobs()
{
	cout << "Organization::jobs\tThis is : " << m_department<< endl;
}

Organization* Organization::getOrganization()
{
	return this;
}

bool Organization::add(Component* component)
{
	m_leaf.push_back(component);
	return true;
}

bool Organization::remove(Component* component)
{
	for (vector<Component*>::iterator i = m_leaf.begin(); i < m_leaf.end(); i++) {
		if (*i == component) {
			m_leaf.erase(i);
			delete component;
			return true;
		}
	}
	cout << "didn't exist" << endl;
	return false;
}

vector<Component*>* Organization::getIterator()
{
	return &m_leaf;
}
