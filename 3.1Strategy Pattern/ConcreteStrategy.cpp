#include"ConcreteStrategy.h"

SlowExpress::SlowExpress()
{

}

void SlowExpress::expressMail(const string& str)
{
    printf("You parcel will be deliverd to %s in 7 days.", str.c_str());
}


StandardExpress::StandardExpress()
{

}

void StandardExpress::expressMail(const string& str)
{
    printf("You parcel will be deliverd to %s in 3 days.", str.c_str());
}



FastExpress::FastExpress()
{

}

void FastExpress::expressMail(const string& str)
{
    printf("You parcel will be deliverd to %s in 1 days.", str.c_str());
}
