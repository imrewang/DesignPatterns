//Target��Ӧ��Sequence
#ifndef SEQUENCE_H
#define SEQUENCE_H
//�Խӽӿ�
class Sequence {
public:
	Sequence(){}
	virtual void sequence_push(int num) = 0;
	virtual void sequence_pop() = 0;
};

#endif // !SEQUENCE_H
