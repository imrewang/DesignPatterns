#include<string>
#include<stdio.h>
#include<iostream>

using namespace std;
/*Builder 
�������ߣ�����Product���������ĳ���ӿڣ�
ConcreteBuilder 
���幹���ߣ�����Product���������ľ���ʵ�ֽӿڣ�
Director 
ָ���ߣ���������Builder��ʵ��һ����Ʒ����ĳ������̣�
Product 
��Ʒ����ʾ������ĸ��Ӷ���
*/

/*
1.�ͻ�����Director���󣬲�ͨ��Director����Ҫ��Builder�������ã�
2.���ɲ�Ʒ������
3.���ظ�������ϳɵĲ�Ʒ�ܳɣ�
*/


//��Ʒ����
class Car {
public:
	//��ȡ��Ʒ��������
	string get_engine() {
		return m_engine;
	}
	string get_gearbox() {
		return m_gearbox;
	}
	string get_chassis() {
		return m_chassis;
	}

	//���ò�Ʒ��������
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
//��Ʒ����
//������Ʒ
class BM :public Car {
public: 
	BM() {
		cout << "BM: BM: Start build BM" << endl;
	}
};
//���۳���Ʒ
class BZ :public Car {
public:
	BZ() {
		cout << "BZ: BZ: Start build BZ" << endl;
	}
};



//����������
class CarBuilder {
public:
	/*���麯����д�������ں�����������ӡ�=0������д�����塣*/
	virtual Car* build_car() = 0;//���쳵
	/*�麯��ʹ�õ������Ŀ����ͨ��������������ඨ��ĺ�����
	���п��������������¶��常�������������Ϊ��Ϊ���ǣ�override��,����Ϊ��д��
	*/
	virtual void build_engine(){}//������
	virtual void build_gearbox(){}//�������
	virtual void build_chassis(){}//�����

};
//���屦��������
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
//���屼�۽�������
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

//directorָ����
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
