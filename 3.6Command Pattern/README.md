### 命令模式（Command Pattern）

电视它有关机、开机、换台的功能，我们还有一个具有学习功能的遥控器，给它和电视配置关机、开机、换台的红外线指令，遥控器本身并不知道这些红外线有什么功能，但是电视接收到特定红外线会执行相应的指令

接收者角色(Receiver)： TV

抽象命令角色(Command)： Command

具体命令角色(Concrete Command) ：TurnOnCommand、TurnOffCommand、NextChannelCommand、LastChannelCommand

调用者角色(Invoker) ： RemoteControl
