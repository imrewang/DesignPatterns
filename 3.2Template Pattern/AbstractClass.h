#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H
/*
����ģ���ɫ(Abstract Template)������ģ���࣬������һ�����ڿ���ִ�����̵ľ���ģ�巽��������ʵ�ַ��� �Լ� һЩ�������ʵ�ֵĳ��󷽷�`��
*/

class ExamationPaper
{
public:
    ExamationPaper();
    void doPaper();
protected:
    virtual void fillPersonalInfo() = 0;//д���ֺͰ༶
    virtual void finishPaper() = 0;//���
    virtual void handInpaper() = 0;//����
};

#endif // !ABSTRACTCLASS_H
