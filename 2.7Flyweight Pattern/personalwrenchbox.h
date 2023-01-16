//复合享元的实现PersonalWrenchBox

#ifndef PERSONALWRENCHBOX_H
#define PERSONALWRENCHBOX_H

/*ComplexFlyWeight 抽象享元接口复合享元的实现，该对象不可共享，但是其内部的享元元素可共享*/

/*复合享元模式（该对象有内蕴状态，也有外蕴状态，内蕴状态共享）*/

#include"wrench.h"

/*
复合享元以私人工具箱为例，工具箱内可以放置多个型号的扳手，但是由于扳手总是丢失，
所以每个人都有私人工具箱且不可外借，这个扳手不管你是装配还是维修都可以使用，
如果没有合适的扳手需要自己去五金店买。
*/
/*每个人都有私人工具箱且不可外借，这个扳手不管你是装配还是维修都可以使用*/

class PersonalWrenchBox :public Wrench {
public:
	void Add(string size, Wrench* flyweight);
	void Operation(string user);
private:
	map<string, Wrench*> m_wrenchbox;

};

#endif // !PERSONALWRENCHBOX_H


