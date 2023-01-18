#ifndef COMMAND_H
#define COMMAND_H

/*抽象接口（Command）
Command（Command）声明执行请求的接口*/

#include"TV.h"

class Command
{
public:
	virtual void execute() = 0;
protected:
	TV* m_tv;
};

#endif // !COMMAND_H
