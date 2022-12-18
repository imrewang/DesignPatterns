//对接接口Target

#ifndef STACK_H
#define STACK_H

#include<vector>

//Target 对接接口
class Stack {
public:
	Stack(){}

	virtual void stack_pop() {
		cout << "Stack:  pop: " << endl;
		/*if (m_num.size() <= 0) {
			return;
		}
		else {
			m_num.erase(m_num.end());
		}*/
	}

	virtual void stack_push(int n) {
		cout << "Stack: push: " << endl;
		/*m_num.push_back(n);*/
	}

private:
	std::vector<int> m_num;
};

#endif // !STACK_H
