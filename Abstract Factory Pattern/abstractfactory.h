#pragma once
/*���󹤳�ģʽ
��������ģʽ�ͳ��󹤳�ģʽ�����������Ʒ�ͳ��󹤳���
���󹤳�ģʽ���������ڣ�����󹤳����ڶԸ������Ʒ������������ԣ�ȥ�������Լ��ǹ�������ģʽ��
ͬ���ģ���������ģʽȥ�����󹤳���תΪʵ�������Ǽ򵥹���ģʽ
���󹤳�ģʽ�ؼ����ڶ��ڹ�����ͬһ��Ʒϵ�е���������ʹ�ã�
��Щ������ܷ����ڲ��õĳ����࣬���ڳ��󹤳�ģʽ�ľ��幤�����п��Խ���������ϣ�
����BM111Factory�� BM111Engine �� BM111GearBox�����ʵ���������������Ϊ���󹤳��ľ��衣
*/
#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

//�������������
class Engine {
public:
	virtual void CreatEngine() = 0;
};
//�������������
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


//��������������
class GearBox {
public:
	virtual void CreatGearBox() = 0;
};
//��������������
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

//���󹤳���
class AbstractFactory {
public:
	virtual Engine* CreatEngine() = 0;
	virtual GearBox* CreatGearBox() = 0;
};
//����BM111������
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
//����BM222������
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
