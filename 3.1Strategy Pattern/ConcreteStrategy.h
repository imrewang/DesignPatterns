#ifndef CONCRETESTRACTEGY
#define CONCRETESTRACTEGY

#include"AbstractExpress.h"

class SlowExpress : public AbstractExpress
{
public:
    SlowExpress();
    void expressMail(const string& str);
};

class StandardExpress : public AbstractExpress
{
public:
    StandardExpress();
    void expressMail(const string& str);
};


class FastExpress : public AbstractExpress
{
public:
    FastExpress();
    void expressMail(const string& str);
};

#endif // !CONCRETESTRACTEGY
