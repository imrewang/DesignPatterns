//����ʵ�ֳ���ӿڵ���(ConcreteImplementor)
#ifndef CONCRETEOS_H
#define CONCRETEOS_H

#include"os.h"

//����ʵ�ֳ���ӿڵ���ConcreteImplementor �Ǿ���Ĳ���ϵͳ

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
