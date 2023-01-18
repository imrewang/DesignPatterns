//观察者模式主要意图是：当一个对象的状态发生改变时，所有依赖它的对象都会获得通知并自动更新。
//观察者模式 两个别名，依赖(Dependents)，发布-订阅(Publish-Subsrcibe)。

#include"ConcreteSubject.h"
#include"ConcreteObserver.h"

/*
观察者模式的参与者有5个，分别是：
AbstractObserver 抽象观察者，在目标改变时获得通知的对象，定义更新和应对接口
AbstractSubject 抽象目标，目标知道他的观察者，提供注册和删除观察者的接口
ConcreteObserver 观察者实例，实现接口的具体方法
ConcreteSubject 目标实例，实现接口的具体方法
Client 用户
*/

using namespace std;


/*
假设《Star War》游戏快要发售了我们想店铺一到货游戏就立刻通知我们，所以我们给店铺留下自己的联系方式。
我们都想在一到货就拿到游戏，但是由于我们每个人到店铺的距离有区别，所以去的交通方式有不同这可以看做每个人对同一通知不同的处理方法。
*/


int main() {

    //有一个叫StarWar的游戏是gameshope的畅销游戏。
	ConcreteSubject* starWarGame = new ConcreteSubject("StarWar");

    //客户A B C联系方式
    AbstractObserver* customerA = new ConcreteObserver("13010012002");
    customerA->setOperation("walk to shope");
    AbstractObserver* customerB = new ConcreteObserver("15010012002");
    customerB->setOperation("bike to shope");
    AbstractObserver* customerC = new ConcreteObserver("17010012002");
    customerC->setOperation("drive to shope");
    
    //客户A B C都想买starWarGame，所以他们从游戏商店做一个储备。
    starWarGame->attach(customerA);
    starWarGame->attach(customerB);
    starWarGame->attach(customerC);

    ////客户 B 改变主意，所以取消他的预订。
    starWarGame->remove(customerB);

    //如果星球大战可用通知保留客户。
    starWarGame->setStatus(STATUS_AVALIABLE);
    starWarGame->notify();

    return 0;
}