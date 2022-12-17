#include"prototype.h"

int main() {
	Prototype* p_carA = new PrototypeBZ11("NO.11.1");
	Prototype* p_carB = new PrototypeBZ22("NO.22.1");
	Prototype* p_carC = p_carA->Clone();
	Prototype* p_carD = p_carB->Clone();
	p_carA->Show();
	p_carB->Show();
	//ɾ��p->carA,p->carB
	delete p_carA;
	delete p_carB;	
	p_carA = p_carB = NULL;

	//������Զ�p_carC,p_carD��Ӱ��
	p_carC->Show();
	p_carD->Show();
	
	delete p_carC;
	delete p_carD;
	p_carC = p_carD = NULL;
}