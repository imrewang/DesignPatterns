#ifndef TV_H
#define TV_H

/*具体实行和实施的对象（Receiver）
Receiver（TV）具体实施和执行一个请求的对象
*/

#include<iostream>


using namespace std;



class TV
{
public:
	TV();
	void turnOn();
	void turnOff();
	void nextChannel();
	void lastChannel();
private:
	int m_channel;
};


#endif // !TV_H
