#include "Originator.h"
LinuxShell::LinuxShell()
{
}

Memo LinuxShell::execute()
{
	cout << "execute: " << m_str<< endl;
	//c_str()��String���е�һ�������������ص�ǰ�ַ��������ַ���ַ����string������ַ���ת��Ϊchar*���͵��ַ���
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
