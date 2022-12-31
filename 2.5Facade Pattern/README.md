### 外观模式/门面模式

烤羊肉串制作过程，首先对切好的羊肉进行腌制，洗干净穿羊肉的钎子，之后把羊肉穿到钎子上放在一起，最后经过烧烤完成美味的烤肉；

外观模式就是准备好切好的羊肉，把羊肉交给专业烤肉师傅，他会烤好后返回给你烤好的羊肉串。（如果你想自己体验烤肉过程的话，可以经过之前说到的步骤完整的完成烤肉过程，或从中间某一步比如说串好的烤肉继续后续步骤）

Facade(门面角色/外观角色)：ShishKebab

SubSystem(子系统角色)：ChoppedLamb、 PickledLamb、 BarbecueBraze、 LambWithBarbecueBrazeObj、 FinishedShishKebab
