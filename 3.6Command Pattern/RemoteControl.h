#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

/*Invoker�����ߣ�RemoteControl��Ҫ������ִ������
Ҫ������ִ������RemoteControl��*/

#include"Command.h"

/*
Invoker��������/�����ߣ�������ķ����ߣ���ͨ�����������ִ������
һ�������߲�����Ҫ�����ʱȷ��������ߣ������ֻ�����������֮����ڹ�����
�ڳ�������ʱ����������������execute() ����ӵ��ý����ߵ���ز�����
*/

class RemoteControl//ң��
{
public:
	static void operate(Command* command);
};

#endif // !REMOTECONTROL_H
