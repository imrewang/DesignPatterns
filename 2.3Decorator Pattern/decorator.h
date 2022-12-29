//装饰器的接口Decorator

#ifndef DECOTATOR_H
#define DECOTATOR_H

#include"cake.h"

//Virtual Decorator 维持一个指向Component对象的指针，并定义与Component接口一致的接口
//Decorator是抽象装饰器
class Decorator :public Cake {
public:
	Decorator(Cake* cake=0){
		this->decorator_Init(cake);
	}

	void decorator_Init(Cake* cake) {
		if (cake == 0) {
			this->m_cake = new OriginalCake;
		}
		else {
			this->m_cake = cake;
		}
	}

	virtual void cake_Info() {
		m_cake->cake_Info();
	}

	virtual float cake_Price() {
		return m_cake->cake_Price();
	}
protected:
	Cake* m_cake;
};


//Concrete Decorator 具体向组件添加职责

//EggAddCake 是给当前饼再加一个鸡蛋
class EggAddCake :public Decorator {
public:
	EggAddCake(Cake* cake = 0) {
		this->decorator_Init(cake);
	}

	void cake_Info() {
		m_cake->cake_Info();
		cout << "Add Egg ";
	}

	float cake_Price() {
		return m_cake->cake_Price()+1.5;
	}
};

//SausageAddCake 是给当前饼再加一个香肠
class SausageAddCake :public Decorator {
public:
	SausageAddCake(Cake* cake = 0) {
		this->decorator_Init(cake);
	}

	void cake_Info() {
		m_cake->cake_Info();
		cout << "Add Sausage ";
	}

	float cake_Price() {
		return m_cake->cake_Price() + 2.0;
	}
};



#endif // !DECOTATOR_H
