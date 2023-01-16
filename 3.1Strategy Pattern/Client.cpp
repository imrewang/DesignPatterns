#include"Parcel.h"
#include"ConcreteStrategy.h"

/*
策略模式的参与者有4个，分别是：

Strategy（AbstractExpress）抽象策略，所支持算法的公共抽象接口
Concrete Strategy（SlowExpress StandardExpress FastExpress）算法实例
Context（Parcel）上下文，配置使用算法实例的对象
Client 用户
*/


enum ExpressType
{
    STANDARD_EXPRESS = 0,
    FAST_EXPRESS,
    SLOW_EXPRESS
};

/*
一个邮寄快递的例子来说明策略模式，假设我们要寄送一件快递到某一地点，快递打包好后有三种选择，标准快件、特快件、慢件，
本例子将这三种运送方式（Concrete Strategy）抽象出来作为实际策略对象，一个快件单（context）可以选择任意一种方式运送
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