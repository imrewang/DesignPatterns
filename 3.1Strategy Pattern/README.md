### 策略模式(Strategy Pattern) 

假设我们要寄送一件快递到某一地点，快递打包好后有三种选择，标准快件、特快件、慢件，将这三种运送方式（Concrete Strategy）抽象出来作为实际策略对象，一个快件单（context）可以选择任意一种方式运送

抽象策略角色(Abstract Strategy)：AbstractExpress

具体策略角色(Concrete Strategy)：SlowExpress、StandardExpress、FastExpress

策略上下文角色/环境角色(Context Strategy)： Parcel（快递单 Parcel）
