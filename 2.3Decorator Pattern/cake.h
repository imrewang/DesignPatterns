//对象的接口(Component)

#ifndef CAKE_H
#define CAKE_H

#include<iostream>

using namespace std;

//Virtual Component 抽象对象的接口，可以给这些对象动态的添加职责
//Cake是抽象鸡蛋灌饼接口
class Cake {
public:
	virtual void cake_Info() = 0;
	virtual float cake_Price() = 0;
};

//Concrete Component 实例对象，可以给这个对象增加一些职责
//OriginalCake是不加任何配料的原味鸡蛋灌饼
class OriginalCake :public Cake {
public:
	OriginalCake(){}

	void cake_Info() {
		cout << "Original test cake";
	}
	float cake_Price() {//base price
		return 3.0;
	}
};



#endif // !CAKE_H
