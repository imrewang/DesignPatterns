//�û�

#include"shishkebab.h"

/*
���ģʽ����׼�����кõ����⣬�����⽻��רҵ����ʦ�������῾�ú󷵻ظ��㿾�õ����⴮��
��������Լ����鿾����̵Ļ������Ծ���֮ǰ˵���Ĳ�����������ɿ�����̣�����м�ĳһ������˵���õĿ��������������
*/

/*���ģʽ�ص�
��1�����Կͻ�������ϵͳ�������������˿ͻ�����Ķ������Ŀ��ʹ����ϵͳʹ���������ӷ��㡣
��2����ʵ������ϵͳ��ͻ�֮�������Ϲ�ϵ������ϵͳ�ڲ��Ĺ�����������ǽ���ϵġ�
��3�����Ӧ����Ҫ����������������ʹ����ϵͳ�ࡣ
*/

int main() {
	//Common User
	//first : use Facade patten
	cout << " Facade patten " << endl;
	ChoppedLamb* raw = new ChoppedLamb();//�Ӳ������ź����û������û��Ӱ��
	FinishedShishKebab* product{};
	ShishKebab* shishKebab = new ShishKebab();
	shishKebab->ProcessBarbecue(raw, product);
	product->Info();
	

	//professional User//��3�����Ӧ����Ҫ����������������ʹ����ϵͳ�ࡣ
	cout << endl << " Standard way" << endl;
	ChoppedLamb* raw1 = new ChoppedLamb;
	PickledLamb* pickedlamb1 = new PickledLamb(raw1);//������
	BarbecueBraze* barbecueBraze1 = new BarbecueBraze;//����ǥ��
	barbecueBraze1->Wash();//����տ�ͭ��
	LambWithBarbecueBrazeObj* lambWithBarbecueBrazeObj1 = new LambWithBarbecueBrazeObj(pickedlamb1, barbecueBraze1);//���õĿ��⴮
	lambWithBarbecueBrazeObj1->ProcessShishKebabObj();//�ÿ��⴮������
	FinishedShishKebab* finishedShishKebab1 = new FinishedShishKebab(lambWithBarbecueBrazeObj1);//���õ�����
	
	cout << "Barbecue this ShishKebabObj" << endl;
	
	finishedShishKebab1->Info();
	

	return 0;
}