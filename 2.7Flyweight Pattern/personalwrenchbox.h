//������Ԫ��ʵ��PersonalWrenchBox

#ifndef PERSONALWRENCHBOX_H
#define PERSONALWRENCHBOX_H

/*ComplexFlyWeight ������Ԫ�ӿڸ�����Ԫ��ʵ�֣��ö��󲻿ɹ����������ڲ�����ԪԪ�ؿɹ���*/

/*������Ԫģʽ���ö���������״̬��Ҳ������״̬������״̬����*/

#include"wrench.h"

/*
������Ԫ��˽�˹�����Ϊ�����������ڿ��Է��ö���ͺŵİ��֣��������ڰ������Ƕ�ʧ��
����ÿ���˶���˽�˹������Ҳ�����裬������ֲ�������װ�仹��ά�޶�����ʹ�ã�
���û�к��ʵİ�����Ҫ�Լ�ȥ������
*/
/*ÿ���˶���˽�˹������Ҳ�����裬������ֲ�������װ�仹��ά�޶�����ʹ��*/

class PersonalWrenchBox :public Wrench {
public:
	void Add(string size, Wrench* flyweight);
	void Operation(string user);
private:
	map<string, Wrench*> m_wrenchbox;

};

#endif // !PERSONALWRENCHBOX_H


