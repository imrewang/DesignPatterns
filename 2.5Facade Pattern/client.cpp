//用户

#include"shishkebab.h"

/*
外观模式就是准备好切好的羊肉，把羊肉交给专业烤肉师傅，他会烤好后返回给你烤好的羊肉串；
如果你想自己体验烤肉过程的话，可以经过之前说到的步骤完整的完成烤肉过程，或从中间某一步比如说串好的烤肉继续后续步骤
*/

/*外观模式特点
（1）它对客户屏蔽子系统组件，因而减少了客户处理的对象的数目并使得子系统使用起来更加方便。
（2）它实现了子系统与客户之间的松耦合关系，而子系统内部的功能组件往往是紧耦合的。
（3）如果应用需要，它并不限制它们使用子系统类。
*/

int main() {
	//Common User
	//first : use Facade patten
	cout << " Facade patten " << endl;
	ChoppedLamb* raw = new ChoppedLamb();//加不加括号好像对没参数的没有影响
	FinishedShishKebab* product{};
	ShishKebab* shishKebab = new ShishKebab();
	shishKebab->ProcessBarbecue(raw, product);
	product->Info();
	

	//professional User//（3）如果应用需要，它并不限制它们使用子系统类。
	cout << endl << " Standard way" << endl;
	ChoppedLamb* raw1 = new ChoppedLamb;
	PickledLamb* pickedlamb1 = new PickledLamb(raw1);//腌羊肉
	BarbecueBraze* barbecueBraze1 = new BarbecueBraze;//烤肉钎子
	barbecueBraze1->Wash();//清洁烧烤铜焊
	LambWithBarbecueBrazeObj* lambWithBarbecueBrazeObj1 = new LambWithBarbecueBrazeObj(pickedlamb1, barbecueBraze1);//穿好的烤肉串
	lambWithBarbecueBrazeObj1->ProcessShishKebabObj();//用烤肉串烤羊肉
	FinishedShishKebab* finishedShishKebab1 = new FinishedShishKebab(lambWithBarbecueBrazeObj1);//烤好的羊肉
	
	cout << "Barbecue this ShishKebabObj" << endl;
	
	finishedShishKebab1->Info();
	

	return 0;
}