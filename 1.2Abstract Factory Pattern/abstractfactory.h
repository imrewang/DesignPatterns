#pragma once
/*抽象工厂模式
工厂方法模式和抽象工厂模式都包含抽象产品和抽象工厂，
抽象工厂模式的区别在于，其抽象工厂对于对个抽象产品打包生产的特性，去掉该特性即是工厂方法模式。
同样的，工厂方法模式去掉抽象工厂类转为实体类则是简单工厂模式
抽象工厂模式关键在于对于归属于同一产品系列的配件做组合使用，
这些配件可能分属于不用的抽象类，但在抽象工厂模式的具体工厂类中可以将他们做组合，
正如BM111Factory对 BM111Engine 与 BM111GearBox的组合实例化，这便是我认为抽象工厂的精髓。
*/
#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

//抽象引擎配件类
class Engine {
public:
	virtual void CreatEngine() = 0;
};
//具体引擎配件类
class BM111Engine :public Engine {
public:
	BM111Engine() {
		this->CreatEngine();
	}
	void CreatEngine() {
		cout << "creat BM111 Engine" << endl;
	}
};
class BM222Engine :public Engine {
public:
	BM222Engine() {
		this->CreatEngine();
	}
	void CreatEngine() {
		cout << "creat BM222 Engine" << endl;
	}
};


//抽象变速箱配件类
class GearBox {
public:
	virtual void CreatGearBox() = 0;
};
//具体变速箱配件类
class BM111GearBox :public GearBox {
public:
	BM111GearBox() {
		this->CreatGearBox();
	}
	void CreatGearBox() {
		cout << "creat Bm111 GearBox" << endl;
	}
};
class BM222GearBox :public GearBox {
public:
	BM222GearBox() {
		this->CreatGearBox();
	}
	void CreatGearBox() {
		cout << "creat Bm222 GearBox" << endl;
	}
};

//抽象工厂类
class AbstractFactory {
public:
	virtual Engine* CreatEngine() = 0;
	virtual GearBox* CreatGearBox() = 0;
};
//具体BM111工厂类
class BM111Factory :public AbstractFactory {
public:
	BM111Factory(){}
	Engine* CreatEngine() {
		return new BM111Engine();
	}
	GearBox* CreatGearBox() {
		return new BM111GearBox();
	}
};
//具体BM222工厂类
class BM222Factory :public AbstractFactory {
public:
	BM222Factory() {}
	Engine* CreatEngine() {
		return new BM222Engine();
	}
	GearBox* CreatGearBox() {
		return new BM222GearBox();
	}
};
