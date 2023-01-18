#include "ConcreteCommand.h"
TurnOnCommand::TurnOnCommand(TV* tv)
{
	m_tv = tv;
}

void TurnOnCommand::execute()
{
	m_tv->turnOn();
}

TurnOffCommand::TurnOffCommand(TV* tv)
{
	m_tv = tv;
}

void TurnOffCommand::execute()
{
	m_tv->turnOff();
}

NextChannelCommand::NextChannelCommand(TV* tv)
{
	m_tv = tv;
}

void NextChannelCommand::execute()
{
	m_tv->nextChannel();
}

LastChannelCommand::LastChannelCommand(TV* tv)
{
	m_tv = tv;
}

void LastChannelCommand::execute()
{
	m_tv->lastChannel();
}
