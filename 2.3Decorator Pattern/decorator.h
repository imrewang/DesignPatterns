//װ�����Ľӿ�Decorator

#ifndef DECOTATOR_H
#define DECOTATOR_H

#include"cake.h"

//Virtual Decorator ά��һ��ָ��Component�����ָ�룬��������Component�ӿ�һ�µĽӿ�
//Decorator�ǳ���װ����
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


//Concrete Decorator ������������ְ��

//EggAddCake �Ǹ���ǰ���ټ�һ������
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

//SausageAddCake �Ǹ���ǰ���ټ�һ���㳦
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
