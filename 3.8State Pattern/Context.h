#ifndef CONTEXT_H
#define CONTEXT_H

/*
环境类角色/状态处理角色(Context)：定义客户类需要的接口，内部一个具体状态的实例，并负责具体状态的切换

在状态模式中，环境(Context)是持有状态的对象，
但是环境(Context)自身并不处理跟状态相关的行为，而是把处理状态的功能委托给了状态对应的状态处理类来处理
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
