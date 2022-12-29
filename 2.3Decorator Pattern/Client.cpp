//�û�Client

#include"cake.h"
#include"decorator.h"

//Client �û�
int main() {
	//ԭζ�������
	OriginalCake* originalCake = new OriginalCake;
	originalCake->cake_Info();
	cout << endl << "Price: " << originalCake->cake_Price() << endl;

	//�ӵ��������
	EggAddCake* eggAddCake = new EggAddCake(new OriginalCake);
	eggAddCake->cake_Info();
	cout << endl << "Price: " << eggAddCake->cake_Price() << endl;

	//�ӵ��������
	EggAddCake* eggAddCake2 = new EggAddCake();
	eggAddCake2->cake_Info();
	cout << endl << "Price2: " << eggAddCake2->cake_Price() << endl;

	//�ӵ��ӵ��������
	EggAddCake* eggAddCake3 = new EggAddCake(new EggAddCake());
	eggAddCake3->cake_Info();
	cout << endl << "Price3: " << eggAddCake3->cake_Price() << endl;

	//�ӵ��ӳ��������
	SausageAddCake* sausageAddCake1 = new SausageAddCake(new EggAddCake(new OriginalCake));
	sausageAddCake1->cake_Info();
	cout << endl << "Price: " << sausageAddCake1->cake_Price() << endl;

	//�ӳ��������
	SausageAddCake* sausageAddCake2 = new SausageAddCake();
	sausageAddCake2->cake_Info();
	cout << endl << "Price: " << sausageAddCake2->cake_Price() << endl;

	return 0;

}