#include"Context.h"

WhiteBoard::WhiteBoard(DrawState* state)
{
	m_state = state;
}

WhiteBoard::~WhiteBoard()
{
	delete m_state;
}

void WhiteBoard::setState(DrawState* state)
{
	delete m_state;
	m_state = state;
}

void WhiteBoard::draw(string& str)
{
	m_state->paint(str);
}
