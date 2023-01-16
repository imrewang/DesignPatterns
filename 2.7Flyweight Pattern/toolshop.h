//享元管理对象toolshop
//五金店，可以在这里买到各种工具

#ifndef TOOLSHOP_H
#define TOOLSHOP_H


/*
享元工厂类的作用在于提供一个用于存储享元对象的享元池，
当用户需要对象时，首先从享元池中获取，
如果享元池中不存在，则创建一个新的享元对象返回给用户，并在享元池中保存该新增对象。
*/

#include"wrench.h"
#include"personalwrenchbox.h"
#include"concretewrench.h"
#include"foreach.h"
#include<list>

class ToolShop {
public:
	Wrench* Factory(list<string> compositeState);
	Wrench* Factory(string size);
private:
	map<string, Wrench*> m_shareWrenchBox;
};

#endif // !TOOLSHOP_H


