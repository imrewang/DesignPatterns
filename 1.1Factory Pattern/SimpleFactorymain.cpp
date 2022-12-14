//客户类

/*#include<QCoreApplication>*/
#include"simplefactory.h"

int main(int argc, char* argv[]) {
	/*argc
	是命令行总的参数个数，即argc记录了用户在运行程序的命令行中输入的参数总的个数；
	*/
	/*argv[ ]
	是argc个参数，其中第0个参数是可执行程序/文件的全名，其后跟的参数是用户的输入的参数；
	*/
	SimpleFactory bmFactory;
	BM* car1 = bmFactory.CreaterBM("BM111");
	BM* car2 = bmFactory.CreaterBM("BM222");
	car1->GetBM();
	car2->GetBM();
	return 0;
}
