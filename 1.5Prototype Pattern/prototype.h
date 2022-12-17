#include<string>
#include<stdio.h>
#include<iostream>

using namespace std;

/*Prototype ����ԭ�ͣ���¡�����ĳ���ӿڣ�
ConcretePrototype ����ԭ��ʵ�֣�ʵ�ֿ�¡�������������ľ���ʵ�ֽӿڣ�
Client �û�����һ��ԭ�Ϳ�¡�����Ӷ�����һ���µĶ���
*/

/*
�������̣�
�ͻ�ʵ��������ԭ�Ͳ�Ʒ����
�ͻ���¡�Ѿ�ʵ������Ʒ����
*/

//����ԭ����
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

//����ԭ����1 BZ11
class PrototypeBZ11 :public Prototype {
public:
	//���캯��
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
	//�������캯��
	/*�������캯��ֻ��һ�������� ���������Ǹ��������.������ʹ�������Ѿ������õĶ�������ʼ���´����Ķ���*/
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
//����ԭ����2 BZ22
class PrototypeBZ22 :public Prototype {
public:
	//���캯��
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
	//�������캯��
	/*�������캯��ֻ��һ�������� ���������Ǹ��������.������ʹ�������Ѿ������õĶ�������ʼ���´����Ķ���*/
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

