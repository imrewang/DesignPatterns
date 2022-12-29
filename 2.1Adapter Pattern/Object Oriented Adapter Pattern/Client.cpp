//用户使用

#include"Stack.h"
#include"Queue.h"

int main() {
	Sequence* stack = new Stack();
	Sequence* queue = new Queue();

	stack->sequence_push(0);
	cout << "*" << endl;
	stack->sequence_push(1);
	cout << "##########" << endl;

	queue->sequence_push(0);
	cout << "*" << endl;
	queue->sequence_push(1);
	cout << "##########" << endl;

	stack->sequence_pop();//stack pop from back of vector
	cout << "%%%%%" << endl;
	queue->sequence_pop();//queue pop from front of vector

	delete stack, queue;

	return 0;
}
