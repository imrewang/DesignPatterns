/*
状态模式的参与者有4个，分别是：
AbstractState（DrawState）状态的接口
ConcreteState（DrawRed DrawYellow DrawBlue）具体状态的实现
Context（WhiteBoard）环境类，定义客户感兴趣的接口，维护一个ConcreteState的子类实例
Client 用户
*/


/*
客户类(Client)：使用环境类角色完成状态装换
客户端一般只和环境(Context)交互。客户端可以用状态对象来配置一个环境(Context)，一旦配置完毕，就不再需要和状态对象打交道了。
客户端通常不负责运行期间状态的维护，也不负责决定后续到底使用哪一个具体的状态处理对象。
*/

#include"Context.h"
#include"ConcreteState.h"

/*实现一个绘图板的例子来说明状态模式，我们有个绘图板它有三种画笔颜色，分别是红色、黄色、蓝色，
我们可以设置当前画笔的颜色之后再绘图板上绘制指定图形：*/

int main() {
	WhiteBoard* whiteBoard = new WhiteBoard(new DrawRed());

	cout << endl;

	string drawObj = "Circle";
	whiteBoard->draw(drawObj);

	cout << endl;

	whiteBoard->setState(new DrawYellow());
	whiteBoard->draw(drawObj);

	cout << endl;

	whiteBoard->setState(new DrawBlue());
	whiteBoard->draw(drawObj);

	cout << endl;

	delete whiteBoard;

	return 0;
}