//懒汉模式加线程锁的方式是当首次调用的时候初始化单例对象
//通过在初始化过程开始时加线程锁防止实例化多个单例对象
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
