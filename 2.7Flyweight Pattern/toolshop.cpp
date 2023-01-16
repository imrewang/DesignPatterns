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
	//先从缓存中查找对象
	Wrench* fly = m_shareWrenchBox[size];
	cout << "size=" << size << endl;
	if (fly == NULL) {
		cout << "fly == NULL" << endl;
		//如果对象不存在则创建一个新的Flyweight对象
		fly = new ConcreteWrench(size);
		//把这个新的Flyweight对象添加到缓存中
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
