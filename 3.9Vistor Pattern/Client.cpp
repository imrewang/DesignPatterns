/*
访问者模式的参与者有5个，分别是：
AbstractVisitor 抽象访问者，定义访问具体元素visit**的接口
AbstractElement 抽象元素，声明一个接受操作的accept接口
ConcreteVisitor（Doctor Chef）访问者实例，实现抽象访问者中声明的访问操作
ConcreteElement（Hospital Resteraunt）元素实例，实现抽象元素提供的accept操作，通常是visitor.visit**(this)
Client 用户
*/


#include"Visitor.h"


/*
在小镇上有一个医院和一个餐厅，每天都会有不同的人访问这两个地方，由于访问者不同到这两个地方要做的事也有区别。
医生去医院是为了工作给病人看病，厨师去医院是为了检查身体，医生去餐厅是为了吃饭，厨师去餐厅是为了工作给客人烹饪菜肴。
*/

int main() {
    AbstractElement* hospital = new Hospital();
    AbstractElement* restaurant = new Restaurant();

    AbstractVisitor* doctor = new Doctor();
    AbstractVisitor* chef = new Chef();

    hospital->accept(doctor);
    restaurant->accept(doctor);

    hospital->accept(chef);
    restaurant->accept(chef);
    


	return 0;
}