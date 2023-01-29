/*
״̬ģʽ�Ĳ�������4�����ֱ��ǣ�
AbstractState��DrawState��״̬�Ľӿ�
ConcreteState��DrawRed DrawYellow DrawBlue������״̬��ʵ��
Context��WhiteBoard�������࣬����ͻ�����Ȥ�Ľӿڣ�ά��һ��ConcreteState������ʵ��
Client �û�
*/


/*
�ͻ���(Client)��ʹ�û������ɫ���״̬װ��
�ͻ���һ��ֻ�ͻ���(Context)�������ͻ��˿�����״̬����������һ������(Context)��һ��������ϣ��Ͳ�����Ҫ��״̬����򽻵��ˡ�
�ͻ���ͨ�������������ڼ�״̬��ά����Ҳ�����������������ʹ����һ�������״̬�������
*/

#include"Context.h"
#include"ConcreteState.h"

/*ʵ��һ����ͼ���������˵��״̬ģʽ�������и���ͼ���������ֻ�����ɫ���ֱ��Ǻ�ɫ����ɫ����ɫ��
���ǿ������õ�ǰ���ʵ���ɫ֮���ٻ�ͼ���ϻ���ָ��ͼ�Σ�*/

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