### 备忘录模式（Memento Pattern）

一个Shell软件可以通过它执行一些命令，当执行完命令后我们可能想找回之前执行过的指令文本，相当于我们在操作linux命令窗口时按↑ \uparrow↑和↓ \downarrow↓按钮时会可以控制显示之前输入的命令行，恢复好命令后再次按回车即可执行

发起人角色/被备份的角色(Originator)：LinuxShell

备忘录角色(Memento)：Memo

负责人角色/备忘录管理员角色(Caretaker)：MemoContainer
