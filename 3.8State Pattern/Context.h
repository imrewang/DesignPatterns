#ifndef CONTEXT_H
#define CONTEXT_H

/*
�������ɫ/״̬�����ɫ(Context)������ͻ�����Ҫ�Ľӿڣ��ڲ�һ������״̬��ʵ�������������״̬���л�

��״̬ģʽ�У�����(Context)�ǳ���״̬�Ķ���
���ǻ���(Context)�����������״̬��ص���Ϊ�����ǰѴ���״̬�Ĺ���ί�и���״̬��Ӧ��״̬������������
*/
#include"AbstractState.h"

class WhiteBoard
{
public:
    WhiteBoard(DrawState* state);
    ~WhiteBoard();
    void setState(DrawState* state);
    void draw(string& str);

private:
    DrawState* m_state;
};



#endif // !CONTEXT_H
