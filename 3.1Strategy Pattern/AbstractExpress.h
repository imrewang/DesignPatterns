#ifndef ABSTRACTEXPRESS
#define ABSTRACTEXPRESS

#include <string>

using namespace std;

class AbstractExpress
{
public:
    virtual void expressMail(const string& str) = 0;
};

#endif // !ABSTRACTEXPRESS
