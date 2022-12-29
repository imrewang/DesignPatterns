//具体实现抽象接口的类(ConcreteImplementor)
#ifndef CONCRETEOS_H
#define CONCRETEOS_H

#include"os.h"

//具体实现抽象接口的类ConcreteImplementor 是具体的操作系统

class Linux :public OS {
public:
	void InitOS(){
		cout << "Install Linux" << endl;
	}
};

class Windows :public OS {
public:
	void InitOS() {
		cout << "Install Windows" << endl;
	}
};

class MacOS :public OS {
public:
	void InitOS() {
		cout << "Install MacOS" << endl;
	}
};

#endif // !CONCRETEOS_H
