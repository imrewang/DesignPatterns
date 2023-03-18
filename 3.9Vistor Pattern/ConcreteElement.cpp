#include "ConcreteElement.h"
Hospital::Hospital()
{
	m_name = "Hospital No.1";
}

void Hospital::accept(AbstractVisitor* visitor)
{
	visitor->visitHospital(this);
}

Restaurant::Restaurant()
{
	m_name = "Restaurant No.1";
}

void Restaurant::accept(AbstractVisitor* visitor)
{
	visitor->visitRestaurant(this);
}
