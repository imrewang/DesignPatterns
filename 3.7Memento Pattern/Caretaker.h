#ifndef CARETAKER_H
#define CARETAKER_H

//Caretaker（MemoContainer）保存内部状态结构的容器

#include"Memento.h"
#include<deque>

//Caretaker(管理者) : 对备忘录对象进行管理,提供保存与获取备忘录的功能,但不能对备忘录的内容进行访问与修改;


#define MAX_SAVE_MEMO 10
//Caretaker同时增加了最大保存备忘录的限制，当备忘录等于MAX_SAVE_MEMO时先删除第一个备忘录后才添加一个备忘录。

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
