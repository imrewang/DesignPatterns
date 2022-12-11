### 建造者模式

指导者 指导 造 BMW的引擎、变速箱、底盘

指导者 指导 造 BenZ的Engine、GearBox、Chassis

产品(Product)：BMWCar、BenzCar（Car）

抽象建造者(Builder)：CarBuilder（BuildCar、BuildEngine、BuildGearBox、BuildChassis）

具体建造者(ConcreteBuilder)：BMWCarBuilder  和   BenzCarBuilder   （建造  BuildCar、BuildEngine、BuildGearBox、BuildChassis）

建造指挥者(Director)：CarDirector  （调用  BuildCar、BuildEngine、BuildGearBox、BuildChassis）
