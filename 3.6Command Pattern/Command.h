#ifndef COMMAND_H
#define COMMAND_H

/*����ӿڣ�Command��
Command��Command������ִ������Ľӿ�*/

#include"TV.h"

class Command
{
public:
	virtual void execute() = 0;
protected:
	TV* m_tv;
};

#endif // !COMMAND_H
