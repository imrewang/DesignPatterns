//客户端
#include"simplefactory.h"

int main() {
	Factory* factoryA = new BM111Factory();
	Factory* factoryB = new BM222Factory();
	BM* carA = factoryA->CreaterBMFactory();/*A.B, A为一个实例化的类(也就是对象)或者结构体, B为A的一个成员.*/
	BM* carB = factoryB->CreaterBMFactory();/*a->b, 是指针指向其成员的运算符, 等价于 (*a).b，A 是指向结构体或者类的指针, B是A中的成员.*/
	carA->GetBM();/*BM* carA有*用->*/
	carB->GetBM();
	return 0;
}