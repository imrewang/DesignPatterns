//���������Ľӿ�(RedefineAbstraction)

#ifndef DELLCOMPUTER_H
#define DELLCOMPUTER_H

#include"computer.h"
#include"os.h"

//���������Ľӿ�RedefineAbstraction �ǲ�ͬƷ�ƵıʼǱ�����

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
