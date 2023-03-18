

#include "visitor.h"
#include <stdio.h>

Doctor::Doctor()
{

}

void Doctor::visitHospital(Hospital* place)
{
    std::string str = place->getName();
    printf("Doctor visit %s for service patient.\n", str.c_str());
}

void Doctor::visitRestaurant(Restaurant* place)
{
    std::string str = place->getName();
    printf("Doctor visit %s to eat a meal.\n", str.c_str());
}


Chef::Chef()
{

}

void Chef::visitHospital(Hospital* place)
{
    std::string str = place->getName();
    printf("Chef visit %s get medical advice.\n", str.c_str());
}

void Chef::visitRestaurant(Restaurant* place)
{
    std::string str = place->getName();
    printf("Chef visit %s for cooking.\n", str.c_str());
}





AbstractElement::AbstractElement()
{

}


std::string AbstractElement::getName()
{
    return m_name;
}



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




