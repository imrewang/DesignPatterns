#ifndef CONCRETESTATE_H
#define CONCRETESTATE_H

/*
具体状态角色/上下文角色(Concrete State)：具体实现该状态对应的行为(功能方法)，并且在需要的情况下实现状态的切换。

具体的状态处理类中经常需要获取环境(Context)自身的数据，甚至在必要的时候会回调环境(Context)的方法，
因此，通常将环境(Context)自身当作一个参数传递给具体的状态处理类
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
