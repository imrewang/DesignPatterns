//扩充抽象类的接口(RedefineAbstraction)

#ifndef DELLCOMPUTER_H
#define DELLCOMPUTER_H

#include"computer.h"
#include"os.h"

//扩充抽象类的接口RedefineAbstraction 是不同品牌的笔记本电脑

class DellComputer:public Computer {
public:
	void InstallOS(OS* os) {
		cout << "This is DellComputer  " ;
		os->InitOS();
	}
};

class AppleComputer :public Computer {
public:
	void InstallOS(OS* os) {
		cout << "This is AppleComputer ";
		os->InitOS();
	}
};

#endif // !DELLCOMPUTER_H
