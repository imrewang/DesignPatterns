#ifndef ABSTRACTSTATE_H
#define ABSTRACTSTATE_H

/*
抽象状态角色(Abstract State)：接口或者抽象类。定义每个状态下对应的行为(功能方法)，可以有一个或者多个行为(功能方法)。
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
