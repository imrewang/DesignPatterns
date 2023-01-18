/*����ģʽ��Ҫ��ͼ�ǣ�
�������װΪһ�����󣬴Ӷ�ʹ������ò�ͬ������Կͻ����в�������
��ʱ������ĳ�����ύ���󣬵�����֪�����ڱ�����Ĳ���������Ľ����ߵ��κ���Ϣ��
*/

/*
�����ģʽ�Ĳ�������4�����ֱ��ǣ�

Receiver��TV������ʵʩ��ִ��һ������Ķ���
Command��Command������ִ������Ľӿ�
ConcreteCommand��TurnOnCommand TurnOffCommand NextChannelCommand LastChannelCommand������ľ���ʵ��
Invoker�����ߣ�RemoteControl��Ҫ������ִ������
Client �û�
*/


#include"ConcreteCommand.h"
#include"RemoteControl.h"

/*������̨�������йػ�����������̨�Ĺ��ܣ�
���ǻ���һ������ѧϰ���ܵ�ң�����������͵������ùػ�����������̨�ĺ�����ָ�
ң����������֪����Щ��������ʲô���ܣ����ǵ��ӽ��յ��ض������߻�ִ����Ӧ��ָ�
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