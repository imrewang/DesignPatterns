#include"ConcreteState.h"

DrawRed::DrawRed()
{
}

DrawRed::~DrawRed()
{
	cout << "~DrawRed()" << endl;
}

void DrawRed::paint(string& str)
{
	cout << "Draw " << str << " in Red." << endl;
}

DrawYellow::DrawYellow()
{
}

DrawYellow::~DrawYellow()
{
	cout << "~DrawYellow()" << endl;
}

void DrawYellow::paint(string& str)
{
	cout << "Draw " << str << " in Yellow." << endl;
}

DrawBlue::DrawBlue()
{
}

DrawBlue::~DrawBlue()
{
	cout << "~DrawBlue()" << endl;
}

void DrawBlue::paint(string& str)
{
	cout << "Draw " << str << " in Blue." << endl;
}
