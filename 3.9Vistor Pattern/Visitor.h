
#ifndef VISITOR_H
#define VISITOR_H

#include <string>

class Hospital;
class Restaurant;

/*
抽象访问者角色(AbstractVisitor)：接口或者抽象类。声明了一个或者多个具体访问者角色必须实现的方法

定义对具体元素的visit方法，参数就是具体元素，理论上来说方法数等于元素个数。
访问者模式适用于元素结构比较稳定的场景。 如果元素不稳定经常变化的话，那么访问者是要一直修改的，不适合使用访问者模式。
*/

class AbstractVisitor
{
public:
    virtual void visitHospital(Hospital* place) = 0;
    virtual void visitRestaurant(Restaurant* place) = 0;
};

/*
具体访问者(ConcreteVistor)：实现抽象访问者角色所声明的接口，也就是抽象访问者所声明的各个具体访问元素操作。
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
抽象元素角色(AbstractElement)：接口或者抽象类。声明一个接受方法，接收一个访问者对象作为一个参数 。

接受不同的访问者对象，然后在内部将自己转发到访问者对象visit()方法内。
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
具体元素(ConcreteElement)：实现了抽象元素角色所规定的接受操作。

提供接受访问者访问的具体实现，通常都是采用visitor.visit()来实现
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
结构对象角色(ObjectStruture)：用来维护元素，并提供一个方法来接受访问者访问所有的元素
*/

#endif // VISITOR_H

