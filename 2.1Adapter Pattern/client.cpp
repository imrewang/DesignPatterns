#include"Adapter.h"

//ClientÐèÒªÊÊÅäµÄ
int main() {
	Stack* s = new Adapter();
	s->stack_push(0);
	cout << "***" << endl;
	s->stack_push(1);
	cout << "##########################" << endl;
	s->stack_pop();
	cout << "***" << endl;
	s->stack_pop();
	return 0;
}