### 装饰器模式

Cake是抽象鸡蛋灌饼接口，OriginalCake是不加任何配料的原味鸡蛋灌饼，Decorator是抽象装饰器，EggAddCake 是给当前饼再加一个鸡蛋，SausageAddCake 是给当前饼再加一个香肠，我们在买鸡蛋灌饼时可以选择什么都不加，或加一个蛋，加多个蛋，加肠，加多个肠，同时加蛋和肠的情况

抽象组件(Component)：Cake

具体组件(ConcreteComponent)：OriginalCake

抽象装饰类(Decorator)：Decorator

具体装饰类(ConcreteDecorator) ：EggAddCake  和  SausageAddCake 
