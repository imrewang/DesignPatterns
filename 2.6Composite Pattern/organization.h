//�����Ӷ���Ľڵ� composite
//����

#ifndef ORGANIZATION_H
#define ORGANIZATION_H

#include"component.h"

//Composite��Organization���������Ӷ���Ľڵ�
class Organization :public Component {
public:
	Organization(const string& department);
	~Organization();

	virtual void jobs();
	virtual Organization* getOrganization();
	virtual bool add(Component* component);
	virtual bool remove(Component* component);
	virtual vector<Component*>* getIterator();
protected:
	vector<Component*> m_leaf;
	string m_department;
};


#endif // !ORGANIZATION_H
