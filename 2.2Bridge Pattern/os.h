//����ʵ����ĳ���ӿڣ�Implementor)

#ifndef OS_H
#define OS_H

#include<iostream>

using namespace std;

//����ʵ����ĳ���ӿ�Implementor �ǳ������ϵͳ

class OS {
public:
	virtual void InitOS() = 0;
};
#endif // !OS_H
