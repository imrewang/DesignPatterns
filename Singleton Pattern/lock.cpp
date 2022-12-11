//����ģʽ���߳����ķ�ʽ�ǵ��״ε��õ�ʱ���ʼ����������
//ͨ���ڳ�ʼ�����̿�ʼʱ���߳�����ֹʵ���������������
//#include<boost/thread/mutex.hpp>

#include <mutex>

using namespace std;

class Singleton {
private:
	Singleton(){}

	static Singleton* m_pSingleton;
	static mutex m_mutex;
public:
	static Singleton* Instance() {
		m_mutex.lock();
		if (m_pSingleton == nullptr) {
			m_pSingleton = new Singleton();
		}
		m_mutex.unlock();
		return m_pSingleton;
	}
};

Singleton* Singleton::m_pSingleton = nullptr;
