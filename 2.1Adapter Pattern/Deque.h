//Adaptee��Ӧ��Deque
#ifndef DEQUE_H//ͨ�׵�������û����_test_h���ǾͶ���_test_h����ֹ�ظ�����
#define DEQUE_H

#include<vector>
#include<stdio.h>
#include<iostream>

using namespace std;

//Adaptee�Ѿ����ڵĽӿ�
class Deque {
public:
	Deque() {}

	void deque_pop_back() {
		if (m_dnum.size() <= 0) {
			return;
		}
		else {
			cout << "Deque: pop_back: "<<m_dnum.back() << endl;
			m_dnum.erase(m_dnum.end() - 1);
		}
	}
	void deque_pop_front() {
		if (m_dnum.size() <= 0) {
			return;
		}
		else {
			cout << "Deque: pop_front: "<<m_dnum.front() << endl;
			m_dnum.erase(m_dnum.begin());
		}
	}
	void deque_push_back(int n) {
		m_dnum.push_back(n);
		cout << "Deque: push_back: "<< n << endl;
	}
	void deque_push_front(int n) {
		m_dnum.insert(m_dnum.begin(), n);
		cout << "Deque: push_front: "<<n << endl;
	}
private:
	vector<int> m_dnum;
};


#endif // !DEQUE_H