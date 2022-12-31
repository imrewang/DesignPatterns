//对象的接口Component

#ifndef SHISHKEBAB_H//烤肉串
#define SHISHKEBAB_H

#include<iostream>

using namespace std;



//Subsystem classes（ChoppedLamb， PickledLamb， BarbecueBraze， LambWithBarbecueBrazeObj， FinishedShishKebab）实现子系统的功能，
//处理由Facade 分配的任务，没有Facade 的任何相关信息
class ChoppedLamb {//羊肉原料
public:
	ChoppedLamb() {
		cout << "Original chopped lamb raw" << endl;
	}
};

class PickledLamb {//腌羊肉
public:
	PickledLamb(ChoppedLamb* choppedLamb = 0) :m_choppedLamb(choppedLamb) {}
	void ProcessLamb() {
		cout << "Pickled Lamb" << endl;
	}
protected:
	ChoppedLamb* m_choppedLamb;
};

class BarbecueBraze {//烤肉钎子
public:
	BarbecueBraze() {}
	void Wash() {
		cout << "Clean Barbecue Braze" << endl;
	}
};

class LambWithBarbecueBrazeObj {//穿好的烤肉串
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

class FinishedShishKebab {//烤好的羊肉
public:
	FinishedShishKebab(LambWithBarbecueBrazeObj* obj) :m_lambWithBarbecueBrazeObj(obj){}
	void Info() {
		cout << "Got Finished Shish Kebab" << endl;
	}
protected:
	LambWithBarbecueBrazeObj* m_lambWithBarbecueBrazeObj;
};





//Facade （ShishKebab） 分配用户请求给适当的子系统对象
class ShishKebab {//烤羊肉
public:
	ShishKebab(){}

	void ProcessBarbecue(ChoppedLamb* inPut, FinishedShishKebab* outPut) {
		PickledLamb* pickedlamb = new PickledLamb(inPut);//腌羊肉
		BarbecueBraze* barbecueBraze = new BarbecueBraze;//烤肉钎子
		barbecueBraze->Wash();//清洁烧烤铜焊
		LambWithBarbecueBrazeObj* lambWithBarbecueBrazeObj = new LambWithBarbecueBrazeObj(pickedlamb, barbecueBraze);//穿好的烤肉串
		lambWithBarbecueBrazeObj->ProcessShishKebabObj();//用烤肉串烤羊肉
		FinishedShishKebab* finishedShishKebab = new FinishedShishKebab(lambWithBarbecueBrazeObj);//烤好的羊肉
		outPut = finishedShishKebab;
		cout << "Barbecue this ShishKebabObj" << endl;//烤这个烤羊肉串
	}

};



#endif // !SHISHKEBAB_H

