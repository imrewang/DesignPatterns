# 访问者模式(Vistor Pattern)

在小镇上有一个医院和一个餐厅，每天都会有不同的人访问这两个地方，由于访问者不同到这两个地方要做的事也有区别。医生去医院是为了工作给病人看病，厨师去医院是为了检查身体，医生去餐厅是为了吃饭，厨师去餐厅是为了工作给客人烹饪菜肴。

抽象访问者角色(AbstractVisitor)：AbstractVisitor

具体访问者(ConcreteVistor)：Doctor、Chef

抽象元素角色(AbstractElement)：AbstractElement

具体元素(ConcreteElement)：Hospital、Resteraunt
