### 责任链模式(Chain of Responsibility Pattern)

假设我们工作中花费了一笔费用需要报销，提交费用报销单时首先由直属上级领导审批是否可以报销，如果额度超了权限这个报销单就会传到再上一级领导，直到有人接收处理。

抽象处理者(Handler)：AbstractManager

具体处理者(ConcreteHandler)：JuniorManager、IntermediateManager、SeniorManager
