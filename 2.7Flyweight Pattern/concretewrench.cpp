#include "concretewrench.h"
ConcreteWrench::ConcreteWrench(string size)
{
	m_wrenchSize = size;
}

void ConcreteWrench::Operation(string user)
{
	cout << "ConcreteWrench::Operation\tWrench Size = " << m_wrenchSize << endl << "User = " << user << endl;
}
