# 中介者模式（Mediator Pattern）

以二手车交易为例子，分别有宝马、奔驰车卖家，宝马、奔驰车买家四个对象存在，通过汽车交易中介进行消息交流，卖家告诉中介我要卖车，中介通知买家有人卖车。

抽象中介者(AbstractMediator)：Mediator

抽象对象（Object）：Person

具体中介者(ConcreteMediator)：ConcreteMediator2ndCarSalesShop

具体对象 （ConcreteObject）：ConcreteBMWCustomer、ConcreteBenzCustomer、ConcreteBMWSeller、ConcreteBenzSeller
