/*
抽象化角色 Abstraction：
定义抽象的接口，包含一个对实现化角色的引用，抽象角色的方法需要调用实现化角色；

扩展抽象化角色 RefinedAbstraction：
抽象化角色的子类，一般对抽象部分的方法进行完善和扩展，实现父类中的业务方法，并通过组合/聚合关系调用实现化角色中的业务方法

实现化角色 Implementor：
定义具体行为、具体特征的应用接口，供扩展抽象化角色使用，一般情况下是由实现化角色提供基本的操作，而抽象化角色定义基于实现部分基本操作的业务方法；

具体实现化角色 ConcreteImplementor：
完善实现化角色中定义的具体逻辑。

客户端（Client）：
仅关心如何与抽象部分合作。但是，客户端需要将抽象对象与一个实现对象连接起来。
*/


//抽象类接口 abstaction
#ifndef COMPUTER_H
#define COMPUTER_H

#include"os.h"

//抽象类的接口Abstraction 是抽象笔记本电脑

class Computer {
public:
	virtual void InstallOS(OS* os) = 0;
};

#endif // !COMPUTER_H
