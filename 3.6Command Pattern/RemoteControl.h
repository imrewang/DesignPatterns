#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

/*Invoker调用者（RemoteControl）要求命令执行请求
要求命令执行请求（RemoteControl）*/

#include"Command.h"

/*
Invoker（调用者/请求者）：请求的发送者，它通过命令对象来执行请求。
一个调用者并不需要在设计时确定其接收者，因此它只与抽象命令来之间存在关联。
在程序运行时，将调用命令对象的execute() ，间接调用接收者的相关操作。
*/

class RemoteControl//遥控
{
public:
	static void operate(Command* command);
};

#endif // !REMOTECONTROL_H
