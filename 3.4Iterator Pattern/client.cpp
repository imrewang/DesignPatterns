/*
������ģʽ��Ҫ��ͼ�ǣ�
�ṩһ�ַ���˳�����һ���ۺ϶����еĸ���Ԫ�أ��Ҳ���Ҫ��¶�ö�����ڲ���ʾ��
*/

/*��һ��ConcreteAggregate���������������ݣ��½�һ�������ĵ���������������������*/

#include<iostream>
#include"concreteaggregate.h"
#include"concreteiterator.h"


/* 
Iterator: �������ӿڣ� ��ϵͳ�ṩ������hasNext, next, remove
ConcreteIterator: ����ĵ������࣬�������
Aggregate: һ��ͳһ�ľۺϽӿڣ����ͻ��˺;���ۺϽ���
ConcreteAggregate: ����ľۺϳ��ж��󼯺ϣ����ṩһ�������� ����һ�����������õ�����������ȷ��������
Client: �ͻ��ˣ�ͨ��Iterator��Aggregate��������
*/


/*������ģʽ���Ƿ����˼��϶���ı�����Ϊ�������һ����������������
�����ȿ�����������¶���ϵ��ڲ��ṹ���ֿ����ⲿ����͸���ط��ʼ����ڲ������ݡ�*/

int main() {
	cout << "Template is int." << endl;
	Aggregate<int>* aggr = new ConcreteAggregate<int>;
	int num = 3;
	aggr->push(num--);
	aggr->push(num--);
	aggr->push(num--);
	Iterator<int>* iter = aggr->createIterator();
	for (iter->first(); !iter->isDone(); iter->next()) {
		cout << "Num is " << *(iter->currentItem()) << endl;
	}



	cout << "Template is float." << endl;
	Aggregate< float>* aggr1 = new ConcreteAggregate< float>;
	float num1 = 9.5;
	aggr1->push(num1--);
	aggr1->push(num1--);
	aggr1->push(num1--);
	Iterator<float>* iter1 = aggr1->createIterator();
	for (iter1->first(); !iter1->isDone(); iter1->next()) {
		cout << "Num is " << *(iter1->currentItem()) << endl;
	}
	return 0;
}