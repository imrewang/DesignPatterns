#ifndef MEMENTO_H
#define MEMENTO_H

//Memento��Memo���洢�ڲ�״̬�Ľṹ

#include<string>

//Memento(����¼) : ���𱣴�ü�¼,��Originator �ڲ�״̬,����Ҫ��ʱ���ṩ��Щ�ڲ�״̬��������;

using namespace std;

class Memo {
public:
	Memo(string str = "");
	string getState() const;//�ں�������� const ����˼��:  �ú����ǲ����޸��κ����ݳ�Ա�ġ�������޸��ˣ��������ͻᱨ��
	void setState(string& str);
private:
	string m_str;
};


#endif // !MEMOENTO_H
