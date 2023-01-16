#ifndef CONCRETECLASS_H
#define CONCRETECLASS_H
/*
����ģ���ɫ(Concrete Template)��ʵ�ֳ���ģ�����еĳ��󷽷���������Ա�д�Լ����е�ʵ���߼�������ִ�������ܳ���ģ������ơ�
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


