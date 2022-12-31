//抽象接口Component
//实现

#include "component.h"

Component::Component()
{
}

void Component::jobs()
{
	cout << "Component::jobs This is a base Component" << endl;
}

Organization* Component::getOrganization()
{
	return nullptr;
}

bool Component::add(Component* component)
{
	return false;
}

bool Component::remove(Component* component)
{
	return false;
}

vector<Component*>* Component::getIterator()
{
	return nullptr;
}

