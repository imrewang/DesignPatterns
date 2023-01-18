//�۲���ģʽ��Ҫ��ͼ�ǣ���һ�������״̬�����ı�ʱ�������������Ķ��󶼻���֪ͨ���Զ����¡�
//�۲���ģʽ ��������������(Dependents)������-����(Publish-Subsrcibe)��

#include"ConcreteSubject.h"
#include"ConcreteObserver.h"

/*
�۲���ģʽ�Ĳ�������5�����ֱ��ǣ�
AbstractObserver ����۲��ߣ���Ŀ��ı�ʱ���֪ͨ�Ķ��󣬶�����º�Ӧ�Խӿ�
AbstractSubject ����Ŀ�꣬Ŀ��֪�����Ĺ۲��ߣ��ṩע���ɾ���۲��ߵĽӿ�
ConcreteObserver �۲���ʵ����ʵ�ֽӿڵľ��巽��
ConcreteSubject Ŀ��ʵ����ʵ�ֽӿڵľ��巽��
Client �û�
*/

using namespace std;


/*
���衶Star War����Ϸ��Ҫ���������������һ������Ϸ������֪ͨ���ǣ��������Ǹ����������Լ�����ϵ��ʽ��
���Ƕ�����һ�������õ���Ϸ��������������ÿ���˵����̵ľ�������������ȥ�Ľ�ͨ��ʽ�в�ͬ����Կ���ÿ���˶�ͬһ֪ͨ��ͬ�Ĵ�������
*/


int main() {

    //��һ����StarWar����Ϸ��gameshope�ĳ�����Ϸ��
	ConcreteSubject* starWarGame = new ConcreteSubject("StarWar");

    //�ͻ�A B C��ϵ��ʽ
    AbstractObserver* customerA = new ConcreteObserver("13010012002");
    customerA->setOperation("walk to shope");
    AbstractObserver* customerB = new ConcreteObserver("15010012002");
    customerB->setOperation("bike to shope");
    AbstractObserver* customerC = new ConcreteObserver("17010012002");
    customerC->setOperation("drive to shope");
    
    //�ͻ�A B C������starWarGame���������Ǵ���Ϸ�̵���һ��������
    starWarGame->attach(customerA);
    starWarGame->attach(customerB);
    starWarGame->attach(customerC);

    ////�ͻ� B �ı����⣬����ȡ������Ԥ����
    starWarGame->remove(customerB);

    //��������ս����֪ͨ�����ͻ���
    starWarGame->setStatus(STATUS_AVALIABLE);
    starWarGame->notify();

    return 0;
}