//����Ľӿ�Component

#ifndef SHISHKEBAB_H//���⴮
#define SHISHKEBAB_H

#include<iostream>

using namespace std;



//Subsystem classes��ChoppedLamb�� PickledLamb�� BarbecueBraze�� LambWithBarbecueBrazeObj�� FinishedShishKebab��ʵ����ϵͳ�Ĺ��ܣ�
//������Facade ���������û��Facade ���κ������Ϣ
class ChoppedLamb {//����ԭ��
public:
	ChoppedLamb() {
		cout << "Original chopped lamb raw" << endl;
	}
};

class PickledLamb {//������
public:
	PickledLamb(ChoppedLamb* choppedLamb = 0) :m_choppedLamb(choppedLamb) {}
	void ProcessLamb() {
		cout << "Pickled Lamb" << endl;
	}
protected:
	ChoppedLamb* m_choppedLamb;
};

class BarbecueBraze {//����ǥ��
public:
	BarbecueBraze() {}
	void Wash() {
		cout << "Clean Barbecue Braze" << endl;
	}
};

class LambWithBarbecueBrazeObj {//���õĿ��⴮
public:
	LambWithBarbecueBrazeObj(PickledLamb* pickledLamb=0,BarbecueBraze* barbecueBraze=0)
	:m_barbecueBraze(barbecueBraze),m_pickledLamb(pickledLamb){}

	void ProcessShishKebabObj() {
		cout << "Skew ths lamb with BarbecueBraze" << endl;
	}
	
protected:
	BarbecueBraze* m_barbecueBraze;
	PickledLamb* m_pickledLamb;
};

class FinishedShishKebab {//���õ�����
public:
	FinishedShishKebab(LambWithBarbecueBrazeObj* obj) :m_lambWithBarbecueBrazeObj(obj){}
	void Info() {
		cout << "Got Finished Shish Kebab" << endl;
	}
protected:
	LambWithBarbecueBrazeObj* m_lambWithBarbecueBrazeObj;
};





//Facade ��ShishKebab�� �����û�������ʵ�����ϵͳ����
class ShishKebab {//������
public:
	ShishKebab(){}

	void ProcessBarbecue(ChoppedLamb* inPut, FinishedShishKebab* outPut) {
		PickledLamb* pickedlamb = new PickledLamb(inPut);//������
		BarbecueBraze* barbecueBraze = new BarbecueBraze;//����ǥ��
		barbecueBraze->Wash();//����տ�ͭ��
		LambWithBarbecueBrazeObj* lambWithBarbecueBrazeObj = new LambWithBarbecueBrazeObj(pickedlamb, barbecueBraze);//���õĿ��⴮
		lambWithBarbecueBrazeObj->ProcessShishKebabObj();//�ÿ��⴮������
		FinishedShishKebab* finishedShishKebab = new FinishedShishKebab(lambWithBarbecueBrazeObj);//���õ�����
		outPut = finishedShishKebab;
		cout << "Barbecue this ShishKebabObj" << endl;//����������⴮
	}

};



#endif // !SHISHKEBAB_H

