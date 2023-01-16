//抽象享元的接口Wrench

#ifndef WRENCH_H
#define WRENCH_H

#include<string>
#include<map>

using namespace std;

class Wrench {//扳手
public:
	virtual void  Operation(string str = 0) = 0;
};

#endif // !WRENCH_H



