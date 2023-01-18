#ifndef MEMENTO_H
#define MEMENTO_H

//Memento（Memo）存储内部状态的结构

#include<string>

//Memento(备忘录) : 负责保存好记录,即Originator 内部状态,在需要的时候提供这些内部状态给发起者;

using namespace std;

class Memo {
public:
	Memo(string str = "");
	string getState() const;//在函数后面加 const 的意思是:  该函数是不会修改任何数据成员的。（如果修改了，编译器就会报错）
	void setState(string& str);
private:
	string m_str;
};


#endif // !MEMOENTO_H
