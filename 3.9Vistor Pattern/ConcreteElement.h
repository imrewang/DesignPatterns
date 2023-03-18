#ifndef CONCRETEELEMENT_H
#define CONCRETEELEMENT_H


#include"AbstractElement.h"

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


#endif // !CONCRETEELEMENT_H
