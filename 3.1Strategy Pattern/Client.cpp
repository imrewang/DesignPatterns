#include"Parcel.h"
#include"ConcreteStrategy.h"

/*
����ģʽ�Ĳ�������4�����ֱ��ǣ�

Strategy��AbstractExpress��������ԣ���֧���㷨�Ĺ�������ӿ�
Concrete Strategy��SlowExpress StandardExpress FastExpress���㷨ʵ��
Context��Parcel�������ģ�����ʹ���㷨ʵ���Ķ���
Client �û�
*/


enum ExpressType
{
    STANDARD_EXPRESS = 0,
    FAST_EXPRESS,
    SLOW_EXPRESS
};

/*
һ���ʼĿ�ݵ�������˵������ģʽ����������Ҫ����һ����ݵ�ĳһ�ص㣬��ݴ���ú�������ѡ�񣬱�׼������ؿ����������
�����ӽ����������ͷ�ʽ��Concrete Strategy�����������Ϊʵ�ʲ��Զ���һ���������context������ѡ������һ�ַ�ʽ����
*/


int main()
{
    Parcel* parcel = new Parcel();
    AbstractExpress* expressWay;
    ExpressType expressType = STANDARD_EXPRESS;
    switch (expressType)
    {
    case FAST_EXPRESS:
        expressWay = new FastExpress();
        break;
    case SLOW_EXPRESS:
        expressWay = new SlowExpress();
        break;
    default:
        expressWay = new StandardExpress();
        break;
    }
    parcel->setExpress(expressWay);
    parcel->setAddress("Shen Zhen NanShan District.");
    parcel->Operate();

    return 0;
}