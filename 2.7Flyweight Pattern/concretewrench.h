//单纯享元的实现ConcreteWrench

#ifndef CONCRETEWRENCH_H
#define CONCRETEWRENCH_H

/*ConcreteFlyWeight 抽象享元接口单纯享元的实现，该对象时可共享的，切储存状态必须是内部的*/

/*单纯享元模式（即该对象没有外部状态，整个对象可以共享，类似于单例模式）*/

#include"wrench.h"
#include<iostream>

/*
　单纯享元例子以共享的工具箱为例，工具箱内可以放置多个型号的扳手，当需要用大扳手时我们会买一个放在工具箱内，
 需要中号或小号的扳手时再买小号、中号的扳手放在工具箱内，如果朋友需要大号的扳手则可以直接从工具箱中拿出使用，
 但他需要用中号或小号扳手时，就需要先去五金店买一把中号或小号扳手放在工具箱内。
 这样其他人在使用扳手时直接从工具箱内拿出来使用就可以。
*/

class ConcreteWrench :public Wrench {
public:
	ConcreteWrench(string size);
	void Operation(string user);
protected:
	string m_wrenchSize;
};

#endif // !CONCRETEWRENCH_H

