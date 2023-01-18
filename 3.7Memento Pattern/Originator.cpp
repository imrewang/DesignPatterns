#include "Originator.h"
LinuxShell::LinuxShell()
{
}

Memo LinuxShell::execute()
{
	cout << "execute: " << m_str<< endl;
	//c_str()是String类中的一个函数，它返回当前字符串的首字符地址，将string类对象字符串转化为char*类型的字符。
	Memo tmpMemo(m_str);
	m_str.clear();
	return tmpMemo;
}

void LinuxShell::type(string str)
{
	cout << "type: " << str << endl;
	m_str = str;
}

void LinuxShell::load(Memo memo)
{
	m_str = memo.getState();
	cout << "load: " << m_str << endl;
}
