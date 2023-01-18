#ifndef CONCRETECOMMAND_H
#define CONCRETECOMMAND_H

/*ConcreteCommand（TurnOnCommand TurnOffCommand NextChannelCommand LastChannelCommand）请求的具体实例
具体指令（ConcreteCommand）
TurnOnCommand 开机命令
TurnOffCommand 关机命令
NextChannelCommand 下一个频道
LastChannelCommand 上一个频道
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
