#ifndef CARETAKER_H
#define CARETAKER_H

//Caretaker��MemoContainer�������ڲ�״̬�ṹ������

#include"Memento.h"
#include<deque>

//Caretaker(������) : �Ա���¼������й���,�ṩ�������ȡ����¼�Ĺ���,�����ܶԱ���¼�����ݽ��з������޸�;


#define MAX_SAVE_MEMO 10
//Caretakerͬʱ��������󱣴汸��¼�����ƣ�������¼����MAX_SAVE_MEMOʱ��ɾ����һ������¼������һ������¼��

class MemoContainer
{
public:
	MemoContainer();

	void save(Memo memo);
	Memo goBack();
private:
	deque<Memo> m_memoContainer;
	int m_currentPos;
};


#endif // !CARETAKER_H
