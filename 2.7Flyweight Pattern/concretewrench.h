//������Ԫ��ʵ��ConcreteWrench

#ifndef CONCRETEWRENCH_H
#define CONCRETEWRENCH_H

/*ConcreteFlyWeight ������Ԫ�ӿڵ�����Ԫ��ʵ�֣��ö���ʱ�ɹ���ģ��д���״̬�������ڲ���*/

/*������Ԫģʽ�����ö���û���ⲿ״̬������������Թ��������ڵ���ģʽ��*/

#include"wrench.h"
#include<iostream>

/*
��������Ԫ�����Թ���Ĺ�����Ϊ�����������ڿ��Է��ö���ͺŵİ��֣�����Ҫ�ô����ʱ���ǻ���һ�����ڹ������ڣ�
 ��Ҫ�кŻ�С�ŵİ���ʱ����С�š��кŵİ��ַ��ڹ������ڣ����������Ҫ��ŵİ��������ֱ�Ӵӹ��������ó�ʹ�ã�
 ������Ҫ���кŻ�С�Ű���ʱ������Ҫ��ȥ������һ���кŻ�С�Ű��ַ��ڹ������ڡ�
 ������������ʹ�ð���ʱֱ�Ӵӹ��������ó���ʹ�þͿ��ԡ�
*/

class ConcreteWrench :public Wrench {
public:
	ConcreteWrench(string size);
	void Operation(string user);
protected:
	string m_wrenchSize;
};

#endif // !CONCRETEWRENCH_H

