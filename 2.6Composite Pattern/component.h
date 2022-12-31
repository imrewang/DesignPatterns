//����ӿ�Component
//����

#ifndef COMPONENT_H
#define COMPONENT_H

#include<vector>
#include<string>
#include<iostream>

using namespace std;

class Organization;

//Component��Component������ӿ�
class Component {
public:
	Component();

	virtual void jobs();
	virtual Organization* getOrganization();
	virtual bool add(Component* component);
	virtual bool remove(Component* component);
	virtual vector<Component*>* getIterator();
};




#endif // !COMPONENT_H
