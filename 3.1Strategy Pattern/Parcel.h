#ifndef PARCEL_H
#define PARCEL_H

#include"AbstractExpress.h"

class Parcel
{
public:
    Parcel(AbstractExpress* express = 0);
    ~Parcel();

    void setAddress(const string& str);
    void setExpress(AbstractExpress* express);
    void Operate();

private:
    AbstractExpress* m_express;
    string m_address;
};

#endif // !PARCEL_H




