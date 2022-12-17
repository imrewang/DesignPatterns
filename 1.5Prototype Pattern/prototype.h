#include<string>
#include<stdio.h>
#include<iostream>

using namespace std;

/*Prototype 抽象原型，克隆自生的抽象接口；
ConcretePrototype 具体原型实现，实现克隆自生各个部件的具体实现接口；
Client 用户，让一个原型克隆自生从而创建一个新的对象
*/

/*
总体流程：
客户实例化初步原型产品对象；
客户克隆已经实例化产品对象；
*/

//抽象原型类
class Prototype {
protected:
	string m_car_model;
	string m_engine;
	string m_gearbox;
	string m_chassis;
public:
	Prototype() {}
	virtual ~Prototype(){}
	virtual Prototype* Clone() { return NULL; }
	virtual void Set(string s) = 0;
	virtual void Show(){}
};

//具体原型类1 BZ11
class PrototypeBZ11 :public Prototype {
public:
	//构造函数
	PrototypeBZ11(const string st) {
		if (st.size() == 0) {
			m_car_model = string("PrototypeBZ11: PrototypeBZ11: CarModel BZ11");
			m_engine = string("PrototypeBZ11: PrototypeBZ11: Engine BZ11");
			m_gearbox = string("PrototypeBZ11: PrototypeBZ11: GearBox BZ11");
			m_chassis = string("PrototypeBZ11: PrototypeBZ11: Chassis BZ11");
		}
		else {
			m_car_model = string("PrototypeBZ11: PrototypeBZ11: CarModel BZ11")+st;
			m_engine = string("PrototypeBZ11: PrototypeBZ11: Engine BZ11") + st;
			m_gearbox = string("PrototypeBZ11: PrototypeBZ11: GearBox BZ11") + st;
			m_chassis = string("PrototypeBZ11: PrototypeBZ11: Chassis BZ11") + st;
		}
	}
	//拷贝构造函数
	/*拷贝构造函数只有一个参数， 参数类型是该类的引用.作用是使用类中已经创建好的对象来初始化新创建的对象*/
	PrototypeBZ11(const PrototypeBZ11& r) {
		m_car_model = r.m_car_model;
		m_engine = r.m_engine;
		m_gearbox = r.m_gearbox;
		m_chassis = r.m_chassis;
	}

	~PrototypeBZ11() {}
	
	PrototypeBZ11* Clone() {
		return new PrototypeBZ11(*this);
	}

	void Set(string ss) {
		m_car_model = string("PrototypeBZ11: Set: CarModel BZ11") + ss;
		m_engine = string("PrototypeBZ11: Set: Engine BZ11") + ss;
		m_gearbox = string("PrototypeBZ11: Set: GearBox BZ11") + ss;
		m_chassis = string("PrototypeBZ11: Set: Chassis BZ11") + ss;
	}

	void Show() {
		cout << "PrototypeBZ11: Show: " << endl << m_car_model << endl << m_engine << endl << m_gearbox << endl << m_chassis << endl;
	}
};
//具体原型类2 BZ22
class PrototypeBZ22 :public Prototype {
public:
	//构造函数
	PrototypeBZ22(const string st) {
		if (st.size() == 0) {
			m_car_model = string("PrototypeBZ22: PrototypeBZ22: CarModel BZ22");
			m_engine = string("PrototypeBZ22: PrototypeBZ22: Engine BZ22");
			m_gearbox = string("PrototypeBZ22: PrototypeBZ22: GearBox BZ22");
			m_chassis = string("PrototypeBZ22: PrototypeBZ22: Chassis BZ22");
		}
		else {
			m_car_model = string("PrototypeBZ22: PrototypeBZ22: CarModel BZ22") + st;
			m_engine = string("PrototypeBZ22: PrototypeBZ22: Engine BZ22") + st;
			m_gearbox = string("PrototypeBZ22: PrototypeBZ22: GearBox BZ22") + st;
			m_chassis = string("PrototypeBZ22: PrototypeBZ22: Chassis BZ22") + st;
		}
	}
	//拷贝构造函数
	/*拷贝构造函数只有一个参数， 参数类型是该类的引用.作用是使用类中已经创建好的对象来初始化新创建的对象*/
	PrototypeBZ22(const PrototypeBZ22& r) {
		m_car_model = r.m_car_model;
		m_engine = r.m_engine;
		m_gearbox = r.m_gearbox;
		m_chassis = r.m_chassis;
	}

	~PrototypeBZ22() {}

	PrototypeBZ22* Clone() {
		return new PrototypeBZ22(*this);
	}

	void Set(string ss) {
		m_car_model = string("PrototypeBZ22: Set: CarModel BZ22") + ss;
		m_engine = string("PrototypeBZ22: Set: Engine BZ22") + ss;
		m_gearbox = string("PrototypeBZ22: Set: GearBox BZ22") + ss;
		m_chassis = string("PrototypeBZ22: Set: Chassis BZ22") + ss;
	}

	void Show() {
		cout << "PrototypeBZ22: Show: " << endl << m_car_model << endl << m_engine << endl << m_gearbox << endl << m_chassis << endl;
	}
};

