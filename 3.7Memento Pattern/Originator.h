#ifndef ORIGINATOR_H
#define ORIGINATOR_H

// Originator（LinuxShell）创建和加载存储状态的对象

//发起人角色（Originator）：负责创建一个备忘录，记录自身需要保存的状态，具备状态回滚功能
#include"Memento.h"
#include<iostream>

//Originator(发起者) : 记录当前时刻的内部状态信息,提供创建备忘录和恢复备忘录数据的功能,是需要保存状态的对象;

class LinuxShell {
public:
	LinuxShell();
	Memo execute();
	void type(string str);
	void load(Memo memo);
private:
	string m_str;
};


#endif // !ORIGINATOR_H
