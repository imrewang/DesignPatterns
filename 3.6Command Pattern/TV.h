#ifndef TV_H
#define TV_H

/*����ʵ�к�ʵʩ�Ķ���Receiver��
Receiver��TV������ʵʩ��ִ��һ������Ķ���
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
