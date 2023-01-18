/*命令模式主要意图是：
将请求封装为一个对象，从而使你可以用不同的请求对客户进行参数化。
有时必须向某对象提交请求，但并不知道关于被请求的操作或请求的接受者的任何信息。
*/

/*
该设计模式的参与者有4个，分别是：

Receiver（TV）具体实施和执行一个请求的对象
Command（Command）声明执行请求的接口
ConcreteCommand（TurnOnCommand TurnOffCommand NextChannelCommand LastChannelCommand）请求的具体实例
Invoker调用者（RemoteControl）要求命令执行请求
Client 用户
*/


#include"ConcreteCommand.h"
#include"RemoteControl.h"

/*我们有台电视它有关机、开机、换台的功能，
我们还有一个具有学习功能的遥控器，给它和电视配置关机、开机、换台的红外线指令，
遥控器本身并不知道这些红外线有什么功能，但是电视接收到特定红外线会执行相应的指令：
*/

int main() {
	TV* tv = new TV;
	Command* turnOn = new TurnOnCommand(tv);
	Command* turnOff = new TurnOffCommand(tv);
	Command* nextChannel = new NextChannelCommand(tv);
	Command* lastChannel = new LastChannelCommand(tv);

	RemoteControl::operate(turnOn);
	RemoteControl::operate(turnOff);
	RemoteControl::operate(nextChannel);
	RemoteControl::operate(lastChannel);

	return 0;
}