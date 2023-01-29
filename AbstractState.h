#ifndef ABSTRACTSTATE_H
#define ABSTRACTSTATE_H

/*
����״̬��ɫ(Abstract State)���ӿڻ��߳����ࡣ����ÿ��״̬�¶�Ӧ����Ϊ(���ܷ���)��������һ�����߶����Ϊ(���ܷ���)��
*/
#include<string>
#include<iostream>

using namespace std;

class DrawState
{
public:
    virtual ~DrawState();
    virtual void paint(string& str) = 0;
};

#endif // !ABSTRACTSTATE_H
