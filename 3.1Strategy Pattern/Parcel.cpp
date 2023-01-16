#include"Parcel.h"

Parcel::Parcel(AbstractExpress* express)
    : m_express(express)
{
    m_address.clear();
}

void Parcel::setAddress(const string& str)
{
    m_address = str;
}

void Parcel::setExpress(AbstractExpress* express)
{
    delete m_express;
    m_express = express;
}

void Parcel::Operate()
{
    if (m_address.size() > 0)
    {
        m_express->expressMail(m_address);
    }
    else
    {
        printf("Please input address with \'setAddress\'!");
    }
}
