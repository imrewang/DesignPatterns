/*
������ģʽ�Ĳ�������5�����ֱ��ǣ�
AbstractVisitor ��������ߣ�������ʾ���Ԫ��visit**�Ľӿ�
AbstractElement ����Ԫ�أ�����һ�����ܲ�����accept�ӿ�
ConcreteVisitor��Doctor Chef��������ʵ����ʵ�ֳ���������������ķ��ʲ���
ConcreteElement��Hospital Resteraunt��Ԫ��ʵ����ʵ�ֳ���Ԫ���ṩ��accept������ͨ����visitor.visit**(this)
Client �û�
*/


#include"Visitor.h"


/*
��С������һ��ҽԺ��һ��������ÿ�춼���в�ͬ���˷����������ط������ڷ����߲�ͬ���������ط�Ҫ������Ҳ������
ҽ��ȥҽԺ��Ϊ�˹��������˿�������ʦȥҽԺ��Ϊ�˼�����壬ҽ��ȥ������Ϊ�˳Է�����ʦȥ������Ϊ�˹�����������⿲��ȡ�
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