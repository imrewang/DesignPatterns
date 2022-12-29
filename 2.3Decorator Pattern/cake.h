//����Ľӿ�(Component)

#ifndef CAKE_H
#define CAKE_H

#include<iostream>

using namespace std;

//Virtual Component �������Ľӿڣ����Ը���Щ����̬�����ְ��
//Cake�ǳ��󼦵�����ӿ�
class Cake {
public:
	virtual void cake_Info() = 0;
	virtual float cake_Price() = 0;
};

//Concrete Component ʵ�����󣬿��Ը������������һЩְ��
//OriginalCake�ǲ����κ����ϵ�ԭζ�������
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
