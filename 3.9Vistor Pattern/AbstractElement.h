#ifndef ABSTRACTELEMENT_H
#define ABSTRACTELEMENT_H

#include"AbstractVisitor.h"

class AbstractElement
{
public:
	AbstractElement();
	string getName();
	virtual void accept(AbstractVisitor* visitor) = 0;
protected:
	string m_name;
};

#endif // !ABSTRACTELEMENT_H
