#ifndef CONCRETESTATE_H
#define CONCRETESTATE_H

/*
����״̬��ɫ/�����Ľ�ɫ(Concrete State)������ʵ�ָ�״̬��Ӧ����Ϊ(���ܷ���)����������Ҫ�������ʵ��״̬���л���

�����״̬�������о�����Ҫ��ȡ����(Context)��������ݣ������ڱ�Ҫ��ʱ���ص�����(Context)�ķ�����
��ˣ�ͨ��������(Context)������һ���������ݸ������״̬������
*/
#include"AbstractState.h"

class DrawRed : public DrawState
{
public:
    DrawRed();
    ~DrawRed();
    virtual void paint(string& str);
};


class DrawYellow : public DrawState
{
public:
    DrawYellow();
    ~DrawYellow();
    virtual void paint(string& str);
};

class DrawBlue : public DrawState
{
public:
    DrawBlue();
    ~DrawBlue();
    virtual void paint(string& str);
};


#endif // !CONCRETESTATE_H
