#ifndef ORIGINATOR_H
#define ORIGINATOR_H

// Originator��LinuxShell�������ͼ��ش洢״̬�Ķ���

//�����˽�ɫ��Originator�������𴴽�һ������¼����¼������Ҫ�����״̬���߱�״̬�ع�����
#include"Memento.h"
#include<iostream>

//Originator(������) : ��¼��ǰʱ�̵��ڲ�״̬��Ϣ,�ṩ��������¼�ͻָ�����¼���ݵĹ���,����Ҫ����״̬�Ķ���;

class LinuxShell {
public:
	LinuxShell();
	Memo execute();
	void type(string str);
	void load(Memo memo);
private:
	string m_str;
};


#endif // !ORIGINATOR_H
