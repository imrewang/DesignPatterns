#pragma once
/*简单工厂模式
简单工厂是由一个抽象产品类和一个具体工厂类实现的；
抽象产品类，具体产品类，具体工厂类。
*/
#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

//抽象产品类
class BM {
public:
	/*虚函数
	当涉及继承关系的时候，对于某些函数，基类和派生类希望有各自的版本，那么基类可以将函数声明为虚函数。
	对于基类而言，其中的成员函数可以分为两种，一种希望派生类直接继承；第二种希望派生类有自己的版本，此时应当声明为虚函数。
	对于派生类而言，并不是一定需要重写从基类继承来的虚函数。如果重写虚函数，那么派生类将有自己的版本，如果不重写，那么将使用基类的版本。
	*/
	virtual void GetBM() = 0;
	/*纯虚函数
	纯虚函数它在基类中没有定义，但要求任何派生类都要定义自己的实现方法。
	在基类中实现纯虚函数的方法是在函数原型后加“=0”
	动物作为一个基类可以派生出老虎、孔雀等子类，但动物本身生成对象明显不合常理。
	*/
	
};

//具体产品1
class BM111 :public BM {
public:
	BM111(){}
	void GetBM() {
		cout << "BM 111" << endl;
	}
};

//具体产品2
class BM222 :public BM {
public:
	BM222(){}
	void GetBM() {
		cout << "BM 222" << endl;
	}
};

//具体工厂类
class SimpleFactory {
public:
	SimpleFactory(){}

	BM* CreaterBM(string name) {
		if (name == "BM111") {
			return new BM111();
		}
		else if (name == "BM222") {
			return new BM222();
		}
		else {
			return NULL;
		}
	}
};


