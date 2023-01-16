#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H
/*
抽象模板角色(Abstract Template)：抽象模板类，定义了一个用于控制执行流程的具体模板方法、公共实现方法 以及 一些子类必须实现的抽象方法`。
*/

class ExamationPaper
{
public:
    ExamationPaper();
    void doPaper();
protected:
    virtual void fillPersonalInfo() = 0;//写名字和班级
    virtual void finishPaper() = 0;//答卷
    virtual void handInpaper() = 0;//交卷
};

#endif // !ABSTRACTCLASS_H
