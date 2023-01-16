#include "toolshop.h"
Wrench* ToolShop::Factory(list<string> compositeState)
{
	PersonalWrenchBox* complexFlyWeight = new PersonalWrenchBox();
	foreach(string size, compositeState) {
		complexFlyWeight->Add(size, this->Factory(size));
	}
	return complexFlyWeight;
}

Wrench* ToolShop::Factory(string size)
{
	//�ȴӻ����в��Ҷ���
	Wrench* fly = m_shareWrenchBox[size];
	cout << "size=" << size << endl;
	if (fly == NULL) {
		cout << "fly == NULL" << endl;
		//������󲻴����򴴽�һ���µ�Flyweight����
		fly = new ConcreteWrench(size);
		//������µ�Flyweight������ӵ�������
		//m_shareWrenchBox.insert(pair<string, Wrench*>(size, fly));
		//m_shareWrenchBox.insert({ size,fly });
		m_shareWrenchBox[size] = fly;		
		Wrench* f = m_shareWrenchBox[size];
		if (f == NULL) {
			cout << "f == NULL" << endl;
		}
		else {
			cout << "f != NULL" << endl;
		}
	}
	return fly;
}
