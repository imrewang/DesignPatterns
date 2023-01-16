//��Ԫ�������toolshop
//���꣬�����������򵽸��ֹ���

#ifndef TOOLSHOP_H
#define TOOLSHOP_H


/*
��Ԫ����������������ṩһ�����ڴ洢��Ԫ�������Ԫ�أ�
���û���Ҫ����ʱ�����ȴ���Ԫ���л�ȡ��
�����Ԫ���в����ڣ��򴴽�һ���µ���Ԫ���󷵻ظ��û���������Ԫ���б������������
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


