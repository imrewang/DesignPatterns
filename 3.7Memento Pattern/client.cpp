//Client 用户

/*
发起人角色/被备份的角色(Originator)：  负责创建一个备忘录，记录自身需要保存的状态，而且需要具备状态的回滚功能。
备忘录角色(Memento)：  用于存储Originator角色的内部状态，且可以防止Originator以外的对象进行访问Memento。
负责人角色/备忘录管理员角色(Caretaker)：  负责存储，管理备忘录功能。且其本身应该无法对备忘录的内容进行访问
用户(Client)
*/

/*
简单Linux Shell执行器的例子，有一个Shell软件可以通过它执行一些命令，
当执行完命令后我们可能想找回之前执行过的指令文本
，相当于我们在操作linux命令窗口时按↑ \uparrow↑和↓ \downarrow↓按钮时会可以控制显示之前输入的命令行，
恢复好命令后再次按回车即可执行
*/

#include "Caretaker.h"
#include "Originator.h"

/*备忘录模式：在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态。这样以后就可将该对象恢复到原先保存的状态。*/


/*“白箱”备忘录模式
备忘录角色提供一个宽接口的话，备忘录的内部存储状态就对所有对象公开，这就是“白箱实现”。
“白箱”实现破坏了封装性，但是通过程序员自律，可以方便地实现备忘录模式。*/
/*黑箱”备忘录模式
采用内部类来控制访问权限。将备忘录角色作为“备忘发起角色”的一个私有内部类。
将备忘录角色类（Memento）设计成发起人角色类(Originator)的 “内部成员类”，从而将Memento对象封装在Originator里面。*/


int main() {
	MemoContainer memoContainer;
	LinuxShell linuxShell;

	linuxShell.type("cd ~");
	memoContainer.save(linuxShell.execute());
	linuxShell.type("ls -al");
	memoContainer.save(linuxShell.execute());
	linuxShell.type("cal 2022");
	memoContainer.save(linuxShell.execute());

	cout << "----------------------------------------" << endl;
	linuxShell.load(memoContainer.goBack());
	//先在caretaker中goback，调合适Memo，在load中先在momento中调用getstate然后更新m_str
	linuxShell.execute();
	linuxShell.load(memoContainer.goBack());
	linuxShell.execute();

	return 0;
}