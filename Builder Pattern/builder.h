#include<string>
#include<stdio.h>
#include<iostream>

using namespace std;
/*Builder 
抽象构造者，创造Product各个部件的抽象接口；
ConcreteBuilder 
具体构造者，创造Product各个部件的具体实现接口；
Director 
指导者，该类引导Builder来实现一个产品构造的成体流程；
Product 
产品，表示被构造的复杂对象；
*/

/*
1.客户创建Director对象，并通过Director对想要的Builder对象配置；
2.生成产品部件；
3.返回各部件组合成的产品总成；
*/


//产品基类
class Car {
public:
	//获取产品部件函数
	string get_engine() {
		return m_engine;
	}
	string get_gearbox() {
		return m_gearbox;
	}
	string get_chassis() {
		return m_chassis;
	}

	//设置产品部件函数
	void set_engine(string engine) {
		m_engine = engine;
		cout << "Car: set_engine: Creat " << engine << endl;
	}
	void set_gearbox(string gearbox) {
		m_gearbox =gearbox;
		cout << "Car: set_gearbox: Creat " << gearbox << endl;
	}
	void set_chassis(string chassis) {
		m_chassis = chassis;
		cout << "Car: set_chassis: Creat " << chassis << endl;
	}

private:
	string m_engine;
	string m_gearbox;
	string m_chassis;
};
//产品子类
//宝马车产品
class BM :public Car {
public: 
	BM() {
		cout << "BM: BM: Start build BM" << endl;
	}
};
//奔驰车产品
class BZ :public Car {
public:
	BZ() {
		cout << "BZ: BZ: Start build BZ" << endl;
	}
};



//抽象建造者类
class CarBuilder {
public:
	/*纯虚函数的写法就是在函数声明后面加“=0”，不写函数体。*/
	virtual Car* build_car() = 0;//建造车
	/*虚函数使用的其核心目的是通过基类访问派生类定义的函数。
	所有可以在其子类重新定义父类的做法这种行为成为覆盖（override）,或者为重写。
	*/
	virtual void build_engine(){}//造引擎
	virtual void build_gearbox(){}//造变速箱
	virtual void build_chassis(){}//造底盘

};
//具体宝马建造者类
class BMBuilder :public CarBuilder {
public:
	BMBuilder() {
		m_car = new BM();
	}
	void build_engine() {
		m_car->set_engine("BM engine");
	}
	void build_gearbox() {
		m_car->set_gearbox("BM gearbox");
	}
	void build_chassis() {
		m_car->set_chassis("BM chassis");
	}
	Car* build_car(){
		return m_car;
	}
private:
	Car* m_car;
};
//具体奔驰建造者类
class BZBuilder :public CarBuilder {
public:
	BZBuilder() {
		m_car = new BZ();
	}
	void build_engine() {
		m_car->set_engine("BZ engine");
	}
	void build_gearbox() {
		m_car->set_gearbox("BZ gearbox");
	}
	void build_chassis() {
		m_car->set_chassis("BZ chassis");
	}
	Car* build_car() {
		return m_car;
	}
private:
	Car* m_car;
};

//director指导者
class Director {
public:
	Car* construct_car(CarBuilder* car_builder) {
		car_builder->build_engine();
		car_builder->build_gearbox();
		car_builder->build_chassis();
		cout << "Director: construct_car: car build finished" << endl;
		return car_builder->build_car();
	}
};
