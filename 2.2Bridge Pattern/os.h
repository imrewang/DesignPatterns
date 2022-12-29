//定义实现类的抽象接口（Implementor)

#ifndef OS_H
#define OS_H

#include<iostream>

using namespace std;

//定义实现类的抽象接口Implementor 是抽象操作系统

class OS {
public:
	virtual void InitOS() = 0;
};
#endif // !OS_H
