#ifndef CONCRETECOMMAND_H
#define CONCRETECOMMAND_H

/*ConcreteCommand��TurnOnCommand TurnOffCommand NextChannelCommand LastChannelCommand������ľ���ʵ��
����ָ�ConcreteCommand��
TurnOnCommand ��������
TurnOffCommand �ػ�����
NextChannelCommand ��һ��Ƶ��
LastChannelCommand ��һ��Ƶ��
*/

#include"Command.h"

class TurnOnCommand :public Command
{
public:
	TurnOnCommand(TV* tv);
	virtual void execute();
};


class TurnOffCommand :public Command
{
public:
	TurnOffCommand(TV* tv);
	virtual void execute();
};



class NextChannelCommand :public Command
{
public:
	NextChannelCommand(TV* tv);
	virtual void execute();
};


class LastChannelCommand :public Command
{
public:
	LastChannelCommand(TV* tv);
	virtual void execute();
};

#endif // !CONCRETECOMMAND_H
