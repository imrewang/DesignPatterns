#include"RemoteControl.h"
void RemoteControl::operate(Command* command)
{
	command->execute();
}
