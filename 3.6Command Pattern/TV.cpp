#include "TV.h"
TV::TV():m_channel(0)
{

}

void TV::turnOn()
{
	cout << "TV on" << endl;
}

void TV::turnOff()
{
	cout << "TV off" << endl;
}

void TV::nextChannel()
{
	m_channel++;
	cout << "current channel is " << m_channel << endl;
}

void TV::lastChannel()
{
	m_channel--;
	cout << "current channel is " << m_channel << endl;
}
