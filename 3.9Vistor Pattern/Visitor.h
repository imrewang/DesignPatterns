
#ifndef VISITOR_H
#define VISITOR_H

#include <string>

class Hospital;
class Restaurant;

/*
��������߽�ɫ(AbstractVisitor)���ӿڻ��߳����ࡣ������һ�����߶����������߽�ɫ����ʵ�ֵķ���

����Ծ���Ԫ�ص�visit�������������Ǿ���Ԫ�أ���������˵����������Ԫ�ظ�����
������ģʽ������Ԫ�ؽṹ�Ƚ��ȶ��ĳ����� ���Ԫ�ز��ȶ������仯�Ļ�����ô��������Ҫһֱ�޸ĵģ����ʺ�ʹ�÷�����ģʽ��
*/

class AbstractVisitor
{
public:
    virtual void visitHospital(Hospital* place) = 0;
    virtual void visitRestaurant(Restaurant* place) = 0;
};

/*
���������(ConcreteVistor)��ʵ�ֳ�������߽�ɫ�������Ľӿڣ�Ҳ���ǳ���������������ĸ����������Ԫ�ز�����
*/

class Doctor : public AbstractVisitor
{
public:
    Doctor();
    virtual void visitHospital(Hospital* place);
    virtual void visitRestaurant(Restaurant* place);
};


class Chef : public AbstractVisitor
{
public:
    Chef();
    virtual void visitHospital(Hospital* place);
    virtual void visitRestaurant(Restaurant* place);
};

/*
����Ԫ�ؽ�ɫ(AbstractElement)���ӿڻ��߳����ࡣ����һ�����ܷ���������һ�������߶�����Ϊһ������ ��

���ܲ�ͬ�ķ����߶���Ȼ�����ڲ����Լ�ת���������߶���visit()�����ڡ�
*/

class AbstractElement
{
public:
    AbstractElement();
    std::string getName();
    virtual void accept(AbstractVisitor* visitor) = 0;
protected:
    std::string m_name;
};

/*
����Ԫ��(ConcreteElement)��ʵ���˳���Ԫ�ؽ�ɫ���涨�Ľ��ܲ�����

�ṩ���ܷ����߷��ʵľ���ʵ�֣�ͨ�����ǲ���visitor.visit()��ʵ��
*/

class Hospital : public AbstractElement
{
public:
    Hospital();
    virtual void accept(AbstractVisitor* visitor);
};


class Restaurant : public AbstractElement
{
public:
    Restaurant();
    virtual void accept(AbstractVisitor* visitor);
};


/*
�ṹ�����ɫ(ObjectStruture)������ά��Ԫ�أ����ṩһ�����������ܷ����߷������е�Ԫ��
*/

#endif // VISITOR_H

