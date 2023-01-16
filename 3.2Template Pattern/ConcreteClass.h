#ifndef CONCRETECLASS_H
#define CONCRETECLASS_H
/*
具体模板角色(Concrete Template)：实现抽象模板类中的抽象方法，子类可以编写自己独有的实现逻辑，但是执行流程受抽象模板类控制。
*/
#include"AbstractClass.h"
#include<iostream>

using namespace std;


class EnglishExamationPaper : public ExamationPaper
{
public:
    EnglishExamationPaper();
protected:
    void fillPersonalInfo();
    void finishPaper();
    void handInpaper();
};


class ChineseExamationPaper : public ExamationPaper
{
public:
    ChineseExamationPaper();

protected:
    void fillPersonalInfo();
    void finishPaper();
    void handInpaper();
};

#endif // !CONCTETECLASS_H


